// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraComponent.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/DamageType.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Sound/SoundCue.h"
#include "Perception/AISense_Hearing.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	MuzzleComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleComponent"));
	MuzzleComponent->SetupAttachment(Mesh);

	LaserSight = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Laser Sight"));
	LaserSight->SetupAttachment(MuzzleComponent);
	
	
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	CharacterController = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	SetupRecoil();
	CurrentReserveAmmo = MaxReserveAmmo;
	CurrentAmmo = MagazineSize;
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(RecoilTimeLine.IsPlaying())
	{
		RecoilTimeLine.TickTimeline((DeltaTime));
	}

	if(RecoilTimeLine.IsReversing())
	{
		RecoilTimeLine.TickTimeline(DeltaTime);
	}
}

void AGun::PullTrigger()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Black, FString::Printf(TEXT("Bool: %s"), bCanShoot ? TEXT("true") : TEXT("false")));
	if (CurrentAmmo > 0 && bIsReloading == false && bCanShoot == true) {
		UGameplayStatics::PlaySoundAtLocation(this, GunFiringSoundCue, MuzzleComponent->GetComponentLocation());
		UAISense_Hearing::ReportNoiseEvent(GetWorld(), this->GetActorLocation(), 1.f, this, 2500.f, "Noise");
		bCanShoot = false;
		bIsShooting = true;
		StartRecoil();
		GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &AGun::FireRateTimer, FireRate);
		CurrentAmmo -= 1;
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, MuzzleComponent, TEXT("MuzzleComponent"));

		APawn* OwnerPawn = Cast<APawn>(GetOwner());

		if (OwnerPawn == nullptr) return;
		AController* OwnerController = OwnerPawn->GetController();
		if (OwnerController == nullptr) return;

		FVector Location;
		FRotator Rotation;
		//OwnerController->GetPlayerViewPoint(Location, Rotation);

		Location = MuzzleComponent->GetComponentLocation();
		Rotation = MuzzleComponent->GetComponentRotation();

		//DrawDebugCamera(GetWorld(), Location, Rotation, 90, 2, FColor::Red, true);

		FVector End = Location + Rotation.Vector() * MaxRange;

		FHitResult Hit;
		bool bSuccess = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel1);
		if (bSuccess) {
			FVector ShotDirection = -Rotation.Vector();
			DrawDebugPoint(GetWorld(), Hit.Location, 20, FColor::Red, true);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
			AActor* HitActor = Hit.GetActor();
			if (HitActor != nullptr) {
				//FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
				UGameplayStatics::ApplyDamage(HitActor, Damage, OwnerController, this, UDamageType::StaticClass());
				//HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
			}
		}
		OwnerPawn->AddControllerPitchInput(FMath::RandRange(0.f, -1.f));
		OwnerPawn->AddControllerYawInput(FMath::RandRange(0.f, 1.f));
	}

	if (CurrentAmmo == 0) {
		UGameplayStatics::PlaySoundAtLocation(this, GunDryFireSoundCue, MuzzleComponent->GetComponentLocation());
		GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, TEXT("RELOAD"));
	}
}

void AGun::FireRateTimer() {
	bCanShoot = true;
	bIsShooting = false;
	//ReverseRecoil();
}

void AGun::Reload() {
	
	if (CurrentAmmo != MagazineSize && CurrentReserveAmmo > 0 && bIsReloading == false) {
		bIsReloading = true;
		GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &AGun::ReloadTimer, ReloadTime);
		UGameplayStatics::PlaySoundAtLocation(this, GunReloadingSoundCue, MuzzleComponent->GetComponentLocation());
		
		float AmmoDifference = MagazineSize - CurrentAmmo;
		if (CurrentAmmo + CurrentReserveAmmo < MagazineSize + 1) {
			CurrentAmmo += CurrentReserveAmmo;
			CurrentReserveAmmo = 0;
			GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, TEXT("RELOAD"));
		} else {
			CurrentAmmo += AmmoDifference;
			CurrentReserveAmmo -= AmmoDifference;
		}		
	}
}

void AGun::ReloadTimer() {	
	bIsReloading = false;
}

void AGun::ToggleLaserSight() {
	bIsLaserOn = !bIsLaserOn;
	LaserSight->ToggleVisibility(bIsLaserOn);
}

void AGun::StartHorizontalRecoil(float value)
{
	CharacterController->AddControllerYawInput(value);
}

void AGun::StartVerticalRecoil(float value)
{
	CharacterController->AddControllerPitchInput(value);
}

void AGun::StartRecoil()
{
	RecoilTimeLine.PlayFromStart();
}

void AGun::ReverseRecoil()
{
	RecoilTimeLine.Reverse();
}

void AGun::SetupRecoil()
{
	FOnTimelineFloat XRecoilCurve;
	FOnTimelineFloat YRecoilCurve;

	XRecoilCurve.BindUFunction(this, FName("StartHorizontalRecoil"));
	YRecoilCurve.BindUFunction(this, FName("StartVerticalRecoil"));

	if (!HorizontalCurve || !VerticalCurve)
	{
		return;
	}

	RecoilTimeLine.AddInterpFloat(HorizontalCurve, XRecoilCurve);
	RecoilTimeLine.AddInterpFloat(VerticalCurve, YRecoilCurve);
}


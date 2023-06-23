// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraComponent.h"

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
	MuzzleComponent->SetupAttachment(RootComponent);

	LaserSight = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Laser Sight"));
	LaserSight->SetupAttachment(MuzzleComponent);

	MaxReserveAmmo = 36.f;
	MagazineSize = 12.f;
	CurrentAmmo = MagazineSize;
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::PullTrigger()
{
	if (CurrentAmmo > 0 && bIsReloading == false) {
		CurrentAmmo -= 1;
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, MuzzleComponent, TEXT("MuzzleComponent"));

		UE_LOG(LogTemp, Warning, TEXT("You've Been Shot"));
		APawn* OwnerPawn = Cast<APawn>(GetOwner());

		if (OwnerPawn == nullptr) return;
		AController* OwnerController = OwnerPawn->GetController();
		if (OwnerController == nullptr) return;

		FVector Location;
		FRotator Rotation;
		OwnerController->GetPlayerViewPoint(Location, Rotation);

		//DrawDebugCamera(GetWorld(), Location, Rotation, 90, 2, FColor::Red, true);

		FVector End = Location + Rotation.Vector() * MaxRange;

		FHitResult Hit;
		bool bSuccess = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel1);
		if (bSuccess) {
			FVector ShotDirection = -Rotation.Vector();
			DrawDebugPoint(GetWorld(), Hit.Location, 20, FColor::Red, true);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
		}
	} else {
		GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, TEXT("RELOAD"));
	}
}

void AGun::PullTrigger(FVector End)
{
	if (CurrentAmmo > 0 && bIsReloading == false) {
		CurrentAmmo -= 1;
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, MuzzleComponent, TEXT("MuzzleComponent"));

		UE_LOG(LogTemp, Warning, TEXT("You've Been Shot"));
		APawn* OwnerPawn = Cast<APawn>(GetOwner());

		if (OwnerPawn == nullptr) return;
		AController* OwnerController = OwnerPawn->GetController();
		if (OwnerController == nullptr) return;

		FVector Location;
		FRotator Rotation;
		OwnerController->GetPlayerViewPoint(Location, Rotation);

		//DrawDebugCamera(GetWorld(), Location, Rotation, 90, 2, FColor::Red, true);

		//FVector End = LaserSight->GetRelativeLocation() + LaserSight->GetRelativeRotation().Vector() * MaxRange;

		FHitResult Hit;
		bool bSuccess = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel1);
		if (bSuccess) {
			FVector ShotDirection = -Rotation.Vector();
			DrawDebugPoint(GetWorld(), Hit.Location, 20, FColor::Red, true);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, TEXT("RELOAD"));
	}
}

void AGun::Reload() {
	
	if (CurrentAmmo != MagazineSize && CurrentReserveAmmo > 0 && bIsReloading == false) {
		bIsReloading = true;
		GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &AGun::ReloadTimer, ReloadTime);
		float AmmoDifference = MagazineSize - CurrentAmmo;
		if (CurrentAmmo + CurrentReserveAmmo < 13) {
			CurrentAmmo += CurrentReserveAmmo;
			CurrentReserveAmmo = 0;
		
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


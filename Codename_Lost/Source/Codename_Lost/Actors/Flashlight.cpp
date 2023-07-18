// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashlight.h"
#include "Components/SpotLightComponent.h"
#include "TimerManager.h"
#include "Controllers/CharacterController.h"
#include "Engine/EngineTypes.h"
#include "GenericPlatform/GenericPlatformCrashContext.h"
#include "Codename_Lost/AI/WraithController.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
// Sets default values
AFlashlight::AFlashlight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	Light = CreateDefaultSubobject<USpotLightComponent>(TEXT("Light"));
	Light->SetupAttachment(Mesh);
	Light->Intensity = 0.f;

	MaxBatteryLife = 60.f;
	CurrentBatteryLife = MaxBatteryLife;

	DrainBatteryLifeTickTime = 1.f;
	BatteryDrainPerTick = 1.f;

	bIsLightOn = false;
	Time = 0.f;
}

// Called when the game starts or when spawned
void AFlashlight::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FlashlightRechargeTimerHandle, this, &AFlashlight::BatteryDrain, DrainBatteryLifeTickTime, true);
	bCanBeSwitchedOn = true;
	
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWraithController::StaticClass(), FoundActors);
	if(FoundActors.Num() > 0)
	{
		WraithController = Cast<AWraithController>(FoundActors[0]);
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("NO WRAITHS FOUND"));
	}

}

// Called every frame
void AFlashlight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();

	//DrawDebugCamera(GetWorld(), Location, Rotation, 90, 2, FColor::Red, true);

	FVector End = Location + Rotation.Vector() * 2000;
	
	FHitResult Hit;
	GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_Visibility);
	

	if(WraithController)
	{
		if(bIsLightOn)
		{
			if(Cast<AWraithController>(Hit.GetActor()))
			{
			
				if(WraithController->TimeLightShinedOnSelf < 5.f)
				{
					WraithController->TimeLightShinedOnSelf += DeltaTime;
				
				}
			} else
			{
				if(WraithController->TimeLightShinedOnSelf > 0.f)
				{
					WraithController->TimeLightShinedOnSelf -= DeltaTime;
				}
			}
			//DrawDebugPoint(GetWorld(), Hit.Location, 20, FColor::Red, true);
		} else
		{
			if(WraithController->TimeLightShinedOnSelf > 0.f)
			{
				WraithController->TimeLightShinedOnSelf -= DeltaTime;
			}
		}
	}
}

void AFlashlight::TurnLightOn()
{
	if (Light) {
		if (CanTurnOn() && bCanBeSwitchedOn) {
			bIsLightOn = true;
			Light->SetIntensity(175000.f);
			LightToggled.Broadcast(bIsLightOn);
			UGameplayStatics::PlaySoundAtLocation(this, FlashlightOnSoundCue, this->GetActorLocation());
		}
	}
}

void AFlashlight::TurnLightOff()
{
	if (Light) {
		if (!CanTurnOn()) {
			bIsLightOn = false;
			Light->SetIntensity(0.f);
			LightToggled.Broadcast(bIsLightOn);
			bCanBeSwitchedOn = false;
			GetWorld()->GetTimerManager().SetTimer(FlashlightToggleTimerHandle, this, &AFlashlight::CanSwitchLightOn, 1.5f);
			UGameplayStatics::PlaySoundAtLocation(this, FlashlightOffSoundCue, this->GetActorLocation());
		}
	}
}

void AFlashlight::ToggleLight()
{
	if (CanTurnOn() && bCanBeSwitchedOn)
	{
		TurnLightOn();
	}
	else
	{
		TurnLightOff();
	}
}

void AFlashlight::CanSwitchLightOn()
{
	bCanBeSwitchedOn = true;
}

void AFlashlight::BatteryDrain()
{
	if (bIsLightOn)
	{
		if (CurrentBatteryLife > 0.f)
		{
			CurrentBatteryLife -= BatteryDrainPerTick;
			LightDrained.Broadcast(CurrentBatteryLife);
			GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, FString::SanitizeFloat(CurrentBatteryLife));
		}
		else
		{
			CurrentBatteryLife = 0.f;
			TurnLightOff();
		}
	}
	else {
		if (CurrentBatteryLife < MaxBatteryLife) {
			CurrentBatteryLife += BatteryDrainPerTick;
			LightDrained.Broadcast(CurrentBatteryLife);
			GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, FString::SanitizeFloat(CurrentBatteryLife));
		}
	}
}

bool AFlashlight::CanTurnOn()
{
	return (CurrentBatteryLife > 0.f && !bIsLightOn);
}


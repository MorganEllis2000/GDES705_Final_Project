// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashlight.h"
#include "Components/SpotLightComponent.h"
#include "TimerManager.h"
#include "Engine/EngineTypes.h"

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

}


// Called when the game starts or when spawned
void AFlashlight::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FlashlightRechargeTimerHandle, this, &AFlashlight::BatteryDrain, DrainBatteryLifeTickTime, true);
	
}

// Called every frame
void AFlashlight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFlashlight::TurnLightOn()
{
	if (Light) {
		if (CanTurnOn()) {
			bIsLightOn = true;
			Light->SetIntensity(250000.f);
			LightToggled.Broadcast(bIsLightOn);
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
		}
	}
}

void AFlashlight::ToggleLight()
{
	if (CanTurnOn())
	{
		TurnLightOn();
	}
	else
	{
		TurnLightOff();
	}
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


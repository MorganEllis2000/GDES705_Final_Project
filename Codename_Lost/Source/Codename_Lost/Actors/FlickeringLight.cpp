// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/Actors/FlickeringLight.h"
#include "Components/SpotLightComponent.h"

// Sets default values
AFlickeringLight::AFlickeringLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Light = CreateDefaultSubobject<USpotLightComponent>(TEXT("Light"));
	Light->SetupAttachment(RootComponent);
	Light->Intensity = 0.f;
}

// Called when the game starts or when spawned
void AFlickeringLight::BeginPlay()
{
	Super::BeginPlay();
	//GetWorld()->GetTimerManager().SetTimer(TurnLightOnTimerHandle, this, &AFlickeringLight::ToggleLight, TimeToStayOn, true);
}

// Called every frame
void AFlickeringLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


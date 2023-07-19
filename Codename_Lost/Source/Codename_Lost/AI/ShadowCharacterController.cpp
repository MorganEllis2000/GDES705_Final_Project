// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/ShadowCharacterController.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AShadowCharacterController::AShadowCharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AShadowCharacterController::BeginPlay()
{
	Super::BeginPlay();

	//UGameplayStatics::SpawnSoundAttached(ShadowWisperingSoundCue, RootComponent);
}

// Called every frame
void AShadowCharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShadowCharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

APatrolPath* AShadowCharacterController::GetPatrolPath()
{
	if(PatrolPath)
	{
		return PatrolPath;
	} else
	{
		UE_LOG(LogTemp, Error, TEXT("PLEASE ASSIGN BP_PATROLPOINT"));
		return nullptr;
	}
}


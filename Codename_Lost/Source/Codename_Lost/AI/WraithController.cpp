// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "WraithController.h"

#include "Codename_Lost/Components/HealthComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Sight.h"


// Sets default values
AWraithController::AWraithController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetupStimulus();
	TimeLightShinedOnSelf = 0.f;
}

// Called when the game starts or when spawned
void AWraithController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWraithController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AWraithController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(TimeLightShinedOnSelf > 1.f)
	{
		GetCharacterMovement()->MaxWalkSpeed = 100.f / TimeLightShinedOnSelf;
	} else
	{
		GetCharacterMovement()->MaxWalkSpeed = 100;
	}

}

APatrolPath* AWraithController::GetPatrolPath()
{
	return PatrolPath;
}

void AWraithController::SetupStimulus()
{
	/*stimulus = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimulus"));
	stimulus->RegisterForSense(TSubclassOf<UAISense_Sight>());
	stimulus->RegisterWithPerceptionSystem();*/
}


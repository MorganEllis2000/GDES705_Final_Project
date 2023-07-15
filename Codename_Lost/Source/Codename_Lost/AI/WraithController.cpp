// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "WraithController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AWraithController::AWraithController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetupStimulus();
	TimeLightShinedOnSelf = 0.f;
	DistBtwnWraithAndPlayer = 0.f;

	WraithWisperingAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Wispering Audio Component"));
	WraithWisperingAudioComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AWraithController::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::SpawnSoundAttached(WraithWisperingSoundCue, RootComponent);

	//WraithWisperingAudioComponent = UGameplayStatics::SpawnSoundAtLocation(GetWorld(), WraithWisperingSoundCue, GetActorLocation());
	//WraithWisperingAudioComponent->Play();
	
}

// Called every frame
void AWraithController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(TimeLightShinedOnSelf > 1.f)
	{
		GetCharacterMovement()->MaxWalkSpeed = 100.f / (TimeLightShinedOnSelf / 2);
	} else
	{
		GetCharacterMovement()->MaxWalkSpeed = 100;
	}
}

// Called to bind functionality to input
void AWraithController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
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


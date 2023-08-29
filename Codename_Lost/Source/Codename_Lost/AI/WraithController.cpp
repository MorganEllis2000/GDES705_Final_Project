// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "WraithController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Components/SphereComponent.h"
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

	DamageSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Damage Spehre"));
	DamageSphere->SetupAttachment(Cast<USkeletalMeshComponent>(this->GetComponentByClass(USkeletalMeshComponent::StaticClass())), TEXT("DarknessElemental_RightHand"));

	CanBeDamaged = true;
	CanAttack = true;
	IsAttacking = false;
}

// Called when the game starts or when spawned
void AWraithController::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::SpawnSoundAttached(WraithWisperingSoundCue, RootComponent);
	Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	//WraithWisperingAudioComponent = UGameplayStatics::SpawnSoundAtLocation(GetWorld(), WraithWisperingSoundCue, GetActorLocation());
	//WraithWisperingAudioComponent->Play();
}

// Called every frame
void AWraithController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*if(TimeLightShinedOnSelf > 1.f && TimeLightShinedOnSelf < 5.f)
	{
		GetCharacterMovement()->MaxWalkSpeed = 100.f / (TimeLightShinedOnSelf / 2);
	} else
	{
		//GetCharacterMovement()->MaxWalkSpeed = 100;
	}*/

	if(IsAttacking && CanBeDamaged)
	{
		GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, "ATTACKING");
		GEngine->AddOnScreenDebugMessage(2, 3, FColor::White, IsAttacking ? "True" : "False");
		//DamageSphere->SetSphereRadius(32.f);
		DamageSphere->GetOverlappingActors(OverlappingActors);

		for(int i = 0; i < OverlappingActors.Num(); i++)
		{
			if(Cast<ACharacterController>(OverlappingActors[i]))
			{
				
				UGameplayStatics::ApplyDamage(Character, 13.f,  Character->GetController()->GetInstigatorController(), this, UDamageType::StaticClass());
				//UGameplayStatics::PlaySoundAtLocation(this, Character->DamagedSoundCue, Character->GetActorLocation());
				CanBeDamaged = false;
				CanAttack = false;
				GetWorld()->GetTimerManager().SetTimer(DamageTimer, this, &AWraithController::DamageTimerReset, 3.f);
			}
		}
	} else
	{
		DamageSphere->SetSphereRadius(0.f);
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

void AWraithController::DamageTimerReset()
{
	CanBeDamaged = true;
	CanAttack = true;
}

void AWraithController::SetupStimulus()
{
	/*stimulus = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimulus"));
	stimulus->RegisterForSense(TSubclassOf<UAISense_Sight>());
	stimulus->RegisterWithPerceptionSystem();*/
}


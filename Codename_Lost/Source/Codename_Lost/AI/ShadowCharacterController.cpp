// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/ShadowCharacterController.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AShadowCharacterController::AShadowCharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DamageSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Damage Spehre"));
	DamageSphere->SetupAttachment(Cast<USkeletalMeshComponent>(this->GetComponentByClass(USkeletalMeshComponent::StaticClass())), TEXT("LeftHand"));
}

// Called when the game starts or when spawned
void AShadowCharacterController::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	CanBeDamaged = true;
	CanAttack = true;
	//UGameplayStatics::SpawnSoundAttached(ShadowWisperingSoundCue, RootComponent);
}

// Called every frame
void AShadowCharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(IsAttacking && CanBeDamaged)
	{
		DamageSphere->SetSphereRadius(32.f);
		DamageSphere->GetOverlappingActors(OverlappingActors);

		for(int i = 0; i < OverlappingActors.Num(); i++)
		{
			if(Cast<ACharacterController>(OverlappingActors[i]))
			{
				UGameplayStatics::ApplyDamage(Character, 13.f,  Character->GetController()->GetInstigatorController(), this, UDamageType::StaticClass());
				//UGameplayStatics::PlaySoundAtLocation(this, Character->DamagedSoundCue, Character->GetActorLocation());
				CanBeDamaged = false;
				CanAttack = false;
				GetWorld()->GetTimerManager().SetTimer(DamageTimer, this, &AShadowCharacterController::DamageTimerReset, 3.f);
			}
		}
	} else
	{
		DamageSphere->SetSphereRadius(0.f);
	}

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

void AShadowCharacterController::DamageTimerReset()
{
	CanBeDamaged = true;
	CanAttack = true;
}


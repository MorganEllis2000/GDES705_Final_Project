// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTT_Attack.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Codename_Lost/AI/WraithController.h"
#include "Materials/MaterialInstanceDynamic.h"

UBTT_Attack::UBTT_Attack()
{
	NodeName = TEXT("Attack");
}

void UBTT_Attack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
}

EBTNodeResult::Type UBTT_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory); 

	if (OwnerComp.GetAIOwner() == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("No Owner"));
	}

	AActor* WraithActor = OwnerComp.GetOwner();
	APawn* WraithPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	AWraithController* WraithController = Cast<AWraithController>(WraithPawn->GetController());
	AController* controller = WraithPawn->GetController();
	AActor* PlayerActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0)->GetOwner();

	ACharacterController* Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	float DistFromWraithToPlayer = FVector::Dist(WraithPawn->GetActorLocation(), Character->GetActorLocation());

	if (Character == nullptr && WraithController == nullptr && WraithActor == nullptr) {
		return EBTNodeResult::Failed;;
	}

	if (OwnerComp.GetAIOwner()->LineOfSightTo(Character))
	{
		UGameplayStatics::ApplyDamage(Character, 10.f, controller->GetInstigatorController(), WraithActor, UDamageType::StaticClass());
		UGameplayStatics::PlaySoundAtLocation(this, Character->DamagedSoundCue, WraithActor->GetActorLocation());
	}
	
	return EBTNodeResult::Succeeded;
}

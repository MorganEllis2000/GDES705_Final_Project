// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTT_Attack.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"

UBTT_Attack::UBTT_Attack()
{
	NodeName = TEXT("Attack");
}

EBTNodeResult::Type UBTT_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory); 

	if (OwnerComp.GetAIOwner() == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("No Owner"));
	}

	AActor* WraithActor = OwnerComp.GetOwner();
	APawn* WraithPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	AController* WraithController = WraithPawn->GetController();
	AActor* PlayerActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0)->GetOwner();

	ACharacterController* Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	float DistFromWraithToPlayer = FVector::Dist(WraithPawn->GetActorLocation(), Character->GetActorLocation());

	if (Character != nullptr && WraithController != nullptr && WraithActor != nullptr) {
		if (DistFromWraithToPlayer < 500.f) {
			UE_LOG(LogTemp, Warning, TEXT("Attacking"));
			UGameplayStatics::ApplyDamage(Character, 10.f, WraithController->GetInstigatorController(), WraithActor, UDamageType::StaticClass());
		}
		else {
			return EBTNodeResult::Failed;
		}
	}

	return EBTNodeResult::Succeeded;
}

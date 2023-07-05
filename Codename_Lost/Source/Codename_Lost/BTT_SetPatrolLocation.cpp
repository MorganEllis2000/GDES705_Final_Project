// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTT_SetPatrolLocation.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "CharacterController.h"
#include "WraithController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTT_SetPatrolLocation::UBTT_SetPatrolLocation()
{
	NodeName = TEXT("Set Patrol Location");
}

EBTNodeResult::Type UBTT_SetPatrolLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AWraithController* WraithController = Cast<AWraithController>(OwnerComp.GetAIOwner()->GetPawn()->GetController());

	OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("PatrolLocation"), FVector(660.000000, 520.000000, 100.000000));
	//OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerPawn->GetActorLocation());

	return EBTNodeResult::Succeeded;
}

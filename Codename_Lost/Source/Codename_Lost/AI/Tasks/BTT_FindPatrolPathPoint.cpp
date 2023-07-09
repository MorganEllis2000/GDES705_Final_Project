// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTT_FindPatrolPathPoint.h"
#include "Codename_Lost/AI/WraithAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Codename_Lost/AI/WraithController.h"

UBTT_FindPatrolPathPoint::UBTT_FindPatrolPathPoint()
{
	NodeName = TEXT("Find Patrol Path Point");
}

EBTNodeResult::Type UBTT_FindPatrolPathPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AWraithAIController* const WraithAIController = Cast<AWraithAIController>(OwnerComp.GetAIOwner());
	int const index = WraithAIController->GetBlackboardComponent()->GetValueAsInt(TEXT("PatrolPathIndex"));

	AWraithController* const WraithController = Cast<AWraithController>(WraithAIController->GetPawn());
	FVector const PatrolPoint = WraithController->GetPatrolPath()->GetPatrolPoint(index);

	FVector const GlobalPoint = WraithController->GetPatrolPath()->GetActorTransform().TransformPosition(PatrolPoint);

	WraithAIController->GetBlackboardComponent()->SetValueAsVector(TEXT("PatrolLocation"), GlobalPoint);

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}

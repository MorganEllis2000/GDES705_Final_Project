// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTT_IncrementPathIndex.h"
#include "WraithAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "WraithController.h"

UBTT_IncrementPathIndex::UBTT_IncrementPathIndex()
{
	NodeName = TEXT("Increment Path Index");
}

EBTNodeResult::Type UBTT_IncrementPathIndex::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AWraithAIController* const WraithAIController = Cast<AWraithAIController>(OwnerComp.GetAIOwner());
	AWraithController* const WraithController = Cast<AWraithController>(WraithAIController->GetPawn());
	int const NumOfPoints = WraithController->GetPatrolPath()->num();
	int const MinNumOfPoints = 0;
	int const MaxNumOfPoints = NumOfPoints - 1;

	int index = WraithAIController->GetBlackboardComponent()->GetValueAsInt(TEXT("PatrolPathIndex"));
	if (index >= MaxNumOfPoints && direction == EDirectionType::Forward) {
		direction = EDirectionType::Reverse;
	} else if (index == MinNumOfPoints && direction == EDirectionType::Reverse) {
		direction = EDirectionType::Forward;
	}

	WraithAIController->GetBlackboardComponent()->SetValueAsInt(TEXT("PatrolPathIndex"), (direction == EDirectionType::Forward ? ++index : --index) % NumOfPoints);

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}

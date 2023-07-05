// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTT_ClearBlackboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTT_ClearBlackboardValue::UBTT_ClearBlackboardValue() {
	NodeName = TEXT("Clear Blackboard Value");
}

EBTNodeResult::Type UBTT_ClearBlackboardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());

	return EBTNodeResult::Succeeded;
}

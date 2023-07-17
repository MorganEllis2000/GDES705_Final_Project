// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Tasks/BTT_SetBool.h"

#include "BehaviorTree/BlackboardComponent.h"

UBTT_SetBool::UBTT_SetBool()
{
	NodeName = "Set bool";
}

EBTNodeResult::Type UBTT_SetBool::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), SetTrue);
	return EBTNodeResult::Succeeded;
}

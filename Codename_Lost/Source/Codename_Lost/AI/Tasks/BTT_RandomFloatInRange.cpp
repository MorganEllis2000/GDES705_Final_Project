// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Tasks/BTT_RandomFloatInRange.h"
#include "Math/UnrealMathUtility.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTT_RandomFloatInRange::UBTT_RandomFloatInRange()
{
	NodeName = TEXT("Generate Random Float in Range");
}

EBTNodeResult::Type UBTT_RandomFloatInRange::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	float randnum = FMath::RandRange(minvalue, maxvalue);
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(GetSelectedBlackboardKey(), randnum);
	return EBTNodeResult::Succeeded;
}

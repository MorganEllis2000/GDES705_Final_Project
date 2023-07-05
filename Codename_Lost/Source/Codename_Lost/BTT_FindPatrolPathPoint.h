// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_FindPatrolPathPoint.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTT_FindPatrolPathPoint : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	UBTT_FindPatrolPathPoint();

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

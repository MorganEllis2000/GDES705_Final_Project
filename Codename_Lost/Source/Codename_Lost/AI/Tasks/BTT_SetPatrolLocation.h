// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SetPatrolLocation.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTT_SetPatrolLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTT_SetPatrolLocation();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
private:

public:

protected:

private:
};

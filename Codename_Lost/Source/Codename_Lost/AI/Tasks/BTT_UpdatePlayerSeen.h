// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_UpdatePlayerSeen.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTT_UpdatePlayerSeen : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTT_UpdatePlayerSeen();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

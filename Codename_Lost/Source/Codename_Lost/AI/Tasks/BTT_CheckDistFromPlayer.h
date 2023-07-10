// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_CheckDistFromPlayer.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTT_CheckDistFromPlayer : public UBTTaskNode
{
	GENERATED_BODY()
public:
	
	UBTT_CheckDistFromPlayer();
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory) override;

public:
	float DistBtwnWraithAndPlayer;
};

// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ChangeWalkSpeed.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTT_ChangeWalkSpeed : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTT_ChangeWalkSpeed();
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(Category=Node, EditAnywhere)
	float WalkSpeed;
};

// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTT_IncrementPathIndex.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTT_IncrementPathIndex : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTT_IncrementPathIndex();
	
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	enum class EDirectionType {
		Forward,
		Reverse
	};

	EDirectionType direction = EDirectionType::Forward;
};

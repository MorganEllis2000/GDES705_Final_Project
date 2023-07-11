// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTS_FlashlightDamage.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTS_FlashlightDamage : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
    UBTS_FlashlightDamage();


	virtual void TickNode(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory, float DeltaSeconds) override;
};

// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_ChangePlayerVignette.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTS_ChangePlayerVignette : public UBTService
{
	GENERATED_BODY()
public:
	UBTS_ChangePlayerVignette();
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
protected:
	
	
public:
	class ACharacterController* Character;
};

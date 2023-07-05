// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTT_FindPlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UBTT_FindPlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTT_FindPlayerLocation(FObjectInitializer const& object_initializer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory) override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowProtectedAccess="true"))
	bool search_random = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowProtectedAccess = "true"))
	float search_radius = 150.0f;
	
};

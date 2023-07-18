// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShadowAIController.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API AShadowAIController : public AAIController
{
	GENERATED_BODY()
public:
	AShadowAIController();

	virtual void Tick(float DeltaSeconds) override;

protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	void SetupPerceptionSystem();

	UFUNCTION()
	//void OnTargetDetected(AActor* actor, FAIStimulus const stimulus);
	void OnTargetDetected(TArray<AActor*> const& UpdatedActors);

public:
	class APawn* PlayerPawn;

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehaviorTree;

	class UAISenseConfig_Sight* SightConfig;
	class UAISenseConfig_Hearing* HearingConfig;
	class UAIPerceptionComponent* perceptionComponent;

	class AShadowCharacterController* ShadowCharacterController;
};

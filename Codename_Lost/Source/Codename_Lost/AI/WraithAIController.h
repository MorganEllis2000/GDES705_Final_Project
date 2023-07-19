// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "Engine/TargetPoint.h"
#include "WraithAIController.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API AWraithAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AWraithAIController();

	virtual void Tick(float DeltaSeconds) override;

	void MoveToRandomLocation();

protected:

	virtual void BeginPlay() override;
	
private:

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Patrol Points")
	TArray<ATargetPoint*> PatrolPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SFX")
	class USoundCue* HitSoundFX;

	class AWraithController* WraithController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sight Variables")
	float SightRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sight Variables")
	float SightFOV;
protected:

private:
	


};

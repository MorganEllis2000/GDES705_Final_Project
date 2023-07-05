// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WraithAIController.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API AWraithAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	virtual void Tick(float DeltaSeconds) override;

	void MoveToRandomLocation();

protected:

	virtual void BeginPlay() override;
	
private:

public:
	class APawn* PlayerPawn;

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehaviorTree;

protected:

private:
	
};

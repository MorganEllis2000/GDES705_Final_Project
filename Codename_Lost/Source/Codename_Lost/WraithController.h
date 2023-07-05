// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/TargetPoint.h"
#include "PatrolPath.h"
#include "WraithController.generated.h"


UCLASS()
class CODENAME_LOST_API AWraithController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWraithController();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	APatrolPath* GetPatrolPath();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private: 
	void SetupStimulus();
public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Patrol Points")
	TArray<ATargetPoint*> PatrolPoints;

	ATargetPoint* CurrentPatrolPoint;
	FVector CurrentPatrolPointLocation;

protected:


private:
	class UAIPerceptionStimuliSourceComponent* stimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	APatrolPath* PatrolPath;

};

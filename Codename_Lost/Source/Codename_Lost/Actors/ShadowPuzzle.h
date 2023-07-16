// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShadowPuzzle.generated.h"

UCLASS()
class CODENAME_LOST_API AShadowPuzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShadowPuzzle();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void RotateActor();

	void CheckPuzzle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	FRotator ControlRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ObjectMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* ObjectToMove;

	bool bIsRotating;

	bool bIsSolved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator CorrectRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MoveToLocation;
};

// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PadlockPuzzle.generated.h"

UCLASS()
class CODENAME_LOST_API APadlockPuzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APadlockPuzzle();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	void RotateRight();
	void RotateLeft();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Combination1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Combination2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Combination3;
};

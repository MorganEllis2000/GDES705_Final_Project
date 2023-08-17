// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "OpenDoorWithLerp.generated.h"

UCLASS()
class CODENAME_LOST_API AOpenDoorWithLerp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOpenDoorWithLerp();

	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere)
	bool bIsDoorLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition="bIsDoorLocked"))
	FString KeyName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition="bIsDoorLocked"))
	class APickup* PickupObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door Vectors")
	FVector DoorClosedPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door Vectors")
	FRotator DoorClosedRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door Vectors")
	FVector DoorOpenPosition;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door Vectors")
	FRotator DoorOpenRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Open;
	float RotateValue;
	FRotator DoorRotation;

	UFUNCTION()
	void OpenDoor();

protected:

private:
};

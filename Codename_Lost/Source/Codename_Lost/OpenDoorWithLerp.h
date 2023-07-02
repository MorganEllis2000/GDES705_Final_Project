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
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* MyBoxComponent;

	UPROPERTY(EditAnywhere)
	bool bIsDoorLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition="bIsDoorLocked"))
	FString KeyName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition="bIsDoorLocked"))
	class APickup* PickupObject;

	bool Open;
	float RotateValue;
	FRotator DoorRotation;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:

private:
	class ACharacterController* Character;
};

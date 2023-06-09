// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"



UCLASS()
class CODENAME_LOST_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();
	UFUNCTION(BlueprintCallable)
	virtual void Show(bool visible);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanBeAddedToInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ObjectMesh;

	UPROPERTY(EditAnywhere)
	USceneComponent* HoldingComp;

	void RotateActor();

	void Pickup();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bHolding;
	bool bGravity;

	FRotator ControlRotation;
	class ACharacter* MyCharacter;
	class UCameraComponent* PlayerCamera;
	FVector ForwardVector;

	UPROPERTY(EditAnywhere)
	FVector InitialLocation;
	UPROPERTY(EditAnywhere)
	FRotator InitialRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Info")
	FText ObjectName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Info")
	FText ObjectType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Info", meta=(MultiLine=true))
	FText ObjectDescription;

	
	FString Name;

	UFUNCTION(BlueprintCallable)
	virtual void OnInteract();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Pickup UI")
	class UTexture2D* Image;
};

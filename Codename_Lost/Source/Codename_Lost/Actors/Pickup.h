// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/DialogueTypes.h"
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
	bool bCanBeAddedToCodex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ObjectMesh;

	UPROPERTY(EditAnywhere)
	USceneComponent* HoldingComp;

	class ACharacterController* Character;

	void RotateActor();

	void Pickup();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bHolding;
	bool bGravity;
	bool bHasBeenAddedToCodex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bToggleUI;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool UsePlayerPitch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool UsePlayerYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bWasPickedUp;
	
	FRotator ControlRotation;

	
	class ACharacterController* MyCharacter;
	class UCameraComponent* PlayerCamera;
	FVector ForwardVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Transform")
	FVector InitialLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Transform")
	FRotator InitialRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Transform")
	FRotator PickupRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Transform")
	FVector InitialScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Transform")
	FVector PickupScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Info")
	FText ObjectName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Info")
	FText ObjectType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Info", meta=(MultiLine=true))
	FText ObjectDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasAttachtedDialogue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition="bHasAttachtedDialogue"))
	class USoundCue* Dialogue;
	
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Pickup UI")
	class UTexture2D* Image;
};

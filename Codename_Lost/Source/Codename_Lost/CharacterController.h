// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "CharacterController.generated.h"


UCLASS()
class CODENAME_LOST_API ACharacterController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterController();

	void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UMyInputConfigData* InputActions;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> MyShake;

	UPROPERTY(EditAnywhere)
	class USceneComponent* HoldingComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
    class UInputMappingContext* InputMapping;

	
	APlayerController* PlayerController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* PlayerCamera;

	// Pickup

	void OnAction();
	void OnInspect();
	void OnInspectReleased();

	void ToggleMovement();
	void ToggleItemPickup();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	FRotator OriginalRotation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crouch")
	FVector CrouchEyeOffset;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crouch")
	float CrouchSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Lean")
	float MinLean;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Lean")
	float MaxLean;



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Flashlight")
	TSubclassOf<class AFlashlight> FlashlightClass;
	class AFlashlight* Flashlight;


	// Pick up system
	UPROPERTY(EditAnywhere)
	class APickup* CurrentItem;

	bool bCanMove;
	bool bHoldingItem;
	bool bInspecting;

	float PitchMax;
	float PitchMin;

	FVector HoldingComp;
	FRotator LastRotation;

	FVector Start;
	FVector ForwardVector;
	FVector End;

	FHitResult Hit;

	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParams;

private:
	// Moving
	void Move(const FInputActionValue& Value);
	void StartPlayerMovingCameraShake();
	void StopPlayerMovingCameraShake();

	void Look(const FInputActionValue& Value);

	void StartCrouch();

	void Lean(const FInputActionValue& Value);
	void FinishLean(const FInputActionValue& Value);
	bool IsLeaning = false;

	void ToggleFlashlight();

	
};

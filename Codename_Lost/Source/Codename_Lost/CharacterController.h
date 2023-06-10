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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
    class UInputMappingContext* InputMapping;

	
	APlayerController* PlayerController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* PlayerCamera;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UMyInputConfigData* InputActions;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crouch")
	FVector CrouchEyeOffset;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crouch")
	float CrouchSpeed;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> MyShake;

private:
	// Moving
	void Move(const FInputActionValue& Value);
	void StartPlayerMovingCameraShake();
	void StopPlayerMovingCameraShake();

	void Look(const FInputActionValue& Value);

	void StartCrouch();
};

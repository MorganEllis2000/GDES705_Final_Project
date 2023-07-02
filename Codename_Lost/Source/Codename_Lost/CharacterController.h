// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "CharacterController.generated.h"

class AGun;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateIventoryDelegate, const TArray<APickup*>&, IventoryItems);

UCLASS()
class CODENAME_LOST_API ACharacterController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterController();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma region Crouch Functions
	void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;
	void LookAt(FVector LookAtTarget);
#pragma endregion

#pragma region Inventory Functions
	UFUNCTION(BlueprintCallable)
	void AddToInventory(class APickup* actor);
	void RemoveFromInventory(class APickup* actor);
	void OpenInventory();
	void UpdateInventoryDelegate();
	UFUNCTION(BlueprintCallable)
	void AddItemToInventory();
	UFUNCTION(BlueprintCallable)
	void PrintInventory();
#pragma endregion

	// Damage Functions
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma region Inspect Functions
	void OnInspect();
	void OnInspectReleased();
	void Interact();

	void ToggleMovement();
	void ToggleItemPickup();
#pragma endregion

private:
#pragma region Movement Functions
	void Move(const FInputActionValue& Value);
	void StartPlayerMovingCameraShake();
	void StopPlayerMovingCameraShake();
	void Look(const FInputActionValue& Value);
	void ControllerLook(const FInputActionValue& Value);
	void StartCrouch();
	void Lean(const FInputActionValue& Value);
	void FinishLean(const FInputActionValue& Value);
	void StartSprint();
	void FinishSprint();
#pragma endregion

	// Flashlight Functions
	void ToggleFlashlight();

#pragma region Shooting Functions
	void Shoot();
	void Reload();
	void Aim();
	void ZoomIn();
	void ZoomOut();
#pragma endregion

public:	

#pragma region Movement Variables
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

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D CameraInitalPos;

	bool bCanSprint;

	float PitchMax;
	float PitchMin;
	float RollMax;
	float RollMin;

	FVector2D MoveValue;
#pragma endregion

#pragma region Flashlight Variables
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Flashlight")
	TSubclassOf<class AFlashlight> FlashlightClass;
	class AFlashlight* Flashlight;
#pragma endregion

#pragma region Pickup Variables
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class APickup* CurrentItem;

	bool bCanMove;
	bool bHoldingItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bShowCanInspectWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bInspecting;
#pragma endregion

	FVector HoldingComp;
	FRotator LastRotation;

	FVector Start;
	FVector ForwardVector;
	FVector End;

	FHitResult Hit;

	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParams;


#pragma region Inventory Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bIsInventoryOpen;
	UPROPERTY(BlueprintAssignable, Category = "Pickup")
	FUpdateIventoryDelegate OnUpdateInventory;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<APickup*> _inventory;
#pragma endregion

	// World Variables
	bool GamePaused;

	// Camera Shake
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> MyShake;

#pragma region Components and Setup
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UMyInputConfigData* InputActions;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	class USceneComponent* HoldingComponent;

	class USceneComponent* RootComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mesh")
	class USkeletalMeshComponent* PlayerMesh;
#pragma endregion

#pragma region Gun Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	bool bIsSprinting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	bool bIsZoomedIn;
#pragma endregion

#pragma region Player Stats
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float MaxHealth = 100.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float MaxStamina;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float CurrentStamina;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float DrainStaminaTickTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float StaminaDrainPerTick;

#pragma endregion

#pragma region Timer Handles
	FTimerHandle StaminaRechargeTimerHandle;
#pragma endregion


protected:

#pragma region Input Mapping
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
    class UInputMappingContext* InputMapping;
#pragma endregion
	
#pragma region Player Components
	APlayerController* PlayerController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* PlayerCamera;

	class USkeletalMeshComponent* SkeletalMesh;
#pragma endregion

private:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGun> GunClass;

	UPROPERTY()
	AGun* Glock;

#pragma region Mouse Input Variables

	UPROPERTY(EditAnywhere, Category = "Mouse Inputs")
	float MouseLookRotationX= 1.f;

	UPROPERTY(EditAnywhere, Category = "Mouse Inputs")
	float MouseLookRotationY = 1.f;

	UPROPERTY(EditAnywhere, Category = "Mouse Inputs")
	float MouseLookRotationRateX = 1.f;

	UPROPERTY(EditAnywhere, Category = "Mouse Inputs")
	float MouseLookRotationRateY = 1.f;

	UPROPERTY(EditAnywhere, Category = "Controller Inputs")
	float ControllerLookRotationRateX = 10.f;

	UPROPERTY(EditAnywhere, Category = "Controller Inputs")
	float ControllerLookRotationRateY = 10.f;
#pragma endregion
};

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

	// Movement Functions

	void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;
	void LookAt(FVector LookAtTarget);

	// Inventory Functions
	void AddToInventory(class APickup* actor);
	void RemoveFromInventory(class APickup* actor);
	void OpenInventory();
	void UpdateInventoryDelegate();
	void AddItemToInventory();
	UFUNCTION(BlueprintCallable)
	void PrintInventory();

	// Damage Functions
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
    class UInputMappingContext* InputMapping;

	
	APlayerController* PlayerController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* PlayerCamera;

	// Pickup Functions

	void OnInspect();
	void OnInspectReleased();
	void Interact();

	void ToggleMovement();
	void ToggleItemPickup();

private:
	// Movement Functions
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
	
	// Flashlight Functions
	void ToggleFlashlight();

	// Gun Functions
	void Shoot();
	void Reload();
	void Aim();
	void ZoomIn();
	void ZoomOut();
public:	

	// Movement Variables
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

	// Flashlight Variables
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Flashlight")
	TSubclassOf<class AFlashlight> FlashlightClass;
	class AFlashlight* Flashlight;

	// Pickup Variables
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class APickup* CurrentItem;

	bool bCanMove;
	bool bHoldingItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bShowCanInspectWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bInspecting;

	float PitchMax;
	float PitchMin;
	float RollMax;
	float RollMin;

	FVector HoldingComp;
	FRotator LastRotation;

	FVector Start;
	FVector ForwardVector;
	FVector End;

	FHitResult Hit;

	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParams;


	// Inventory Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bools")
	bool bIsInventoryOpen;
	UPROPERTY(BlueprintAssignable, Category = "Pickup")
	FUpdateIventoryDelegate OnUpdateInventory;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<APickup*> _inventory;

	// World Variables
	bool GamePaused;

	// Camera Shake
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> MyShake;

	// Components and Setup
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UMyInputConfigData* InputActions;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	class USceneComponent* HoldingComponent;

	class USceneComponent* RootComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Mesh")
	class USkeletalMeshComponent* PlayerMesh;


	// Gun Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	bool bIsSprinting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	bool bIsZoomedIn;

	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100.f;

	UPROPERTY(VisibleAnywhere)
	float Health;
protected:

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGun> GunClass;

	UPROPERTY()
	AGun* Glock;

	class USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(EditAnywhere, Category = "Mouse Inputs")
	float MouseLookRotationRateX = 1.f;

	UPROPERTY(EditAnywhere, Category = "Mouse Inputs")
	float MouseLookRotationRateY = 1.f;

	UPROPERTY(EditAnywhere, Category = "Controller Inputs")
	float ControllerLookRotationRateX = 10.f;

	UPROPERTY(EditAnywhere, Category = "Controller Inputs")
	float ControllerLookRotationRateY = 10.f;


};

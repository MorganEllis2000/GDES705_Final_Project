// Fill out your copyright notice in the Description page of Project Settings.

#pragma region Includes
#include "CharacterController.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "MyInputConfigData.h"
#include "InputCoreTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Flashlight.h"
#include "DrawDebugHelpers.h"
#include "Pickup.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "TimerManager.h"
#pragma endregion

#pragma region Constructors/Setup
// Sets default values
ACharacterController::ACharacterController()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	RootComponent->SetupAttachment(GetRootComponent());

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Component"));
	PlayerCamera->SetupAttachment(RootComponent);
	PlayerCamera->SetRelativeLocation(FVector(0.f, 0.f, 64.f));
	PlayerCamera->bUsePawnControlRotation = true;
	PlayerCamera->SetFieldOfView(90.f);

	CrouchEyeOffset = FVector(0.f);
	CrouchSpeed = 6.f;

	HoldingComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HoldingComponent"));
	HoldingComponent->SetupAttachment(PlayerCamera);

	GetMesh()->SetupAttachment(PlayerCamera);
	SkeletalMesh = Cast<USkeletalMeshComponent>(this->GetComponentByClass(USkeletalMeshComponent::StaticClass()));
	
	GetCharacterMovement()->MaxWalkSpeedCrouched = 125.f;

	CurrentItem = NULL;
	bCanMove = true;
	bInspecting = false;

	PitchMax = 15.f;
	PitchMin = -15.f;
	RollMax = 10.f;
	RollMin = -10.f;

	GetCharacterMovement()->MaxWalkSpeed = 175;

	MouseLookRotationX = MouseLookRotationRateX;
	MouseLookRotationY = MouseLookRotationRateY;
}

// Called when the game starts or when spawned
void ACharacterController::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;

	Glock = GetWorld()->SpawnActor<AGun>(GunClass);
	//GetMesh()->HideBoneByName(TEXT("upperarm_l"), EPhysBodyOp::PBO_None);
	//GetMesh()->HideBoneByName(TEXT("upperarm_r"), EPhysBodyOp::PBO_None);
	Glock->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("middle_01_l"));
	Glock->SetOwner(this);

	Glock->MagazineSize = 12;
	Glock->CurrentReserveAmmo = 24;
	Glock->MaxReserveAmmo = 36;
	Glock->CurrentAmmo = Glock->MagazineSize;
	Glock->ReloadTime = 3.f;

	
	if (FlashlightClass) {
		Flashlight = GetWorld()->SpawnActor<AFlashlight>(FlashlightClass);
		if (Flashlight) {
			Flashlight->AttachToComponent(PlayerCamera, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true));
		}
	}

	Flashlight->TurnLightOn();
	Flashlight->TurnLightOff();

	GetWorld()->GetTimerManager().SetTimer(StaminaRechargeTimerHandle, this, &ACharacterController::FinishSprint, DrainStaminaTickTime, true);
}

// Called every frame
void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float CrouchInterpTime = FMath::Min(1.f, CrouchSpeed * DeltaTime);
	CrouchEyeOffset = (1.f - CrouchInterpTime) * CrouchEyeOffset;

	Start = PlayerCamera->GetComponentLocation();
	ForwardVector = PlayerCamera->GetForwardVector();
	End = ((ForwardVector * 200.f) + Start);

	if (!bHoldingItem)
	{
		if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, DefaultComponentQueryParams, DefaultResponseParams))
		{
			if (Cast<APickup>(Hit.GetActor())) {
				CurrentItem = Cast<APickup>(Hit.GetActor());
				bShowCanInspectWidget = true;
			}
		}
		else
		{
			bShowCanInspectWidget = false;
			CurrentItem = NULL;
		}
	}


	if (bInspecting) {
		bShowCanInspectWidget = false;

		if (bHoldingItem) {
			PlayerCamera->SetFieldOfView(FMath::Lerp(PlayerCamera->FieldOfView, 90.f, 0.1f));
			//HoldingComponent->SetRelativeLocation(FVector(0.f, 50.f, 50.f));
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMax = 179.90000002f;
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMin = -179.90000002f;
			CurrentItem->RotateActor();
		}
	} else {
		PlayerCamera->SetFieldOfView(FMath::Lerp(PlayerCamera->FieldOfView, 90.f, 0.1f));
	}

	if (bIsCrouched) {
		if (SkeletalMesh->GetRelativeLocation().Z != -140.f) {
			SkeletalMesh->SetRelativeLocation(FVector(-9.848078f, 1.736482f, -140.f));
		}
	}
	else {
		if (SkeletalMesh->GetRelativeLocation().Z != -140.f) {
			SkeletalMesh->SetRelativeLocation(FVector(-9.848078f, 1.736482f, -140.f));
		}
	}
}

// Called to bind functionality to input
void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Get the player controller
	PlayerController = Cast<APlayerController>(GetController());

	if (PlayerController) {
		PlayerController->PlayerCameraManager->ViewPitchMin = PitchMin;
		PlayerController->PlayerCameraManager->ViewPitchMax = PitchMax;
		PlayerController->PlayerCameraManager->ViewRollMin = RollMin;
		PlayerController->PlayerCameraManager->ViewRollMax = RollMax;
	}

	// Get the local player subsystem
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	// Clear out existing mapping, and add our mapping
	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(InputMapping, 0);

	// Get the EnhancedInputComponent
	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	// Movement
	EnhancedInputComponent->BindAction(InputActions->InputMove, ETriggerEvent::Triggered, this, &ACharacterController::Move);
	//EnhancedInputComponent->BindAction(InputActions->InputLean, ETriggerEvent::Triggered, this, &ACharacterController::Lean);
	EnhancedInputComponent->BindAction(InputActions->InputLean, ETriggerEvent::Completed, this, &ACharacterController::FinishLean);
	EnhancedInputComponent->BindAction(InputActions->InputMove, ETriggerEvent::Started, this, &ACharacterController::StartPlayerMovingCameraShake);
	EnhancedInputComponent->BindAction(InputActions->InputMove, ETriggerEvent::Completed, this, &ACharacterController::StopPlayerMovingCameraShake);
	EnhancedInputComponent->BindAction(InputActions->InputLook, ETriggerEvent::Triggered, this, &ACharacterController::Look);
	EnhancedInputComponent->BindAction(InputActions->InputControllerLook, ETriggerEvent::Triggered, this, &ACharacterController::ControllerLook);
	EnhancedInputComponent->BindAction(InputActions->InputCrouch, ETriggerEvent::Started, this, &ACharacterController::StartCrouch);
	EnhancedInputComponent->BindAction(InputActions->InputSprint, ETriggerEvent::Triggered, this, &ACharacterController::StartSprint);
	EnhancedInputComponent->BindAction(InputActions->InputSprint, ETriggerEvent::Completed, this, &ACharacterController::FinishSprint);

	EnhancedInputComponent->BindAction(InputActions->InputFlashlight, ETriggerEvent::Started, this, &ACharacterController::ToggleFlashlight);
	EnhancedInputComponent->BindAction(InputActions->InputFlashlight, ETriggerEvent::Completed, this, &ACharacterController::ToggleFlashlight);

	EnhancedInputComponent->BindAction(InputActions->InputInspect, ETriggerEvent::Started, this, &ACharacterController::OnInspect);
	EnhancedInputComponent->BindAction(InputActions->InputInspect, ETriggerEvent::Started, this, &ACharacterController::OnInspectReleased);

	EnhancedInputComponent->BindAction(InputActions->InputInteract, ETriggerEvent::Started, this, &ACharacterController::Interact);

	EnhancedInputComponent->BindAction(InputActions->InputOpenInventory, ETriggerEvent::Started, this, &ACharacterController::OpenInventory);

	// Shooting
	EnhancedInputComponent->BindAction(InputActions->InputShoot, ETriggerEvent::Started, this, &ACharacterController::Shoot);
	EnhancedInputComponent->BindAction(InputActions->InputReload, ETriggerEvent::Started, this, &ACharacterController::Reload);
	EnhancedInputComponent->BindAction(InputActions->InputAim, ETriggerEvent::Triggered, this, &ACharacterController::ZoomIn);
	EnhancedInputComponent->BindAction(InputActions->InputAim, ETriggerEvent::Completed, this, &ACharacterController::ZoomOut);
}

#pragma endregion

#pragma region Player Movement
void ACharacterController::Move(const FInputActionValue& Value) {
	if (Controller != nullptr && bCanMove) {
		MoveValue = Value.Get<FVector2D>();
		const FRotator MovementRotation(0, Controller->GetControlRotation().Yaw, 0);
		// Forward/Backward direction
		if (MoveValue.Y != 0.0f) {
			// Get forward vector
			const FVector Direction = MovementRotation.RotateVector(FVector::ForwardVector);
			bCanSprint = true;
			AddMovementInput(Direction, MoveValue.Y);
		}

		// Right/Left direction
		if (MoveValue.X != 0.f) {
			// Get right vector
			const FVector Direction = MovementRotation.RotateVector(FVector::RightVector);
			AddMovementInput(Direction, MoveValue.X);
		}
	}
}

void ACharacterController::Look(const FInputActionValue& Value) {
	if (Controller != nullptr) {

		const FVector2D LookValue = Value.Get<FVector2D>();

		if (LookValue.X != 0.f) {
			AddControllerYawInput(LookValue.X * MouseLookRotationRateX *GetWorld()->GetDeltaSeconds());
		}

		if (LookValue.Y != 0.f) {
			AddControllerPitchInput(LookValue.Y * MouseLookRotationRateY * GetWorld()->GetDeltaSeconds());
		}
	}
}

void ACharacterController::ControllerLook(const FInputActionValue& Value) {
	if (Controller != nullptr) {

		const FVector2D LookValue = Value.Get<FVector2D>();

		if (LookValue.X != 0.f) {
			AddControllerYawInput(LookValue.X * ControllerLookRotationRateX * GetWorld()->GetDeltaSeconds());
		}

		if (LookValue.Y != 0.f) {
			AddControllerPitchInput(LookValue.Y * ControllerLookRotationRateY * GetWorld()->GetDeltaSeconds());
		}
	}
}

void ACharacterController::StartSprint() {
	if (GetCharacterMovement() && bIsZoomedIn == false && CurrentStamina > 0 && MoveValue.Y > 0) {
		GetCharacterMovement()->MaxWalkSpeed = 300.f;
		bIsSprinting = true;
		CurrentStamina -= StaminaDrainPerTick;
		GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, FString::SanitizeFloat(CurrentStamina));
	}
	else {
		bIsSprinting = false;
		GetCharacterMovement()->MaxWalkSpeed = 175.f;
	}
}

void ACharacterController::FinishSprint() {
	if (GetCharacterMovement() && CurrentStamina < MaxStamina) {
		GetCharacterMovement()->MaxWalkSpeed = 125.f;
		bIsSprinting = false;
		CurrentStamina += StaminaDrainPerTick;
		GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, FString::SanitizeFloat(CurrentStamina));
	}
}

void ACharacterController::ZoomIn() {
	if (PlayerCamera && bIsSprinting == false) {
		PlayerCamera->SetFieldOfView(FMath::Lerp(PlayerCamera->FieldOfView, 60.f, 0.1f));
	}
}

void ACharacterController::ZoomOut() {
	if (PlayerCamera) {
		PlayerCamera->SetFieldOfView(FMath::Lerp(PlayerCamera->FieldOfView, 90.f, 0.1f));
	}
}

void ACharacterController::Lean(const FInputActionValue& Value) {
	const FVector2D LeanValue = Value.Get<FVector2D>();

	float currentTilt = GetControlRotation().Roll;

	if (LeanValue.Y != 0.f && bCanMove == true) {
		if (currentTilt + LeanValue.Y <= MinLean || currentTilt + LeanValue.Y >= MaxLean) {
			AddControllerRollInput(LeanValue.Y);

			if (LeanValue.Y > 0.f) {
				AddActorLocalOffset(FVector(0.f, 2.f, 0.f));
			}
			else {
				AddActorLocalOffset(FVector(0.f, -2.f, 0.f));
			}
		}
	}
}

void ACharacterController::FinishLean(const FInputActionValue& Value) {
	float currentTilt = GetControlRotation().Roll;

	const FVector2D LeanValue = Value.Get<FVector2D>();

	if (LeanValue.Y == 0) {
		if (currentTilt != 0.f) {
			if (currentTilt >= MaxLean) {
				if (currentTilt <= 359.f) {
					UE_LOG(LogTemp, Warning, TEXT("The character is returning from tilting left (CCW)"));
					AddControllerRollInput(10.0f);
					AddActorLocalOffset(FVector(0.f, 0, 0.f));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("The character is ending tilt (CCW)"))
						AddControllerRollInput(360.f - currentTilt);
				}
			}
			else if (currentTilt <= MinLean) {
				if (currentTilt >= 10.f) {
					UE_LOG(LogTemp, Warning, TEXT("The character is returning from tilting right (CW)"))
						AddControllerRollInput(-10.f);
					AddActorLocalOffset(FVector(0.f, 0, 0.f));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("The character is ending tilt (CW)"))
						AddControllerRollInput(0.f - currentTilt);
				}
			}
		}
	}

}

void ACharacterController::StartCrouch() {
	if (bCanMove) {
		if (bIsCrouched) {
			ACharacter::UnCrouch();
		}
		else {
			ACharacter::Crouch();
		}
	}
}

void ACharacterController::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	if (HalfHeightAdjust == 0.f) {
		return;
	}

	float StartBaseEyeHeight = BaseEyeHeight;
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	CrouchEyeOffset.Z += StartBaseEyeHeight - BaseEyeHeight + HalfHeightAdjust;
	SkeletalMesh->SetRelativeLocation(FVector(-9.848078f, 1.736482f, -140.f));
	if (PlayerCamera) {
		PlayerCamera->SetRelativeLocation(FVector(CameraInitalPos, BaseEyeHeight), false);
	}

	
	
}

void ACharacterController::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	if (HalfHeightAdjust == 0.f) {
		return;
	}

	float StartBaseEyeHeight = BaseEyeHeight;
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	CrouchEyeOffset.Z += StartBaseEyeHeight - BaseEyeHeight - HalfHeightAdjust;
	SkeletalMesh->SetRelativeLocation(FVector(-9.848078f, 1.736482f, -140.f));
	if (PlayerCamera) {
		PlayerCamera->SetRelativeLocation(FVector(CameraInitalPos, BaseEyeHeight), false);
	}

	
	
}

void ACharacterController::CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult)
{
	if (PlayerCamera) {
		PlayerCamera->GetCameraView(DeltaTime, OutResult);
		OutResult.Location += CrouchEyeOffset;
	}
}

void ACharacterController::LookAt(FVector LookAtTarget)
{
	FVector ToTarget = LookAtTarget - RootComponent->GetComponentLocation();
	FRotator LookAtRotation = FRotator(0.f, ToTarget.Rotation().Yaw, 0.f);
	GetCapsuleComponent()->SetRelativeRotation(
		FMath::RInterpTo(
			GetCapsuleComponent()->GetComponentRotation(),
			LookAtRotation,
			UGameplayStatics::GetWorldDeltaSeconds(this),
			25.f));
}
#pragma endregion

#pragma region Pickup System

void ACharacterController::OnInspect()
{
	if (!bInspecting && CurrentItem) {
		ToggleItemPickup();
		LastRotation = GetControlRotation();
		ToggleMovement();
		SkeletalMesh->SetVisibility(false);
		Glock->Mesh->SetVisibility(false);
		MouseLookRotationRateX = MouseLookRotationRateX * 1.5f;
		MouseLookRotationRateY = MouseLookRotationRateY * 1.5f;
	}
	else {		
		bInspecting = false;	
	}
}

void ACharacterController::OnInspectReleased()
{
	if (bInspecting) {
		GetController()->SetControlRotation(LastRotation);

		PlayerController->PlayerCameraManager->ViewPitchMin = PitchMin;
		PlayerController->PlayerCameraManager->ViewPitchMax = PitchMax;
		ToggleMovement();
		ToggleItemPickup();
		SkeletalMesh->SetVisibility(true);
		Glock->Mesh->SetVisibility(true);
		MouseLookRotationRateX = MouseLookRotationX;
		MouseLookRotationRateY = MouseLookRotationY;
	}
	else {	
		bInspecting = false;
	}
}

void ACharacterController::ToggleMovement() {
	bCanMove = !bCanMove;
	bInspecting = !bInspecting;
	PlayerCamera->bUsePawnControlRotation = !PlayerCamera->bUsePawnControlRotation;
	bUseControllerRotationYaw = !bUseControllerRotationYaw;
}

void ACharacterController::ToggleItemPickup() {
	if (CurrentItem) {
		bHoldingItem = !bHoldingItem;
		CurrentItem->Pickup();

		if (!bHoldingItem) {
			CurrentItem = NULL;
		}
	}
}

void ACharacterController::Interact() {
	if (bInspecting && PlayerController) {
		AddItemToInventory();
	}
}
#pragma endregion

#pragma region Inventory
void ACharacterController::AddToInventory(class APickup* actor) {
	_inventory.Add(actor);
}

void ACharacterController::RemoveFromInventory(class APickup* actor) {
	_inventory.Remove(actor);
}

void ACharacterController::ClearInventory() {
	for (APickup* elem : _inventory) {
		_inventory.Remove(elem);
	}

	UpdateInventoryDelegate();
}

void ACharacterController::PrintInventory() {
	FString sInventory = "";

	for (APickup* actor : _inventory) {
		sInventory.Append(actor->ObjectName.ToString());
		sInventory.Append(" | ");
	}

	GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, *sInventory);
}

void ACharacterController::OpenInventory() {
	bIsInventoryOpen = !bIsInventoryOpen;
	GamePaused = !GamePaused;
	PlayerController->bShowMouseCursor = bIsInventoryOpen;
	
	if (PlayerController) {
		PlayerController->SetPause(GamePaused);
	}

	if (bIsInventoryOpen == true) {
		UpdateInventoryDelegate();		
		PlayerController->SetInputMode(FInputModeGameAndUI());
	}
	else {
		PlayerController->SetInputMode(FInputModeGameOnly());
	}
}

void ACharacterController::UpdateInventoryDelegate() {
	OnUpdateInventory.Broadcast(_inventory);
}

void ACharacterController::AddItemToInventory() {
	CurrentItem->OnInteract();
	OnInspectReleased();
}
#pragma endregion

#pragma region Shooting
void ACharacterController::Shoot()
{
	if (!bInspecting) {
		FVector EndPos = PlayerCamera->GetForwardVector() * 10000.f * PlayerCamera->GetComponentLocation();
		Glock->PullTrigger();

	}
}

void ACharacterController::Reload() {
	if (!bInspecting) {
		Glock->Reload();
	}
}

void ACharacterController::Aim() {
	Glock->ToggleLaserSight();
}
#pragma endregion

void ACharacterController::StartPlayerMovingCameraShake() {
	if (bCanMove == true) {
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(MyShake);
	}
}

void ACharacterController::StopPlayerMovingCameraShake()
{
	GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StopAllInstancesOfCameraShake(MyShake);
}

void ACharacterController::ToggleFlashlight() {
	if (bCanMove) {
		Flashlight->ToggleLight();
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "MyInputConfigData.h"
#include "InputCoreTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ACharacterController::ACharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Component"));
	PlayerCamera->SetupAttachment(GetRootComponent());
	PlayerCamera->SetRelativeLocation(FVector(0.f, 0.f, 64.f));
	PlayerCamera->bUsePawnControlRotation;

	CrouchEyeOffset = FVector(0.f);
	CrouchSpeed = 6.f;
}

void ACharacterController::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	if (HalfHeightAdjust == 0.f) {
		return;
	}

	float StartBaseEyeHeight = BaseEyeHeight;
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	CrouchEyeOffset.Z += StartBaseEyeHeight - BaseEyeHeight + HalfHeightAdjust;
	if (PlayerCamera) {
		PlayerCamera->SetRelativeLocation(FVector(0.f, 0.f, BaseEyeHeight), false);
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
	if (PlayerCamera) {
		PlayerCamera->SetRelativeLocation(FVector(0.f, 0.f, BaseEyeHeight), false);
	}

	
}

void ACharacterController::CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult)
{
	if (PlayerCamera) {
		PlayerCamera->GetCameraView(DeltaTime, OutResult);
		OutResult.Location += CrouchEyeOffset;
	}
}

// Called when the game starts or when spawned
void ACharacterController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float CrouchInterpTime = FMath::Min(1.f, CrouchSpeed * DeltaTime);
	CrouchEyeOffset = (1.f - CrouchInterpTime) * CrouchEyeOffset;
}

// Called to bind functionality to input
void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Get the player controller
    PlayerController = Cast<APlayerController>(GetController());
    // Get the local player subsystem
    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
    // Clear out existing mapping, and add our mapping
    Subsystem->ClearAllMappings();
    Subsystem->AddMappingContext(InputMapping, 0);

	// Get the EnhancedInputComponent
	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedInputComponent->BindAction(InputActions->InputMove, ETriggerEvent::Triggered, this, &ACharacterController::Move);
	EnhancedInputComponent->BindAction(InputActions->InputLook, ETriggerEvent::Triggered, this, &ACharacterController::Look);
	EnhancedInputComponent->BindAction(InputActions->InputCrouch, ETriggerEvent::Started, this, &ACharacterController::StartCrouch);

}

void ACharacterController::Move(const FInputActionValue& Value){
	if(Controller != nullptr){
		const FVector2D MoveValue = Value.Get<FVector2D>();
		const FRotator MovementRotation(0, Controller->GetControlRotation().Yaw, 0);

		// Forward/Backward direction
		if(MoveValue.Y != 0.0f){
			// Get forward vector
			const FVector Direction = MovementRotation.RotateVector(FVector::ForwardVector);

			if(MoveValue.Y > 0 && PlayerController->IsInputKeyDown(EKeys::LeftShift)){
				UE_LOG(LogTemp, Display, TEXT("RUN"));
				AddMovementInput(Direction, MoveValue.Y);
				GetCharacterMovement()->MaxWalkSpeed = 1000.f;
			} else {
				AddMovementInput(Direction, MoveValue.Y);
				GetCharacterMovement()->MaxWalkSpeed = 600.f;
			}
		}

		// Right/Left direction
		if(MoveValue.X != 0.f){
			
			// Get right vector
			const FVector Direction = MovementRotation.RotateVector(FVector::RightVector);
			AddMovementInput(Direction, MoveValue.X);
		}
	}

}

void ACharacterController::Look(const FInputActionValue& Value){
	if(Controller != nullptr){

		const FVector2D LookValue = Value.Get<FVector2D>();
		
		if(LookValue.X != 0.f){
			AddControllerYawInput(LookValue.X);
		}

		if(LookValue.Y != 0.f){
			AddControllerPitchInput(LookValue.Y);
		}
	}
}

void ACharacterController::StartCrouch(){
	if(bIsCrouched){
		ACharacter::UnCrouch();
	} else{
		ACharacter::Crouch();
		UE_LOG(LogTemp, Display, TEXT("CROUCH"));
	}

}



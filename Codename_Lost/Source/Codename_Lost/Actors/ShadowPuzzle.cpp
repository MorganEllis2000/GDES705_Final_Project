// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/Actors/ShadowPuzzle.h"

#include "Camera/CameraComponent.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AShadowPuzzle::AShadowPuzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object Mesh"));
	RootComponent = ObjectMesh;

}

// Called when the game starts or when spawned
void AShadowPuzzle::BeginPlay()
{
	Super::BeginPlay();
	Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	StartLocation = ObjectToMove->GetActorLocation();
}

// Called every frame
void AShadowPuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bIsRotating && bIsSolved == false)
	{
		RotateActor();
	}

	if(bIsSolved)
	{
		if(ObjectToMove)
		{
			ObjectToMove->SetActorRelativeLocation(FMath::Lerp(ObjectToMove->GetActorLocation(), MoveToLocation, 0.01f));

		}
	} else
	{
		CheckPuzzle();
	}
}

void AShadowPuzzle::RotateActor()
{
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	ObjectMesh->SetRelativeRotation(FQuat(ControlRotation));
}

/* When the player is rotating the puzzle piece this code checks if the puzzle pieces transform is within a range of values, if it is then the puzzle is solved */
void AShadowPuzzle::CheckPuzzle()
{
	if(GetActorRotation().Roll < (CorrectRotation.Roll + 2) && GetActorRotation().Roll > (CorrectRotation.Roll - 2))
	{
		if(GetActorRotation().Pitch < (CorrectRotation.Pitch + 2) && GetActorRotation().Pitch > (CorrectRotation.Pitch - 2))
		{
			if(GetActorRotation().Yaw < (CorrectRotation.Yaw + 2) && GetActorRotation().Yaw > (CorrectRotation.Yaw - 2))
			{
				bIsSolved = true;
				
				Character->ToggleMovement();
				Character->bInspecting = false;
				Character->bInteractingWithShadowPuzzle = false;
				if(!ObjectToMove)
				{
					UE_LOG(LogTemp, Warning, TEXT("Assign an object to move"));
				}
			} else
			{
				bIsSolved = false;
			}
		} else
		{
			bIsSolved = false;
		}
	} else
	{
		bIsSolved = false;
	}
}




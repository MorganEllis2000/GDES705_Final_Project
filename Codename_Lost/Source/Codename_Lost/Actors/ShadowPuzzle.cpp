// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/Actors/ShadowPuzzle.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AShadowPuzzle::AShadowPuzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object Mesh"));
	RootComponent = ObjectMesh;
	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));

}

// Called when the game starts or when spawned
void AShadowPuzzle::BeginPlay()
{
	Super::BeginPlay();
	
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
		UE_LOG(LogTemp, Warning, TEXT("SHADOW PUZZLE SOLVED"));
		
	} else
	{
		CheckPuzzle();
	}
}

void AShadowPuzzle::RotateActor()
{
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	SetActorRotation(FQuat(ControlRotation));
}

void AShadowPuzzle::CheckPuzzle()
{
	if(GetActorRotation().Roll < (CorrectRotation.Roll + 2) && GetActorRotation().Roll > (CorrectRotation.Roll - 2))
	{
		if(GetActorRotation().Pitch < (CorrectRotation.Pitch + 2) && GetActorRotation().Pitch > (CorrectRotation.Pitch - 2))
		{
			if(GetActorRotation().Yaw < (CorrectRotation.Yaw + 2) && GetActorRotation().Yaw > (CorrectRotation.Yaw - 2))
			{
				bIsSolved = true;
				if(ObjectToMove)
				{
					ObjectToMove->SetActorLocation(MoveToLocation);
				} else
				{
					UE_LOG(LogTemp, Warning, TEXT("Assign an object to move"));
				}
				ACharacterController* Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
				Character->ToggleMovement();
				Character->bInspecting = false;
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


// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/Actors/Book.h"
#include "Codename_Lost/Actors/BookshelfPuzzle.h"

// Sets default values
ABook::ABook()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BookMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Book Mesh"));
	BookMesh->SetSimulatePhysics(false);
	RootComponent = BookMesh;
}

// Called when the game starts or when spawned
void ABook::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bWasBookInteractedWith)
	{
		BookMesh->SetRelativeRotation(FMath::Lerp(FQuat(NewRotation), FQuat(OriginalRotation), DeltaTime));
	} else
	{
		BookMesh->SetRelativeRotation(FMath::Lerp(FQuat(OriginalRotation), FQuat(NewRotation), DeltaTime));
		
	}
}

void ABook::OnInteract()
{
	if(BookshelfPuzzle != nullptr && bWasBookInteractedWith == false)
	{
		BookshelfPuzzle->UsersBookOrder.Add(BookName);
		bWasBookInteractedWith = true;
	}
}


// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/Actors/BookshelfPuzzle.h"

#include "Book.h"

// Sets default values
ABookshelfPuzzle::ABookshelfPuzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BookShelf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bookshelf Mesh"));
	BookShelf->SetSimulatePhysics(false);
	RootComponent = BookShelf;
}

// Called when the game starts or when spawned
void ABookshelfPuzzle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABookshelfPuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckPuzzleCombination();

	if(bIsBookshelfOpen)
	{
		UE_LOG(LogTemp, Warning, TEXT("Moving Bookshelf"));
		BookShelf->SetRelativeLocation(FMath::Lerp(GetActorLocation(), FVector(-1100.f, 3530.0f, 0.f), 0.01f));
	}
}

void ABookshelfPuzzle::CheckPuzzleCombination()
{
	if(bIsBookshelfOpen == false)
	{
		int CorrectTally = 0;
		if(UsersBookOrder.Num() == 3)
		{
			for(int i = 0; i < UsersBookOrder.Num(); i++)
			{
				if(UsersBookOrder[i] == CorrectBookOrder[i])
				{
					CorrectTally += 1;
				} else
				{
					UE_LOG(LogTemp, Warning, TEXT("WRONG ORDER"));
					UsersBookOrder.Empty();
					Book1->bWasBookInteractedWith = false;
					Book2->bWasBookInteractedWith = false;
					Book3->bWasBookInteractedWith = false;
					return;
				}
			}
		}

		if(CorrectTally == 3)
		{
			UE_LOG(LogTemp, Warning, TEXT("Bookshelf Open"));
			bIsBookshelfOpen = true;
		}
	}

}


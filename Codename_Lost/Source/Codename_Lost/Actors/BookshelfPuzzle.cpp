// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/Actors/BookshelfPuzzle.h"
#include "Book.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"

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
		BookShelf->SetRelativeLocation(FMath::Lerp(GetActorLocation(), FVector(-1004.805695,3542.731231,99.728719), 0.01f));
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
					UsersBookOrder.Empty();
					GetWorld()->GetTimerManager().SetTimer(WaitForSecondsTimerHandle, this, &ABookshelfPuzzle::ResetPuzzle, 2.1f);
					if(BookshelfOpeningSoundCue)
					{
						UGameplayStatics::PlaySoundAtLocation(this, BookshelfLockingSoundCue, GetActorLocation());
					}
					//ResetPuzzle();
					//UE_LOG(LogTemp, Warning, TEXT("WRONG ORDER 1"));
					//return;
				}
			}
		}
		
		if(CorrectTally == 3)
		{
			UsersBookOrder.Empty();
			CorrectTally = 0;
			UE_LOG(LogTemp, Warning, TEXT("Bookshelf Open"))
			GetWorld()->GetTimerManager().SetTimer(WaitForSecondsTimerHandle, this, &ABookshelfPuzzle::OpenBookshelf, 3.f);
			if(BookshelfOpeningSoundCue)
			{
				UGameplayStatics::PlaySoundAtLocation(this, BookshelfOpeningSoundCue, GetActorLocation());
			}
		}
	}
}

void ABookshelfPuzzle::OpenBookshelf()
{
	bIsBookshelfOpen = true;

}

void ABookshelfPuzzle::ResetPuzzle()
{
	UE_LOG(LogTemp, Warning, TEXT("WRONG ORDER"));
	Book1->bWasBookInteractedWith = false;
	Book2->bWasBookInteractedWith = false;
	Book3->bWasBookInteractedWith = false;
	GetWorld()->GetTimerManager().ClearTimer(WaitForSecondsTimerHandle);
}






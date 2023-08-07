// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/Actors/PadlockPuzzle.h"

// Sets default values
APadlockPuzzle::APadlockPuzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Combination1 = CreateDefaultSubobject<UStaticMeshComponent>("Combination One Mesh");
	Combination2 = CreateDefaultSubobject<UStaticMeshComponent>("Combination Two Mesh");
	Combination3 = CreateDefaultSubobject<UStaticMeshComponent>("Combination Three Mesh");
}

// Called when the game starts or when spawned
void APadlockPuzzle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APadlockPuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/Actors/Cobweb.h"

// Sets default values
ACobweb::ACobweb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CobwebMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cobweb Mesh"));
	CobwebMesh->SetSimulatePhysics(false);
	RootComponent = CobwebMesh;
}

// Called when the game starts or when spawned
void ACobweb::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACobweb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACobweb::OnInteract()
{
	
}


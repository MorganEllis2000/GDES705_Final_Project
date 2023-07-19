// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoorWithLerp.h"
#include "Kismet/GameplayStatics.h"
#include "Containers/UnrealString.h"
#include "Codename_Lost/Actors/GameModes/Codename_LostGameModeBase.h"

// Sets default values
AOpenDoorWithLerp::AOpenDoorWithLerp()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    Open = false;
    
    Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
    Door->SetRelativeLocation(FVector(0.0f, 50.0f, -50.0f));
    RootComponent = Door;
}

// Called when the game starts or when spawned
void AOpenDoorWithLerp::BeginPlay()
{
    Super::BeginPlay();
    
}

// Called every frame
void AOpenDoorWithLerp::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (Open)
    {
        //->SetRelativeLocation(DoorOpenPosition);
        Door->SetRelativeRotation(FQuat::Slerp(FQuat(DoorClosedRotation), FQuat(DoorOpenRotation), 0.01f));
    }
    else
    {
        //Door->SetRelativeLocation(DoorClosedPosition);
        Door->SetRelativeRotation(FQuat::Slerp(FQuat(DoorOpenRotation), FQuat(DoorClosedRotation), 0.01f));
    }
}

void AOpenDoorWithLerp::OpenDoor()
{
    ACodename_LostGameModeBase* GameMode = Cast<ACodename_LostGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
    if (bIsDoorLocked == true) {
        for (auto& Elem : GameMode->TMapOfKeys) {
            if (KeyName == Elem.Key && Elem.Value == true) {
                Open = !Open;
            }
        }
    }
    else {
        Open = !Open;
    }
}



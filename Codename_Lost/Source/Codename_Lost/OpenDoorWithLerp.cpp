// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoorWithLerp.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Containers/UnrealString.h"
#include "Codename_LostGameModeBase.h"
#include "CharacterController.h"
#include "Pickup.h"
#include "EngineUtils.h"

// Sets default values
AOpenDoorWithLerp::AOpenDoorWithLerp()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    Open = false;

    MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));
    MyBoxComponent->InitBoxExtent(FVector(100, 100, 100));
    RootComponent = MyBoxComponent;

    Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
    Door->SetRelativeLocation(FVector(0.0f, 50.0f, -50.0f));
    Door->SetupAttachment(RootComponent);

    MyBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AOpenDoorWithLerp::OnOverlapBegin);
    MyBoxComponent->OnComponentEndOverlap.AddDynamic(this, &AOpenDoorWithLerp::OnOverlapEnd);

    Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

}

// Called when the game starts or when spawned
void AOpenDoorWithLerp::BeginPlay()
{
    Super::BeginPlay();

    //for (TActorIterator<APickup> ObstacleItr(GetWorld()); ObstacleItr; ++ObstacleItr)
    //{
    //    if (ObstacleItr->ObjectName.ToString() == KeyName)
    //    {
    //        PickupObject = *ObstacleItr;
    //    }
    //}
}

// Called every frame
void AOpenDoorWithLerp::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // maybe in UE5,RelativeRotation is private
    DoorRotation = Door->GetRelativeRotation();

    if (Open)
    {
        Door->SetRelativeRotation(FMath::Lerp(FQuat(DoorRotation), FQuat(FRotator(0.0f, RotateValue, 0.0f)), 0.1f));
    }
    else
    {
        Door->SetRelativeRotation(FMath::Lerp(FQuat(DoorRotation), FQuat(FRotator(0.0f, 0.0f, 0.0f)), 0.1f));
    }


}

void AOpenDoorWithLerp::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    ACodename_LostGameModeBase* GameMode = Cast<ACodename_LostGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

    if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
    {
        FVector PawnLocation = OtherActor->GetActorLocation();
        FVector Direction = GetActorLocation() - PawnLocation;
        Direction = UKismetMathLibrary::LessLess_VectorRotator(Direction, GetActorRotation());

        if (Direction.X > 0.0f)
        {
            RotateValue = 90.0f;
        }
        else
        {
            RotateValue = -90.0f;
        }

        if (bIsDoorLocked == true) {
            for (auto& Elem : GameMode->TMapOfKeys) {
                if (KeyName == Elem.Key && Elem.Value == true) {
                    Open = true;
                }
            }
        }
        else {
            Open = true;
        }

    }
}

void AOpenDoorWithLerp::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
    {
        Open = false;
    }
}


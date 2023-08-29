// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Internationalization/Text.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Codename_Lost/Actors/GameModes/Codename_LostGameModeBase.h"
#include "Containers/UnrealString.h"
#include "Sound/DialogueWave.h"
#include "Sound/SoundCue.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object Mesh"));
	ObjectMesh->SetSimulatePhysics(true);
	RootComponent = ObjectMesh;

	bHolding = false;
	bGravity = true;
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
	MyCharacter = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(this, 0));

	TArray<USceneComponent*> Components;
	if(MyCharacter)
	{
		MyCharacter->GetComponents(Components);
	}

	if (Components.Num() > 0) {
		for (auto& comp : Components) {
			if (comp->GetName() == "HoldingComponent") {
				HoldingComp = Cast<USceneComponent>(comp);
			}
		}
	}

	Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickup::RotateActor()
{
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	
	if(UsePlayerPitch && !UsePlayerYaw){
		SetActorRotation(FQuat(FRotator(ControlRotation.Pitch, PickupRotation.Yaw, PickupRotation.Roll)));
	} else if (!UsePlayerPitch && UsePlayerYaw){
		SetActorRotation(FQuat(FRotator(PickupRotation.Pitch, ControlRotation.Yaw, PickupRotation.Roll)));
	} else if (UsePlayerPitch && UsePlayerYaw){
		SetActorRotation(FQuat(FRotator(ControlRotation.Pitch, ControlRotation.Yaw, ControlRotation.Roll)));
	}
}

void APickup::Pickup()
{
	bHolding = !bHolding;
	ObjectMesh->SetEnableGravity(bGravity);
	ObjectMesh->SetSimulatePhysics(bGravity ? false : true);
	
	if (HoldingComp && bHolding) {
		ObjectMesh->AttachToComponent(HoldingComp, FAttachmentTransformRules::KeepWorldTransform);
		SetActorLocation(HoldingComp->GetComponentLocation());
		ObjectMesh->SetRelativeScale3D(PickupScale);
	}

	if (!bHolding)
	{
		ObjectMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		ObjectMesh->SetRelativeLocationAndRotation(InitialLocation, InitialRotation);
		ObjectMesh->SetRelativeScale3D(InitialScale);
	}

	if(Character && bCanBeAddedToCodex && !bWasPickedUp)
	{
		bWasPickedUp = true;
		Character->AddToCodex(this);

		if(bHasAttachtedDialogue)
		{
			//UGameplayStatics::PlayDialogueAtLocation(GetWorld(), Dialogue, Context, this->GetActorLocation());
			//UGameplayStatics::PlaySoundAtLocation(this, Dialogue, this->GetActorLocation());
		}
		
		GEngine->AddOnScreenDebugMessage(1, 3, FColor::White, *ObjectName.ToString());
	}

	ACodename_LostGameModeBase* GameMode = Cast<ACodename_LostGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	if(Character && GameMode)
	{
		if(ObjectName.ToString() == "Map")
		{
			GameMode->bHasMap = true;
		}
	}
	
	if (Character && bCanBeAddedToInventory && !bWasPickedUp) {
		bWasPickedUp = true;
		Character->AddToInventory(this);

		for (auto& Elem : GameMode->TMapOfKeys) {
			if (ObjectName.ToString() == Elem.Key) {
				Elem.Value = true;
			}
		}

		if(ObjectName.ToString() == "Lighter")
		{
			GameMode->bHasLighter = true;
		}
	}
}

void APickup::Show(bool visible) {

	ECollisionEnabled::Type collision = visible ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision;

	this->SetActorTickEnabled(visible);

	this->ObjectMesh->SetVisibility(visible);
	this->ObjectMesh->SetSimulatePhysics(visible);
	this->ObjectMesh->SetCollisionEnabled(collision);
	
}


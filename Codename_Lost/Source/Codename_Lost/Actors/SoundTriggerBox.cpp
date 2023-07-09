// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#include "Codename_Lost/Actors/SoundTriggerBox.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

ASoundTriggerBox::ASoundTriggerBox()
{
	OnActorBeginOverlap.AddDynamic(this, &ASoundTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ASoundTriggerBox::OnOverlapEnd);
}

void ASoundTriggerBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if(OtherActor && (OtherActor != this))
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlap begin"));
		UGameplayStatics::PlaySoundAtLocation(this, SoundFX, GetActorLocation());
	}
}

void ASoundTriggerBox::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if(OtherActor && (OtherActor != this))
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlap end"));
		this->Destroy();
	}
}

void ASoundTriggerBox::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}

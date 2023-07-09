// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "SoundTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API ASoundTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

public:

	ASoundTriggerBox();

	// declare overlap begin function
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	// declare overlap end function
	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
	
protected:
	virtual void BeginPlay() override;
private:

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sound FX")
	class USoundCue* SoundFX;
protected:
	
private:

};

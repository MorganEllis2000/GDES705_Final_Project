// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/TargetPoint.h"
#include "Codename_Lost/Actors/PatrolPath.h"
#include "WraithController.generated.h"


UCLASS()
class CODENAME_LOST_API AWraithController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWraithController();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	APatrolPath* GetPatrolPath();

	void DamageTimerReset();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private: 
	void SetupStimulus();
public:	

	class USoundCue* PlayerDamagedSoundCue;

	float TimeLightShinedOnSelf;

	float DistBtwnWraithAndPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound FX")
	class USoundCue* WraithWisperingSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound FX")
	class UAudioComponent* WraithWisperingAudioComponent;

	bool bIsFleeing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	APatrolPath* PatrolPath;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsAttacking;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanAttack;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanBeDamaged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* DamageSphere;

	TArray<AActor*> OverlappingActors;

	class ACharacterController* Character;

	FTimerHandle DamageTimer;
protected:


private:

	

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class CODENAME_LOST_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PullTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

public:	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	class USceneComponent* MuzzleComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
protected:

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	

	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere)
	float MaxRange = 10000.f;


};

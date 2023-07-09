 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
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
	void PullTrigger(FVector End);

	void Reload();

	void ReloadTimer();

	void FireRateTimer();

	void ToggleLaserSight();

	UFUNCTION()
	void StartHorizontalRecoil(float value);

	UFUNCTION()
	void StartVerticalRecoil(float value);

	void StartRecoil();

	void ReverseRecoil();

	void SetupRecoil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

public:	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	class USceneComponent* MuzzleComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	class UNiagaraComponent* LaserSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ammo")
	float MaxReserveAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ammo")
	float CurrentReserveAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ammo")
	float MagazineSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ammo")
	float CurrentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	float ReloadTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	float Damage = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	float FireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsReloading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLaserOn;

	bool bCanShoot = true;

	FTimeline RecoilTimeLine;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Advanced Recoil")
	class UCurveFloat* VerticalCurve;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Advanced Recoil")
	class UCurveFloat* HorizontalCurve;
protected:
	FTimerHandle ReloadTimerHandle;
	FTimerHandle FireRateTimerHandle;

	class ACharacterController* CharacterController;

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

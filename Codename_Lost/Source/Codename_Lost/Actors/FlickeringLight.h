// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlickeringLight.generated.h"

UCLASS()
class CODENAME_LOST_API AFlickeringLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlickeringLight();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Light Variables")
	float TimeToStayOff;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Light Variables")
	float TimeToStayOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Light Variables")
	float LightOnIntensity;
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Light Variables")
	class USpotLightComponent* Light;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLightOn;
};

// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cobweb.generated.h"

UCLASS()
class CODENAME_LOST_API ACobweb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACobweb();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnInteract();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* CobwebMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInteractedWith;
protected:

private:
};

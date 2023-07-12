// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Book.generated.h"

UCLASS()
class CODENAME_LOST_API ABook : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABook();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnInteract();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	class UStaticMeshComponent* BookMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	FString BookName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	class ABookshelfPuzzle* BookshelfPuzzle;

	bool bWasBookInteractedWith;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	FRotator OriginalRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	FRotator NewRotation;
};

// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BookshelfPuzzle.generated.h"

UCLASS()
class CODENAME_LOST_API ABookshelfPuzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABookshelfPuzzle();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CheckPuzzleCombination();

	UFUNCTION()
	void OpenBookshelf();

	void ResetPuzzle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	class UStaticMeshComponent* BookShelf;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	class ABook* Book1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	class ABook* Book2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	class ABook* Book3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	TArray<FString> CorrectBookOrder;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Books")
	TArray<FString> UsersBookOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SFX")
	class USoundCue* BookshelfOpeningSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SFX")
	class USoundCue* BookshelfLockingSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBookshelfOpen;

	FTimerHandle WaitForSecondsTimerHandle;
protected:

private:

};

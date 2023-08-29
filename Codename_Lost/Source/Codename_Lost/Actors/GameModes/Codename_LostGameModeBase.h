// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Codename_LostGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API ACodename_LostGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasLighter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ArrayOfKeys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, bool> TMapOfKeys;
};

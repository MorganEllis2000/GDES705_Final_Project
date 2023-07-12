// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputAction.h"
#include "MyInputConfigData.generated.h"

/**
 * 
 */
UCLASS()
class CODENAME_LOST_API UMyInputConfigData : public UDataAsset
{
	GENERATED_BODY()

public: 
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputMove;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputSprint;

 
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputLook;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputControllerLook;
	
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputCrouch;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputLean;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputFlashlight;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputInspect;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputPickup;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputOpenInventory;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputShoot;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputReload;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputAim;
};

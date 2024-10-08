// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

class AShooterHUD;

/**
 * 
 */
UCLASS()
class MULTIPLAYERSHOOTER_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	void SetHUDHealth(float Health, float MaxHealth);

protected:
	virtual void BeginPlay() override;

private:
	AShooterHUD* ShooterHUD;
};

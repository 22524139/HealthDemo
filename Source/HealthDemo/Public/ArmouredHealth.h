// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Health.h"
#include "ArmouredHealth.generated.h"

/**
 * here is the armoured health
 * You will need add some variables 
 * Give it a go
 */
UCLASS()
class HEALTHDEMO_API UArmouredHealth : public UHealth
{
	GENERATED_BODY()
	
	private:
	// make our variables private only the health script shoudl deal with the health values
		UPROPERTY(VisibleAnywhere, Category = "Health|MaxHealth")
		int MaxArmour = 2;
		UPROPERTY(VisibleAnywhere, Category = "Health|HP")
		int ArmourPoints = MaxArmour;
	public:
		// notice i have to say this is an override
		void TakeDamage(int Damage) override;
};

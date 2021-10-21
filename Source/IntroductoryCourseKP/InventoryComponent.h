// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INTRODUCTORYCOURSEKP_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	int32 GetSpravka() const { return spravka; }
	int32 GetAttestat() const { return attestat; }
	int32 GetPolis() const { return polis; }
	int32 GetPassport() const { return passport; }
	int32 GetSnils() const { return snils; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	int32 spravka;
	int32 attestat;
	int32 polis;
	int32 passport;
	int32 snils;


public:

};

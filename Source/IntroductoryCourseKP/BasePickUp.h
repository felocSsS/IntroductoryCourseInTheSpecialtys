// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePickUp.generated.h"

UENUM(BlueprintType)
enum class EDocumentType: uint8
{
	Spravka, // справка 086У
	Attestat, // аттестат
	Polis, // полис мед. страхования
	Passport, // пасспорт
	Snils // снилс
};

UCLASS()
class INTRODUCTORYCOURSEKP_API ABasePickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePickUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USphereComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDocumentType DocType = EDocumentType::Spravka;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationSpeed = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DeltaHeight = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LiftingSpeed = 0.2;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void RotateActor(float _RotationSpeed);
	float CalculateLiftHeight(bool PlusOrMinus, float _DeltaHeight);
	float GetZLocation();
	void MakeALift();

	FVector LiftingPoint;
	bool UpOrDown;
};

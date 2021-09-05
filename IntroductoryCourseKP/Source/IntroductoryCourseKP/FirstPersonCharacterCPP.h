// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FirstPersonCharacterCPP.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UMotionControllerComponent;
class UAnimMontage;
class USoundBase;

UCLASS()
class INTRODUCTORYCOURSEKP_API AFirstPersonCharacterCPP : public ACharacter
{
	GENERATED_BODY()
	
	//Меш рук
	UPROPERTY(VisibleAnywhere, Category = Mesh)
		USkeletalMeshComponent* ArmsMesh;
	//Меш предмета в руках, если он есть
	UPROPERTY(VisibleAnywhere, Category = Mesh)
		USkeletalMeshComponent* ThingInArms;


public:
	// Sets default values for this character's properties
	AFirstPersonCharacterCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//Движение вперед-назад
	void MoveForward(float Axis);
	//Поворот вправо-влево
	void MoveRight(float Axis);
	//Прыжок
	void Jump();
	//Не дает еще раз прыгнуть пока мы уже сделали прыжок
	void StopJumping();

public:	

	//Скорость, с которой будет вращаться камера
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	//Ограничение на просмотр вверх и вниз ( проще говоря, он не будет смотря вниз идти дальше 90 градусов)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	//Положение, куда встанет предмет, который должен быть в руках
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector GunOffset;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

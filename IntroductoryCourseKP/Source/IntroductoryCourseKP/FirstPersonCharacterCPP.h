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
	
	//��� ���
	UPROPERTY(VisibleAnywhere, Category = Mesh)
		USkeletalMeshComponent* ArmsMesh;
	//��� �������� � �����, ���� �� ����
	UPROPERTY(VisibleAnywhere, Category = Mesh)
		USkeletalMeshComponent* ThingInArms;


public:
	// Sets default values for this character's properties
	AFirstPersonCharacterCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//�������� ������-�����
	void MoveForward(float Axis);
	//������� ������-�����
	void MoveRight(float Axis);
	//������
	void Jump();
	//�� ���� ��� ��� �������� ���� �� ��� ������� ������
	void StopJumping();

public:	

	//��������, � ������� ����� ��������� ������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	//����������� �� �������� ����� � ���� ( ����� ������, �� �� ����� ������ ���� ���� ������ 90 ��������)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	//���������, ���� ������� �������, ������� ������ ���� � �����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector GunOffset;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacterCPP.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
AFirstPersonCharacterCPP::AFirstPersonCharacterCPP()
{
	
}

// Called when the game starts or when spawned
void AFirstPersonCharacterCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void AFirstPersonCharacterCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFirstPersonCharacterCPP::MoveForward(float Axis)
{

}

void AFirstPersonCharacterCPP::MoveRight(float Axis)
{

}

void AFirstPersonCharacterCPP::Jump()
{

}

void AFirstPersonCharacterCPP::StopJumping()
{

}



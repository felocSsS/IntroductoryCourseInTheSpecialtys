// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Engine/StaticMesh.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*MakeTurn();*/
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &AMainCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &AMainCharacter::TurnAtRate);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMainCharacter::Jump);
}

void AMainCharacter::MoveForward(float Value)
{
	IsMovingForward = Value > 0.f;
	AddMovementInput(GetActorForwardVector(), Value);
}

void AMainCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}

void AMainCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());

	RightTurn = (Rate > 0) ? true : false;
	LeftTurn = (Rate < 0) ? true : false;
}

bool AMainCharacter::IsRunning() const
{
	return !GetVelocity().IsZero();
}

float AMainCharacter::GetCurrentVelocity() const
{
	return GetVelocity().Size();
}

float AMainCharacter::GetMovementDirection() const
{
	if (GetVelocity().IsZero()) return 0.f;
	const FVector VelocityNormal = GetVelocity().GetSafeNormal();
	const float AngleBetween = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormal));
	const FVector CrossProduct = FVector::CrossProduct(GetActorForwardVector(), VelocityNormal);
	const float DegreesBetween = FMath::RadiansToDegrees(AngleBetween);
	
	return CrossProduct.IsZero() ? DegreesBetween : DegreesBetween * FMath::Sign(CrossProduct.Z);
}

void AMainCharacter::MakeTurn() 
{
	//if (GetVelocity().IsZero())
	//{
	//	FRotator CameraRotation = CameraComponent->GetRelativeRotation();
	//	FRotator CapsuleRotation = GetCapsuleComponent()->GetRelativeRotation();

	//	bUseControllerRotationYaw = false;

	//	if (CameraRotation.Yaw > 90.f)
	//	{
	//		Delta = (CameraRotation - TurningLimitForTheLeftSide) + CapsuleRotation;
	//		Delta.Normalize();
	//		float test = Delta.Yaw;
	//		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString(Delta.ToString()));
	//		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::SanitizeFloat(test));
	//	}
	//	else if (CameraRotation.Yaw < -90.f)
	//	{
	//		/*Delta = CameraRotation - TurningLimitForTheRightSide;
	//		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString(Delta.ToString()));*/
	//	}
	//	/*GetCapsuleComponent()->SetRelativeRotation(*/
	//}
	//else
	//{
	//	bUseControllerRotationYaw = true;
	//}
}
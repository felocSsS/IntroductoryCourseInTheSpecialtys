// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePickUp.h"
#include "Components/SphereComponent.h"
#include "InventoryComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABasePickUp::ABasePickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	SetRootComponent(CollisionComponent);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(CollisionComponent);

	inventory = CreateDefaultSubobject<UInventoryComponent>("Inventory");
}

// Called when the game starts or when spawned
void ABasePickUp::BeginPlay()
{
	Super::BeginPlay();
	
	LiftingPoint = StaticMesh->GetRelativeLocation();
}

// Called every frame
void ABasePickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotateActor(RotationSpeed);
	MakeALift();
}


void ABasePickUp::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	switch (DocType)
	{
		case EDocumentType::Attestat:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString("Attestat"), true, FVector2D(2.f, 2.f));
			break;
		case EDocumentType::Passport:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString("Passport"), true, FVector2D(2.f, 2.f));
			break;
		case EDocumentType::Polis:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString("Polis"), true, FVector2D(2.f, 2.f));
			break;
		case EDocumentType::Snils:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString("Snils"), true, FVector2D(2.f, 2.f));
			break;
		case EDocumentType::Spravka:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString("Spravka"), true, FVector2D(2.f, 2.f));
			break;
	default:
		break;
	}

	Destroy();
}

void ABasePickUp::MakeALift()
{
	if (!UpOrDown && (CalculateLiftHeight(true, DeltaHeight) >= GetZLocation()))
	{
		StaticMesh->AddRelativeLocation(FVector(0.f, 0.f, LiftingSpeed));
		UpOrDown = (GetZLocation() > CalculateLiftHeight(true, DeltaHeight));
	}
	else
	{
		StaticMesh->AddRelativeLocation(FVector(0.f, 0.f, -LiftingSpeed));
		UpOrDown = !(GetZLocation() < CalculateLiftHeight(false, LiftingSpeed));
	}
}

void ABasePickUp::RotateActor(float _RotationSpeed)
{
	StaticMesh->AddRelativeRotation(FRotator(0.f, _RotationSpeed, 0.f));
}

float ABasePickUp::CalculateLiftHeight(bool PlusOrMinus, float _DeltaHeight)
{
	if (PlusOrMinus)
	{
		return LiftingPoint.Z + _DeltaHeight;
	}
	else
	{
		return LiftingPoint.Z - _DeltaHeight;
	}
}

float ABasePickUp::GetZLocation()
{
	return StaticMesh->GetRelativeLocation().Z;
}


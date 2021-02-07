// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseActor.h"

// Sets default values
ABaseActor::ABaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->AttachTo(CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent")));

	StaticMeshComponent->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void ABaseActor::BeginPlay()
{
	Super::BeginPlay();

	Color = FVector(1.0f, 0.0f, 0.0f);
}

// Called every frame
void ABaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// StaticMeshComponent->AddRelativeRotation(FRotator(0.f, 0.f, 1.f));

	if (CurrentColor & (uint8)EColors::Red + 1)
	{
		Color.X = Red;
	}

	if (CurrentColor & (uint8)EColors::Green + 1)
	{
		Color.Y = Green;
	}

	if (CurrentColor & (uint8)EColors::Blue + 2)
	{
		Color.Z = Blue;
	}
	
	StaticMeshComponent->SetVectorParameterValueOnMaterials(FName("Color"), Color);

}

FVector ABaseActor::ChangeColor()
{
	Color = FVector(FMath::RandRange(0.0f, 1.0f), FMath::RandRange(0.0f, 1.0f), FMath::RandRange(0.0f, 1.0f));
	return Color;
}
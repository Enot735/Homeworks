// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMesh.h"
#include "BaseActor.generated.h"

UENUM()
enum class EColors : uint8
{
	Red = 0x00,
	Green = 0x01,
	Blue = 0x02,
};

UCLASS()
class TELEPORT_API ABaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "EColors"), Category = Color)
		uint8 CurrentColor;

	UPROPERTY(EditAnywhere, Category = Color, Meta = (ClampMin = "0.0", ClampMax = "1.0"))
		float Red;

	UPROPERTY(EditAnywhere, Category = Color, Meta = (ClampMin = "0.0", ClampMax = "1.0"))
		float Green;

	UPROPERTY(EditAnywhere, Category = Color, Meta = (ClampMin = "0.0", ClampMax = "1.0"))
		float Blue;

	UPROPERTY(BlueprintReadWrite)
		FVector Color;

	UFUNCTION(BlueprintCallable)
		FVector ChangeColor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

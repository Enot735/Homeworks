// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseVRPawn.generated.h"

UCLASS()
class TELEPORT_API ABaseVRPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseVRPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ChangeLeftColor();
	void NotChangeLeftColor();
	void ChangeRightColor();
	void NotChangeRightColor();

	UPROPERTY(BlueprintReadWrite)
		bool bIsChangeLeftColor;

	UPROPERTY(BlueprintReadWrite)
		bool bIsChangeRightColor;

};

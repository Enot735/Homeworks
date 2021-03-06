// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseActor.h"
#include "ClickBaseActor.generated.h"

/**
 * 
 */
UCLASS()
class TELEPORT_API AClickBaseActor : public ABaseActor, public IClickInterface
{
	GENERATED_BODY()

public:
	AClickBaseActor();

	void ClickActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
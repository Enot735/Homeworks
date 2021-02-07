// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClickBaseActor.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "ConeClickBaseActor.generated.h"

/**
 * 
 */
UCLASS()
class TELEPORT_API AConeClickBaseActor : public AClickBaseActor
{
	GENERATED_BODY()

public:
	AConeClickBaseActor();

	UMaterial* MeshMaterial;

	UMaterialInstanceDynamic* MaterialInstDynamic;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
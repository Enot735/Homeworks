// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClickBaseActor.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "SphereClickBaseActor.generated.h"

/**
 * 
 */
UCLASS()
class TELEPORT_API ASphereClickBaseActor : public AClickBaseActor
{
	GENERATED_BODY()
	
public:
	ASphereClickBaseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UMaterial* MeshMaterial;

	UMaterialInstanceDynamic* MaterialInstDynamic;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
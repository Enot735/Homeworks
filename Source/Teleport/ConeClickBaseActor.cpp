// Fill out your copyright notice in the Description page of Project Settings.


#include "ConeClickBaseActor.h"

AConeClickBaseActor::AConeClickBaseActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh>ConeMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
    StaticMeshComponent->SetStaticMesh(ConeMesh.Object);

    static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));
    MeshMaterial = Material.Object;
    StaticMeshComponent->SetMaterial(0, MeshMaterial);

}

// Called when the game starts or when spawned
void AConeClickBaseActor::BeginPlay()
{
    Super::BeginPlay();

    MaterialInstDynamic = UMaterialInstanceDynamic::Create(MeshMaterial, StaticMeshComponent);
    StaticMeshComponent->SetMaterial(0, MaterialInstDynamic);
}

// Called every frame
void AConeClickBaseActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
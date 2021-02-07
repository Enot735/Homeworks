// Fill out your copyright notice in the Description page of Project Settings.


#include "SphereClickBaseActor.h"

ASphereClickBaseActor::ASphereClickBaseActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMesh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
    StaticMeshComponent->SetStaticMesh(SphereMesh.Object);

}

// Called when the game starts or when spawned
void ASphereClickBaseActor::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ASphereClickBaseActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
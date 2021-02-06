// Fill out your copyright notice in the Description page of Project Settings.


#include "ConeClickBaseActor.h"

AConeClickBaseActor::AConeClickBaseActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Mesh
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachTo(CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent")));

}

// Called when the game starts or when spawned
void AConeClickBaseActor::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AConeClickBaseActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
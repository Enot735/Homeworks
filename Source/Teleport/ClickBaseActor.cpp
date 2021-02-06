// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickBaseActor.h"

AClickBaseActor::AClickBaseActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

void AClickBaseActor::ClickActor()
{
    StaticMeshComponent->SetVectorParameterValueOnMaterials(FName("Color"), ChangeColor());

}

// Called when the game starts or when spawned
void AClickBaseActor::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AClickBaseActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
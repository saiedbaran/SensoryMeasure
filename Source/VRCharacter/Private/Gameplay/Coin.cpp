// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/Coin.h"


// Sets default values
ACoin::ACoin()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
	RootComponent = CoinMesh;
	CoinMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CoinMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	CoinMesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACoin::RotateAroundAxis(float DeltaTime)
{
	CoinMesh->AddWorldRotation(RotationDirection * RotationSpeed * DeltaTime);
}

// Called every frame
void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bIsRotating)
	{
		RotateAroundAxis(DeltaTime);
	}
}


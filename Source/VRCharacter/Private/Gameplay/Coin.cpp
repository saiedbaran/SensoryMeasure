﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/Coin.h"

#include "NiagaraFunctionLibrary.h"
#include "Components/SphereComponent.h"


// Sets default values
ACoin::ACoin()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
	RootComponent = CoinMesh;
	CoinMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CoinMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	CoinMesh->SetGenerateOverlapEvents(true);

	CoinOverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CoinOverlapSphere"));
	CoinOverlapSphere->SetupAttachment(CoinMesh);
	CoinOverlapSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CoinOverlapSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	CoinOverlapSphere->SetGenerateOverlapEvents(true);
	CoinOverlapSphere->SetHiddenInGame(true);
	CoinOverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &ACoin::OnCoinOverlapBegin);

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

void ACoin::OnCoinOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(bIsAlreadyCollected){return;}
	if(OtherComp->ComponentTags.Contains(AcceptableOverlapTag))
	{
		bIsAlreadyCollected = true;
		bIsRotating = false;
		CoinMesh->SetVisibility(false);
		if(CoinDisappearEffect)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CoinDisappearEffect, GetActorLocation());
		}
		OnCoinCollected.ExecuteIfBound();
		
		SetActorTickEnabled(false);
	}
}



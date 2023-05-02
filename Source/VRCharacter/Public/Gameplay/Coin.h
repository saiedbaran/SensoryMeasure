// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraSystem.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

class USphereComponent;

UCLASS()
class VRCHARACTER_API ACoin : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACoin();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void RotateAroundAxis(float DeltaTime);

	UFUNCTION()
	void OnCoinOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                   int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* CoinMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	USphereComponent* CoinOverlapSphere;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coin")
	float RotationSpeed = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coin")
	FRotator RotationDirection = FRotator(0, 1, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coin|FX")
	UNiagaraSystem* CoinDisappearEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coin|Interactions")
	FName AcceptableOverlapTag = "tag_finger_tip";

protected:
	bool bIsRotating = true;

};

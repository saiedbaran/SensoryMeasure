// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameData/StudyData.h"
#include "GameFramework/GameModeBase.h"
#include "SensoryMeasureGameMode.generated.h"

class ULSLOutletComponent;

UCLASS()
class VRCHARACTER_API ASensoryMeasureGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASensoryMeasureGameMode();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void CollectCoin();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SensoryMeasure|Setting")
	int TotalCollectableCoins = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SensoryMeasure|Setting")
	TArray<AActor*> AllCoinActors;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SensoryMeasure|InGameData")
	float FullTime = 0.0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SensoryMeasure|InGameData")
	int CollectedCoins = 0;

	UPROPERTY(BlueprintReadWrite)
	UStudyData* StudyData;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SensoryMeasure|InGameData")
	UNPCPGameInstance* NPCPGameInstance;	
};

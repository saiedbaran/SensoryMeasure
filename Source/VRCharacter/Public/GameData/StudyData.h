// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StudyData.generated.h"

/**
 * 
 */
UCLASS()
class VRCHARACTER_API UStudyData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UStudyData();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Study Data")
	FString StudyCondition = "A";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
	float PixelDensity = 0.7f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
	int CurrentRound = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
	FString LevelName;
};

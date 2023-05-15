// Fill out your copyright notice in the Description page of Project Settings.


#include "SensoryMeasureGameMode.h"

#include "Gameplay/Coin.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ASensoryMeasureGameMode::ASensoryMeasureGameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASensoryMeasureGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Get all coin actors and count them
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACoin::StaticClass(), AllCoinActors);
	TotalCollectableCoins = AllCoinActors.Num();
	UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("TotalCollectableCoins: %d"), TotalCollectableCoins), true,
									  true, FLinearColor::Blue, 20.f);


	for (auto CoinActor : AllCoinActors)
	{
		ACoin* Coin = Cast<ACoin>(CoinActor);
		Coin->OnCoinCollected.BindUObject(this, &ASensoryMeasureGameMode::CollectCoin);
	}
}

// Called every frame
void ASensoryMeasureGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASensoryMeasureGameMode::CollectCoin()
{
	CollectedCoins++;

	UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Collected Coins: %d"), CollectedCoins), true,
	                                  true, FLinearColor::Red, 20.f);

	if (CollectedCoins >= TotalCollectableCoins)
	{
		FullTime = GetWorld()->TimeSeconds;
		if (StudyData->CurrentRound == 1)
		{
			StudyData->CurrentRound++;
			if (StudyData->StudyCondition == "A")
			{
				UGameplayStatics::OpenLevel(GetWorld(), "P_SensoryMeasure_LP");
			}
			if (StudyData->StudyCondition == "B")
			{
				UGameplayStatics::OpenLevel(GetWorld(), "P_SensoryMeasure_HP");
			}
		}
		else if (StudyData->CurrentRound > 1)
		{
			StudyData->CurrentRound = 1;
			UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
		}
	}
}

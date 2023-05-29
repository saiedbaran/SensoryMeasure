// Fill out your copyright notice in the Description page of Project Settings.


#include "SensoryMeasureGameMode.h"

#include "Gameplay/Coin.h"
#include "Kismet/GameplayStatics.h"
#include "LSLOutletComponent.h"
#include "NPCPGameInstance.h"


// Sets default values
ASensoryMeasureGameMode::ASensoryMeasureGameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStudyData> StudyDataBPClass(
		TEXT("/Game/SensoryMeasure/08_GameData/DA_StudyData"));
	StudyData = StudyDataBPClass.Object;
}

// Called when the game starts or when spawned
void ASensoryMeasureGameMode::BeginPlay()
{
	Super::BeginPlay();

	NPCPGameInstance = Cast<UNPCPGameInstance>(GetGameInstance());
	if (NPCPGameInstance)
	{
		const TArray<FString> DataString = {FString::Printf(
		TEXT("Group %s-%d, Begin Level, Time: %.2f"),
		*StudyData->LevelName, StudyData->CurrentRound, GetWorld()->TimeSeconds)};
		NPCPGameInstance->PushSampleString(DataString);
	}

	// Get all coin actors and count them
	UGameplayStatics::GetAllActorsOfClass(GetWorld()
	                                      ,
	                                      ACoin::StaticClass(), AllCoinActors
	);
	TotalCollectableCoins = AllCoinActors
		.
		Num();
	UKismetSystemLibrary::PrintString(
		GetWorld(), FString::Printf(TEXT("TotalCollectableCoins: %d"), TotalCollectableCoins), true, true,
		FLinearColor::Green, 20.f);

	for
	(
		auto CoinActor : AllCoinActors
	)
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
	
	if (NPCPGameInstance)
	{
		const TArray<FString> DataString = {FString::Printf(
		TEXT("Group %s-%d, Coin Collected: %d, Time: %.1f"),
		*StudyData->LevelName, StudyData->CurrentRound, CollectedCoins, GetWorld()->TimeSeconds)};
		NPCPGameInstance->PushSampleString(DataString);
	}
	
	UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Collected Coins: %d"), CollectedCoins), true,
	                                  true, FLinearColor::Red, 20.f);

	if (CollectedCoins >= TotalCollectableCoins)
	{
		FullTime = GetWorld()->TimeSeconds;
		if (StudyData->CurrentRound <= 1)
		{
			StudyData->CurrentRound++;
			if (StudyData->StudyCondition == "A")
			{
				UGameplayStatics::OpenLevel(GetWorld(), "P_SensoryMeasure_LP");
				StudyData->StudyCondition = "End";
				StudyData->LevelName = "LP";
			}
			if (StudyData->StudyCondition == "B")
			{
				UGameplayStatics::OpenLevel(GetWorld(), "P_SensoryMeasure_HP");
				StudyData->StudyCondition = "End";
				StudyData->LevelName = "HP";
			}
		}
		else if (StudyData->CurrentRound > 1)
		{
			if (NPCPGameInstance)
			{
				const TArray<FString> DataString = {FString::Printf(
				TEXT("Group %s-%d, Game Over, Time: %.1f"),
				*StudyData->StudyCondition, StudyData->CurrentRound, GetWorld()->TimeSeconds)};
				NPCPGameInstance->PushSampleString(DataString);
			}

			StudyData->CurrentRound = 12;
			UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
		}
	}
}

/*void ASensoryMeasureGameMode::OnLSLEvent_Implementation(const FString& EventData)
{
	if (!LSLOutlet)
	{
		UKismetSystemLibrary::PrintString(
			GetWorld(), FString::Printf(TEXT("NO LSL Outlet")),
			true, true, FLinearColor::Red, 20.f);
	}
	TArray<FString> EventDataArray;
	EventDataArray.Add(EventData);
	LSLOutlet->PushSampleString(EventDataArray);
}*/

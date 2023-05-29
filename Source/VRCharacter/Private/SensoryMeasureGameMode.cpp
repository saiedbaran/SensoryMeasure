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

	/*LSLOutlet = CreateDefaultSubobject<ULSLOutletComponent>(TEXT("LSLOutlet"));
	LSLOutlet->StreamName = "NPCP[PC]";
	LSLOutlet->StreamType = "Event Type";
	FChannelData ChannelData;
	ChannelData.Label = "Even Type";
	ChannelData.Unit = "-";
	LSLOutlet->Channels.Add(ChannelData);*/
}

void ASensoryMeasureGameMode::WriteLSLData()
{
}

// Called when the game starts or when spawned
void ASensoryMeasureGameMode::BeginPlay()
{
	Super::BeginPlay();

	bIsWritingLSLData = true;
	LSLData = FString::Printf(
		TEXT("Group %s-%d, Begin Level, Time: %.2f"),
		*StudyData->StudyCondition, StudyData->CurrentRound, GetWorld()->TimeSeconds);
	LSLDataWriteInterval = 3.0f;
	/*OnLSLEvent(FString::Printf(
		TEXT("Group %s-%d, Begin Level, Time: %.2f"),
		*StudyData->StudyCondition, StudyData->CurrentRound, GetWorld()->TimeSeconds));*/

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

	if (bIsWritingLSLData)
	{
		LSLDataWriteTime += DeltaTime;
		OnLSLEvent(LSLData);

		if (LSLDataWriteTime > LSLDataWriteInterval)
		{
			bIsWritingLSLData = false;
			LSLDataWriteTime = 0.f;
		}
	}
}

void ASensoryMeasureGameMode::CollectCoin()
{
	OnLSLEvent(FString::Printf(
		TEXT("Group %s-%d, Coin Collected: %d, Time: %.1f"),
		*StudyData->StudyCondition, StudyData->CurrentRound, CollectedCoins, GetWorld()->TimeSeconds));
	LSLDataWriteTime = 0.0f;
	LSLDataWriteInterval = 1.0f;


	CollectedCoins++;
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
			}
			if (StudyData->StudyCondition == "B")
			{
				UGameplayStatics::OpenLevel(GetWorld(), "P_SensoryMeasure_HP");
				StudyData->StudyCondition = "End";
			}
		}
		else if (StudyData->CurrentRound > 1)
		{
			OnLSLEvent(FString::Printf(
				TEXT("Group %s-%d, Game Over, Time: %.1f"),
				*StudyData->StudyCondition, StudyData->CurrentRound, GetWorld()->TimeSeconds));
			OnLSLEvent(FString::Printf(
				TEXT("Group %s-%d, Coin Collected: %d, Time: %.1f"),
				*StudyData->StudyCondition, StudyData->CurrentRound, CollectedCoins, GetWorld()->TimeSeconds));
			LSLDataWriteTime = 0.0f;
			LSLDataWriteInterval = 1.0f;

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

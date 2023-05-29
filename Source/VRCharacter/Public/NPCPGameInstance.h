// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LSLOutletComponent.h"
#include "Engine/GameInstance.h"
#include "LSLTypes.h"
#pragma warning (push)
#pragma warning (disable: 4800)
#include "lsl_cpp.h"
#pragma warning (pop)
#include "NPCPGameInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class VRCHARACTER_API UNPCPGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UNPCPGameInstance();

	virtual void Init() override;

	UFUNCTION(BlueprintCallable)
	void AddToReferencedObjects(UObject* Object);

	UFUNCTION(BlueprintCallable)
	TArray<UObject*> GetReferencedObjects();

	// Name of stream. Used to build stream info
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LSL)
	FString StreamName = "GameData[PC]";

	// Type of stream. Used to build stream info
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LSL)
	FString StreamType = "Events";
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LSL)
	float SamplingRate = LSL_IRREGULAR_RATE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LSL)
	EChannelFormat ChannelFormat = EChannelFormat::cfmt_string;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LSL)
	FString StreamID = "NoStreamID";

	UPROPERTY(EditAnywhere, Category = LSL)
	TArray<FChannelData> Channels = {FChannelData()};

	UFUNCTION(BlueprintCallable, Category = LSL)
	void PushSampleString(TArray<FString> data);

protected:
	lsl::stream_outlet *my_outlet;
};

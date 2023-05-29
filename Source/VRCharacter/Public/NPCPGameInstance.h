// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LSLOutletComponent.h"
#include "Engine/GameInstance.h"
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
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ULSLOutletComponent* LSLOutlet;
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnLSLEvent(const FString &EventData);

	UFUNCTION(BlueprintCallable)
	void AddToReferencedObjects(UObject* Object);

	UFUNCTION(BlueprintCallable)
	TArray<UObject*> GetReferencedObjects();
};

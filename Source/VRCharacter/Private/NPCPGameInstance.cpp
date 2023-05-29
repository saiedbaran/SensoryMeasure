// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCPGameInstance.h"

UNPCPGameInstance::UNPCPGameInstance()
{
	LSLOutlet = CreateDefaultSubobject<ULSLOutletComponent>(TEXT("LSLOutlet"));
	LSLOutlet->StreamName = "NPCP[PC]";
	LSLOutlet->StreamType = "Event Type";
	FChannelData ChannelData;
	ChannelData.Label = "Even Type";
	ChannelData.Unit = "-";
	LSLOutlet->Channels.Add(ChannelData);
}

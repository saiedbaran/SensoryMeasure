// Fill out your copyright notice in the Description page of Project Settings.


#include "GameData/StudyData.h"

#include "LSLOutletComponent.h"

UStudyData::UStudyData()
{
	LSLOutletGameData = CreateDefaultSubobject<ULSLOutletComponent>(TEXT("LSLOutletGameData"));
	LSLOutletGameData->StreamName = "GameData[PC]";
	LSLOutletGameData->StreamType = "Events";
	FChannelData ChannelData;
	ChannelData.Label = "Events";
	ChannelData.Unit = "-";
	LSLOutletGameData->Channels.Add(ChannelData);
	LSLOutletGameData->ChannelFormat = EChannelFormat::cfmt_string;
}

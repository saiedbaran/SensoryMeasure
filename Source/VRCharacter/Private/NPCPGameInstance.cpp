// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCPGameInstance.h"
#include "FLSL.h"
#include <string>

UNPCPGameInstance::UNPCPGameInstance()
{
}

void UNPCPGameInstance::Init()
{
	Super::Init();

	lsl::stream_info data_info(
	TCHAR_TO_ANSI(*StreamName),
	TCHAR_TO_ANSI(*StreamType),
	(int16)Channels.Num(),
	(double)SamplingRate,
	lsl::channel_format_t(ChannelFormat),
	TCHAR_TO_ANSI(*StreamID)
);
	lsl::xml_element channels = data_info.desc().append_child("channels");
	for (auto& ch : Channels)
	{
		channels.append_child("channel")
				.append_child_value("label", TCHAR_TO_UTF8(*(ch.Label)))
				.append_child_value("unit", TCHAR_TO_UTF8(*(ch.Unit)));
	}

	if(!my_outlet)
	{
		my_outlet = new lsl::stream_outlet(data_info);
	}
}

void UNPCPGameInstance::AddToReferencedObjects(UObject* Object)
{
	ReferencedObjects.Add(Object);
}

TArray<UObject*> UNPCPGameInstance::GetReferencedObjects()
{
	return ReferencedObjects;
}

void UNPCPGameInstance::PushSampleString(TArray<FString> data)
{
	std::vector<std::string> strVec;
	int32 b;
	for(b=0; b < data.Num(); b++)
	{
		strVec.push_back(TCHAR_TO_UTF8(*data[b]));
	}
	my_outlet->push_sample(strVec);
}

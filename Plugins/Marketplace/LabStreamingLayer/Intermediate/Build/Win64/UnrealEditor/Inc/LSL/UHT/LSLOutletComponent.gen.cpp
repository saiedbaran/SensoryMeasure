// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LSLOutletComponent.h"
#include "LSLTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSLOutletComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	LSL_API UClass* Z_Construct_UClass_ULSLOutletComponent();
	LSL_API UClass* Z_Construct_UClass_ULSLOutletComponent_NoRegister();
	LSL_API UEnum* Z_Construct_UEnum_LSL_EChannelFormat();
	LSL_API UScriptStruct* Z_Construct_UScriptStruct_FChannelData();
	UPackage* Z_Construct_UPackage__Script_LSL();
// End Cross Module References
	DEFINE_FUNCTION(ULSLOutletComponent::execPushSampleString)
	{
		P_GET_TARRAY(FString,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushSampleString(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSLOutletComponent::execPushSampleLong)
	{
		P_GET_TARRAY(int32,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushSampleLong(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSLOutletComponent::execPushSampleFloat)
	{
		P_GET_TARRAY(float,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushSampleFloat(Z_Param_data);
		P_NATIVE_END;
	}
	void ULSLOutletComponent::StaticRegisterNativesULSLOutletComponent()
	{
		UClass* Class = ULSLOutletComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PushSampleFloat", &ULSLOutletComponent::execPushSampleFloat },
			{ "PushSampleLong", &ULSLOutletComponent::execPushSampleLong },
			{ "PushSampleString", &ULSLOutletComponent::execPushSampleString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics
	{
		struct LSLOutletComponent_eventPushSampleFloat_Parms
		{
			TArray<float> data;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSLOutletComponent_eventPushSampleFloat_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSLOutletComponent, nullptr, "PushSampleFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::LSLOutletComponent_eventPushSampleFloat_Parms), Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics
	{
		struct LSLOutletComponent_eventPushSampleLong_Parms
		{
			TArray<int32> data;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSLOutletComponent_eventPushSampleLong_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSL" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = LSL)\n//void PushSampleDouble(TArray<double> data);\n" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = LSL)\nvoid PushSampleDouble(TArray<double> data);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSLOutletComponent, nullptr, "PushSampleLong", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::LSLOutletComponent_eventPushSampleLong_Parms), Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics
	{
		struct LSLOutletComponent_eventPushSampleString_Parms
		{
			TArray<FString> data;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSLOutletComponent_eventPushSampleString_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSL" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = LSL)\n//void PushSampleShort(TArray<int16> data);\n" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = LSL)\nvoid PushSampleShort(TArray<int16> data);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSLOutletComponent, nullptr, "PushSampleString", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::LSLOutletComponent_eventPushSampleString_Parms), Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSLOutletComponent_PushSampleString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSLOutletComponent_PushSampleString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSLOutletComponent);
	UClass* Z_Construct_UClass_ULSLOutletComponent_NoRegister()
	{
		return ULSLOutletComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULSLOutletComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplingRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSLOutletComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LSL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSLOutletComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSLOutletComponent_PushSampleFloat, "PushSampleFloat" }, // 3842724808
		{ &Z_Construct_UFunction_ULSLOutletComponent_PushSampleLong, "PushSampleLong" }, // 4112327941
		{ &Z_Construct_UFunction_ULSLOutletComponent_PushSampleString, "PushSampleString" }, // 2496615647
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLOutletComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LSLOutletComponent.h" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamName_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// Name of stream. Used to build stream info\n" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
		{ "ToolTip", "Name of stream. Used to build stream info" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamName = { "StreamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLOutletComponent, StreamName), METADATA_PARAMS(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamType_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// Type of stream. Used to build stream info\n" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
		{ "ToolTip", "Type of stream. Used to build stream info" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLOutletComponent, StreamType), METADATA_PARAMS(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLOutletComponent, SamplingRate), METADATA_PARAMS(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_SamplingRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_ChannelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_ChannelFormat_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_ChannelFormat = { "ChannelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLOutletComponent, ChannelFormat), Z_Construct_UEnum_LSL_EChannelFormat, METADATA_PARAMS(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_ChannelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_ChannelFormat_MetaData)) }; // 1493352972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamID_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamID = { "StreamID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLOutletComponent, StreamID), METADATA_PARAMS(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChannelData, METADATA_PARAMS(nullptr, 0) }; // 3858194234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_Channels_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLOutletComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLOutletComponent, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_Channels_MetaData)) }; // 3858194234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSLOutletComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_SamplingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_ChannelFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_ChannelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_StreamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_Channels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLOutletComponent_Statics::NewProp_Channels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSLOutletComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSLOutletComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSLOutletComponent_Statics::ClassParams = {
		&ULSLOutletComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULSLOutletComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSLOutletComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULSLOutletComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLOutletComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSLOutletComponent()
	{
		if (!Z_Registration_Info_UClass_ULSLOutletComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSLOutletComponent.OuterSingleton, Z_Construct_UClass_ULSLOutletComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSLOutletComponent.OuterSingleton;
	}
	template<> LSL_API UClass* StaticClass<ULSLOutletComponent>()
	{
		return ULSLOutletComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSLOutletComponent);
	ULSLOutletComponent::~ULSLOutletComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLOutletComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLOutletComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSLOutletComponent, ULSLOutletComponent::StaticClass, TEXT("ULSLOutletComponent"), &Z_Registration_Info_UClass_ULSLOutletComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSLOutletComponent), 2146397425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLOutletComponent_h_3746021584(TEXT("/Script/LSL"),
		Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLOutletComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLOutletComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

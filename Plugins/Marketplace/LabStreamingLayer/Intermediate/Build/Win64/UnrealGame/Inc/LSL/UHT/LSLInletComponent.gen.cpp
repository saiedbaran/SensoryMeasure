// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LSLInletComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSLInletComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	LSL_API UClass* Z_Construct_UClass_ULSLInletComponent();
	LSL_API UClass* Z_Construct_UClass_ULSLInletComponent_NoRegister();
	LSL_API UEnum* Z_Construct_UEnum_LSL_EChannelFormat();
	LSL_API UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature();
	LSL_API UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature();
	LSL_API UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LSL();
// End Cross Module References
	void ULSLInletComponent::StaticRegisterNativesULSLInletComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSLInletComponent);
	UClass* Z_Construct_UClass_ULSLInletComponent_NoRegister()
	{
		return ULSLInletComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULSLInletComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBufLen_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBufLen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChunkLen_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChunkLen;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StreamDataFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamDataFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamDataFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStreamUpdatedFloat_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreamUpdatedFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStreamUpdatedString_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreamUpdatedString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStreamCaughtException_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreamCaughtException;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatDataArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringDataArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSLInletComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LSL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LSLInletComponent.h" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamName_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// Name of stream. Used to resolve stream.\n" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
		{ "ToolTip", "Name of stream. Used to resolve stream." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamName = { "StreamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, StreamName), METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamType_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// Type of stream. Used to resolve stream if name not present.\n" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
		{ "ToolTip", "Type of stream. Used to resolve stream if name not present." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, StreamType), METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxBufLen_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// Maximum buffer length in seconds if there is a nominal sampling rate, otherwise x100 in samples\n" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
		{ "ToolTip", "Maximum buffer length in seconds if there is a nominal sampling rate, otherwise x100 in samples" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxBufLen = { "MaxBufLen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, MaxBufLen), METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxBufLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxBufLen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxChunkLen_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// The maximum size, in samples, at which chunks are transmitted. (0 = the chunk sizes used by the sender)\n" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
		{ "ToolTip", "The maximum size, in samples, at which chunks are transmitted. (0 = the chunk sizes used by the sender)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxChunkLen = { "MaxChunkLen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, MaxChunkLen), METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxChunkLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxChunkLen_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamDataFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamDataFormat_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamDataFormat = { "StreamDataFormat", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, StreamDataFormat), Z_Construct_UEnum_LSL_EChannelFormat, METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamDataFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamDataFormat_MetaData)) }; // 1493352972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedFloat_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// Delegate triggered once per frame update for stream\n" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
		{ "ToolTip", "Delegate triggered once per frame update for stream" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedFloat = { "OnStreamUpdatedFloat", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, OnStreamUpdatedFloat), Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedFloat_MetaData)) }; // 2108216533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedString_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// Delegate triggered once per frame update for stream\n" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
		{ "ToolTip", "Delegate triggered once per frame update for stream" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedString = { "OnStreamUpdatedString", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, OnStreamUpdatedString), Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedString_MetaData)) }; // 3536749516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamCaughtException_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamCaughtException = { "OnStreamCaughtException", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, OnStreamCaughtException), Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamCaughtException_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamCaughtException_MetaData)) }; // 861001399
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_FloatDataArray_Inner = { "FloatDataArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_FloatDataArray_MetaData[] = {
		{ "Category", "LSL" },
		{ "Comment", "// TODO: More types of DataArrays\n" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
		{ "ToolTip", "TODO: More types of DataArrays" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_FloatDataArray = { "FloatDataArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, FloatDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_FloatDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_FloatDataArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StringDataArray_Inner = { "StringDataArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StringDataArray_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLInletComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StringDataArray = { "StringDataArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSLInletComponent, StringDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StringDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StringDataArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSLInletComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxBufLen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_MaxChunkLen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamDataFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StreamDataFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamUpdatedString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_OnStreamCaughtException,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_FloatDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_FloatDataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StringDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSLInletComponent_Statics::NewProp_StringDataArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSLInletComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSLInletComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSLInletComponent_Statics::ClassParams = {
		&ULSLInletComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULSLInletComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULSLInletComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLInletComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSLInletComponent()
	{
		if (!Z_Registration_Info_UClass_ULSLInletComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSLInletComponent.OuterSingleton, Z_Construct_UClass_ULSLInletComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSLInletComponent.OuterSingleton;
	}
	template<> LSL_API UClass* StaticClass<ULSLInletComponent>()
	{
		return ULSLInletComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSLInletComponent);
	ULSLInletComponent::~ULSLInletComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLInletComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLInletComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSLInletComponent, ULSLInletComponent::StaticClass, TEXT("ULSLInletComponent"), &Z_Registration_Info_UClass_ULSLInletComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSLInletComponent), 3290663574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLInletComponent_h_4255499998(TEXT("/Script/LSL"),
		Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLInletComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Saeed_Documents_Unreal_Projects_SensoryMeasure_Plugins_Marketplace_LabStreamingLayer_Source_LSL_Public_LSLInletComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

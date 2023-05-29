// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LSL/Public/LSLTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSLTypes() {}
// Cross Module References
	LSL_API UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LSL();
	LSL_API UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature();
	LSL_API UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature();
	LSL_API UEnum* Z_Construct_UEnum_LSL_EChannelFormat();
	LSL_API UScriptStruct* Z_Construct_UScriptStruct_FChannelData();
	LSL_API UClass* Z_Construct_UClass_ULSLTypes_NoRegister();
	LSL_API UClass* Z_Construct_UClass_ULSLTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics
	{
		struct _Script_LSL_eventLSLStreamUpdatedStringDelegate_Parms
		{
			TArray<FString> StringArray;
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LSL_eventLSLStreamUpdatedStringDelegate_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_StringArray_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LSL_eventLSLStreamUpdatedStringDelegate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_StringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//---------------------------------------------------\n// Delegate types\n//---------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/LSLTypes.h" },
		{ "ToolTip", "Delegate types" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LSL, nullptr, "LSLStreamUpdatedStringDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::_Script_LSL_eventLSLStreamUpdatedStringDelegate_Parms), Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedStringDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics
	{
		struct _Script_LSL_eventLSLStreamUpdatedFloatDelegate_Parms
		{
			TArray<float> FloatArray;
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_FloatArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LSL_eventLSLStreamUpdatedFloatDelegate_Parms, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_FloatArray_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LSL_eventLSLStreamUpdatedFloatDelegate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LSLTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LSL, nullptr, "LSLStreamUpdatedFloatDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::_Script_LSL_eventLSLStreamUpdatedFloatDelegate_Parms), Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LSL_LSLStreamUpdatedFloatDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics
	{
		struct _Script_LSL_eventLSLStreamCaughtExceptionDelegate_Parms
		{
			FString ErrorString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::NewProp_ErrorString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::NewProp_ErrorString = { "ErrorString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LSL_eventLSLStreamCaughtExceptionDelegate_Parms, ErrorString), METADATA_PARAMS(Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::NewProp_ErrorString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::NewProp_ErrorString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::NewProp_ErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LSLTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LSL, nullptr, "LSLStreamCaughtExceptionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::_Script_LSL_eventLSLStreamCaughtExceptionDelegate_Parms), Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LSL_LSLStreamCaughtExceptionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChannelFormat;
	static UEnum* EChannelFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChannelFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChannelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LSL_EChannelFormat, Z_Construct_UPackage__Script_LSL(), TEXT("EChannelFormat"));
		}
		return Z_Registration_Info_UEnum_EChannelFormat.OuterSingleton;
	}
	template<> LSL_API UEnum* StaticEnum<EChannelFormat>()
	{
		return EChannelFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_LSL_EChannelFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LSL_EChannelFormat_Statics::Enumerators[] = {
		{ "EChannelFormat::cfmt_undefined", (int64)EChannelFormat::cfmt_undefined },
		{ "EChannelFormat::cfmt_float32", (int64)EChannelFormat::cfmt_float32 },
		{ "EChannelFormat::cfmt_double64", (int64)EChannelFormat::cfmt_double64 },
		{ "EChannelFormat::cfmt_string", (int64)EChannelFormat::cfmt_string },
		{ "EChannelFormat::cfmt_int32", (int64)EChannelFormat::cfmt_int32 },
		{ "EChannelFormat::cfmt_int16", (int64)EChannelFormat::cfmt_int16 },
		{ "EChannelFormat::cfmt_int8", (int64)EChannelFormat::cfmt_int8 },
		{ "EChannelFormat::cfmt_int64", (int64)EChannelFormat::cfmt_int64 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LSL_EChannelFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "cfmt_double64.DisplayName", "double64" },
		{ "cfmt_double64.Name", "EChannelFormat::cfmt_double64" },
		{ "cfmt_float32.DisplayName", "float32" },
		{ "cfmt_float32.Name", "EChannelFormat::cfmt_float32" },
		{ "cfmt_int16.DisplayName", "int16" },
		{ "cfmt_int16.Name", "EChannelFormat::cfmt_int16" },
		{ "cfmt_int32.DisplayName", "int32" },
		{ "cfmt_int32.Name", "EChannelFormat::cfmt_int32" },
		{ "cfmt_int64.DisplayName", "int64" },
		{ "cfmt_int64.Name", "EChannelFormat::cfmt_int64" },
		{ "cfmt_int8.DisplayName", "int8" },
		{ "cfmt_int8.Name", "EChannelFormat::cfmt_int8" },
		{ "cfmt_string.DisplayName", "string" },
		{ "cfmt_string.Name", "EChannelFormat::cfmt_string" },
		{ "cfmt_undefined.DisplayName", "undefined" },
		{ "cfmt_undefined.Name", "EChannelFormat::cfmt_undefined" },
		{ "ModuleRelativePath", "Public/LSLTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LSL_EChannelFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LSL,
		nullptr,
		"EChannelFormat",
		"EChannelFormat",
		Z_Construct_UEnum_LSL_EChannelFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LSL_EChannelFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LSL_EChannelFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LSL_EChannelFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LSL_EChannelFormat()
	{
		if (!Z_Registration_Info_UEnum_EChannelFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChannelFormat.InnerSingleton, Z_Construct_UEnum_LSL_EChannelFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChannelFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChannelData;
class UScriptStruct* FChannelData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChannelData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelData, Z_Construct_UPackage__Script_LSL(), TEXT("ChannelData"));
	}
	return Z_Registration_Info_UScriptStruct_ChannelData.OuterSingleton;
}
template<> LSL_API UScriptStruct* StaticStruct<FChannelData>()
{
	return FChannelData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChannelData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LSLTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChannelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelData, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Unit_MetaData[] = {
		{ "Category", "LSL" },
		{ "ModuleRelativePath", "Public/LSLTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelData, Unit), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Unit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelData_Statics::NewProp_Unit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LSL,
		nullptr,
		&NewStructOps,
		"ChannelData",
		sizeof(FChannelData),
		alignof(FChannelData),
		Z_Construct_UScriptStruct_FChannelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChannelData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChannelData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChannelData.InnerSingleton, Z_Construct_UScriptStruct_FChannelData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChannelData.InnerSingleton;
	}
	void ULSLTypes::StaticRegisterNativesULSLTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSLTypes);
	UClass* Z_Construct_UClass_ULSLTypes_NoRegister()
	{
		return ULSLTypes::StaticClass();
	}
	struct Z_Construct_UClass_ULSLTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSLTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LSL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LSLTypes.h" },
		{ "ModuleRelativePath", "Public/LSLTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSLTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSLTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSLTypes_Statics::ClassParams = {
		&ULSLTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSLTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSLTypes()
	{
		if (!Z_Registration_Info_UClass_ULSLTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSLTypes.OuterSingleton, Z_Construct_UClass_ULSLTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSLTypes.OuterSingleton;
	}
	template<> LSL_API UClass* StaticClass<ULSLTypes>()
	{
		return ULSLTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSLTypes);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::EnumInfo[] = {
		{ EChannelFormat_StaticEnum, TEXT("EChannelFormat"), &Z_Registration_Info_UEnum_EChannelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1493352972U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::ScriptStructInfo[] = {
		{ FChannelData::StaticStruct, Z_Construct_UScriptStruct_FChannelData_Statics::NewStructOps, TEXT("ChannelData"), &Z_Registration_Info_UScriptStruct_ChannelData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChannelData), 1715336289U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSLTypes, ULSLTypes::StaticClass, TEXT("ULSLTypes"), &Z_Registration_Info_UClass_ULSLTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSLTypes), 1959537722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_1545037965(TEXT("/Script/LSL"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LSL_LSLTypes_generated_h
#error "LSLTypes.generated.h already included, missing '#pragma once' in LSLTypes.h"
#endif
#define LSL_LSLTypes_generated_h

#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_11_DELEGATE \
struct _Script_LSL_eventLSLStreamUpdatedStringDelegate_Parms \
{ \
	TArray<FString> StringArray; \
	float DeltaSeconds; \
}; \
static inline void FLSLStreamUpdatedStringDelegate_DelegateWrapper(const FMulticastScriptDelegate& LSLStreamUpdatedStringDelegate, TArray<FString> const& StringArray, float DeltaSeconds) \
{ \
	_Script_LSL_eventLSLStreamUpdatedStringDelegate_Parms Parms; \
	Parms.StringArray=StringArray; \
	Parms.DeltaSeconds=DeltaSeconds; \
	LSLStreamUpdatedStringDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_12_DELEGATE \
struct _Script_LSL_eventLSLStreamUpdatedFloatDelegate_Parms \
{ \
	TArray<float> FloatArray; \
	float DeltaSeconds; \
}; \
static inline void FLSLStreamUpdatedFloatDelegate_DelegateWrapper(const FMulticastScriptDelegate& LSLStreamUpdatedFloatDelegate, TArray<float> const& FloatArray, float DeltaSeconds) \
{ \
	_Script_LSL_eventLSLStreamUpdatedFloatDelegate_Parms Parms; \
	Parms.FloatArray=FloatArray; \
	Parms.DeltaSeconds=DeltaSeconds; \
	LSLStreamUpdatedFloatDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_13_DELEGATE \
struct _Script_LSL_eventLSLStreamCaughtExceptionDelegate_Parms \
{ \
	FString ErrorString; \
}; \
static inline void FLSLStreamCaughtExceptionDelegate_DelegateWrapper(const FMulticastScriptDelegate& LSLStreamCaughtExceptionDelegate, const FString& ErrorString) \
{ \
	_Script_LSL_eventLSLStreamCaughtExceptionDelegate_Parms Parms; \
	Parms.ErrorString=ErrorString; \
	LSLStreamCaughtExceptionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChannelData_Statics; \
	LSL_API static class UScriptStruct* StaticStruct();


template<> LSL_API UScriptStruct* StaticStruct<struct FChannelData>();

#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_SPARSE_DATA
#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_RPC_WRAPPERS
#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULSLTypes(); \
	friend struct Z_Construct_UClass_ULSLTypes_Statics; \
public: \
	DECLARE_CLASS(ULSLTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LSL"), NO_API) \
	DECLARE_SERIALIZER(ULSLTypes)


#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_INCLASS \
private: \
	static void StaticRegisterNativesULSLTypes(); \
	friend struct Z_Construct_UClass_ULSLTypes_Statics; \
public: \
	DECLARE_CLASS(ULSLTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LSL"), NO_API) \
	DECLARE_SERIALIZER(ULSLTypes)


#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULSLTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULSLTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSLTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSLTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSLTypes(ULSLTypes&&); \
	NO_API ULSLTypes(const ULSLTypes&); \
public:


#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULSLTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSLTypes(ULSLTypes&&); \
	NO_API ULSLTypes(const ULSLTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSLTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSLTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULSLTypes)


#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_37_PROLOG
#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_SPARSE_DATA \
	FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_RPC_WRAPPERS \
	FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_INCLASS \
	FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_SPARSE_DATA \
	FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LSL_API UClass* StaticClass<class ULSLTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_LabStreamingLayer_Source_LSL_Public_LSLTypes_h


#define FOREACH_ENUM_ECHANNELFORMAT(op) \
	op(EChannelFormat::cfmt_undefined) \
	op(EChannelFormat::cfmt_float32) \
	op(EChannelFormat::cfmt_double64) \
	op(EChannelFormat::cfmt_string) \
	op(EChannelFormat::cfmt_int32) \
	op(EChannelFormat::cfmt_int16) \
	op(EChannelFormat::cfmt_int8) \
	op(EChannelFormat::cfmt_int64) 

enum class EChannelFormat : uint8;
template<> LSL_API UEnum* StaticEnum<EChannelFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

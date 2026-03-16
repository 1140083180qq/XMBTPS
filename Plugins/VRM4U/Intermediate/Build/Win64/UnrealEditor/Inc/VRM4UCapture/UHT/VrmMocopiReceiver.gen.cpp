// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UCapture/Public/VrmMocopiReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmMocopiReceiver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_VRM4UCapture();
VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmMocopiReceiver();
VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmMocopiReceiver_NoRegister();
VRM4UCAPTURE_API UFunction* Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature();
VRM4UCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FStructMocopiData();
// End Cross Module References

// Begin ScriptStruct FStructMocopiData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructMocopiData;
class UScriptStruct* FStructMocopiData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructMocopiData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructMocopiData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructMocopiData, (UObject*)Z_Construct_UPackage__Script_VRM4UCapture(), TEXT("StructMocopiData"));
	}
	return Z_Registration_Info_UScriptStruct_StructMocopiData.OuterSingleton;
}
template<> VRM4UCAPTURE_API UScriptStruct* StaticStruct<FStructMocopiData>()
{
	return FStructMocopiData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStructMocopiData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameNo_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MocopiTransformWorld_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MocopiTransformLocal_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmTransformLocal_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmTransformBoneList_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MocopiTransformWorld_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MocopiTransformWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MocopiTransformLocal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MocopiTransformLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VrmTransformLocal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VrmTransformLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VrmTransformBoneList_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VrmTransformBoneList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VrmTransformBoneList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructMocopiData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_FrameNo = { "FrameNo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructMocopiData, FrameNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameNo_MetaData), NewProp_FrameNo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructMocopiData, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld_Inner = { "MocopiTransformWorld", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld = { "MocopiTransformWorld", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructMocopiData, MocopiTransformWorld), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MocopiTransformWorld_MetaData), NewProp_MocopiTransformWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal_Inner = { "MocopiTransformLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal = { "MocopiTransformLocal", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructMocopiData, MocopiTransformLocal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MocopiTransformLocal_MetaData), NewProp_MocopiTransformLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal_Inner = { "VrmTransformLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal = { "VrmTransformLocal", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructMocopiData, VrmTransformLocal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmTransformLocal_MetaData), NewProp_VrmTransformLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_ValueProp = { "VrmTransformBoneList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_Key_KeyProp = { "VrmTransformBoneList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList = { "VrmTransformBoneList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructMocopiData, VrmTransformBoneList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmTransformBoneList_MetaData), NewProp_VrmTransformBoneList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructMocopiData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_FrameNo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCapture,
	nullptr,
	&NewStructOps,
	"StructMocopiData",
	Z_Construct_UScriptStruct_FStructMocopiData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::PropPointers),
	sizeof(FStructMocopiData),
	alignof(FStructMocopiData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructMocopiData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructMocopiData()
{
	if (!Z_Registration_Info_UScriptStruct_StructMocopiData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructMocopiData.InnerSingleton, Z_Construct_UScriptStruct_FStructMocopiData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StructMocopiData.InnerSingleton;
}
// End ScriptStruct FStructMocopiData

// Begin Delegate FVrmMocopiReceiverDelegate
struct Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics
{
	struct VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms
	{
		FStructMocopiData data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms, data), Z_Construct_UScriptStruct_FStructMocopiData, METADATA_PARAMS(0, nullptr) }; // 3207985732
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "VrmMocopiReceiverDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVrmMocopiReceiver::FVrmMocopiReceiverDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmMocopiReceiverDelegate, FStructMocopiData data)
{
	struct VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms
	{
		FStructMocopiData data;
	};
	VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms Parms;
	Parms.data=data;
	VrmMocopiReceiverDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVrmMocopiReceiverDelegate

// Begin Class UVrmMocopiReceiver Function GetCurrentTime
struct Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics
{
	struct VrmMocopiReceiver_eventGetCurrentTime_Parms
	{
		int32 FrameNo;
		int32 Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::NewProp_FrameNo = { "FrameNo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventGetCurrentTime_Parms, FrameNo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventGetCurrentTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::NewProp_FrameNo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "GetCurrentTime", nullptr, nullptr, Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::VrmMocopiReceiver_eventGetCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::VrmMocopiReceiver_eventGetCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmMocopiReceiver::execGetCurrentTime)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FrameNo);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentTime(Z_Param_Out_FrameNo,Z_Param_Out_Time);
	P_NATIVE_END;
}
// End Class UVrmMocopiReceiver Function GetCurrentTime

// Begin Class UVrmMocopiReceiver Function GetLatestFrameData
struct Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics
{
	struct VrmMocopiReceiver_eventGetLatestFrameData_Parms
	{
		FStructMocopiData data;
		bool bEnable;
		bool bUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_bUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventGetLatestFrameData_Parms, data), Z_Construct_UScriptStruct_FStructMocopiData, METADATA_PARAMS(0, nullptr) }; // 3207985732
void Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((VrmMocopiReceiver_eventGetLatestFrameData_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventGetLatestFrameData_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bUpdate_SetBit(void* Obj)
{
	((VrmMocopiReceiver_eventGetLatestFrameData_Parms*)Obj)->bUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventGetLatestFrameData_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "GetLatestFrameData", nullptr, nullptr, Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::VrmMocopiReceiver_eventGetLatestFrameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::VrmMocopiReceiver_eventGetLatestFrameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmMocopiReceiver::execGetLatestFrameData)
{
	P_GET_STRUCT_REF(FStructMocopiData,Z_Param_Out_data);
	P_GET_UBOOL_REF(Z_Param_Out_bEnable);
	P_GET_UBOOL_REF(Z_Param_Out_bUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLatestFrameData(Z_Param_Out_data,Z_Param_Out_bEnable,Z_Param_Out_bUpdate);
	P_NATIVE_END;
}
// End Class UVrmMocopiReceiver Function GetLatestFrameData

// Begin Class UVrmMocopiReceiver Function GetNextFrameData
struct Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics
{
	struct VrmMocopiReceiver_eventGetNextFrameData_Parms
	{
		FStructMocopiData data;
		bool bEnable;
		bool bUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_bUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventGetNextFrameData_Parms, data), Z_Construct_UScriptStruct_FStructMocopiData, METADATA_PARAMS(0, nullptr) }; // 3207985732
void Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((VrmMocopiReceiver_eventGetNextFrameData_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventGetNextFrameData_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bUpdate_SetBit(void* Obj)
{
	((VrmMocopiReceiver_eventGetNextFrameData_Parms*)Obj)->bUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventGetNextFrameData_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "GetNextFrameData", nullptr, nullptr, Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::VrmMocopiReceiver_eventGetNextFrameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::VrmMocopiReceiver_eventGetNextFrameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmMocopiReceiver::execGetNextFrameData)
{
	P_GET_STRUCT_REF(FStructMocopiData,Z_Param_Out_data);
	P_GET_UBOOL_REF(Z_Param_Out_bEnable);
	P_GET_UBOOL_REF(Z_Param_Out_bUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNextFrameData(Z_Param_Out_data,Z_Param_Out_bEnable,Z_Param_Out_bUpdate);
	P_NATIVE_END;
}
// End Class UVrmMocopiReceiver Function GetNextFrameData

// Begin Class UVrmMocopiReceiver Function Listen
struct Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "Listen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_Listen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmMocopiReceiver::execListen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Listen();
	P_NATIVE_END;
}
// End Class UVrmMocopiReceiver Function Listen

// Begin Class UVrmMocopiReceiver Function SetAddress
struct Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics
{
	struct VrmMocopiReceiver_eventSetAddress_Parms
	{
		FString ReceiveIPAddress;
		int32 Port;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveIPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiveIPAddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReceiveIPAddress = { "ReceiveIPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventSetAddress_Parms, ReceiveIPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiveIPAddress_MetaData), NewProp_ReceiveIPAddress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventSetAddress_Parms, Port), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VrmMocopiReceiver_eventSetAddress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventSetAddress_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReceiveIPAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "SetAddress", nullptr, nullptr, Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::VrmMocopiReceiver_eventSetAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::VrmMocopiReceiver_eventSetAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmMocopiReceiver::execSetAddress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ReceiveIPAddress);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAddress(Z_Param_ReceiveIPAddress,Z_Param_Port);
	P_NATIVE_END;
}
// End Class UVrmMocopiReceiver Function SetAddress

// Begin Class UVrmMocopiReceiver Function SetBufferNum
struct Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics
{
	struct VrmMocopiReceiver_eventSetBufferNum_Parms
	{
		int32 Num;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_Num", "10" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventSetBufferNum_Parms, Num), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::NewProp_Num,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "SetBufferNum", nullptr, nullptr, Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::VrmMocopiReceiver_eventSetBufferNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::VrmMocopiReceiver_eventSetBufferNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmMocopiReceiver::execSetBufferNum)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Num);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBufferNum(Z_Param_Num);
	P_NATIVE_END;
}
// End Class UVrmMocopiReceiver Function SetBufferNum

// Begin Class UVrmMocopiReceiver Function Stop
struct Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmMocopiReceiver::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UVrmMocopiReceiver Function Stop

// Begin Class UVrmMocopiReceiver
void UVrmMocopiReceiver::StaticRegisterNativesUVrmMocopiReceiver()
{
	UClass* Class = UVrmMocopiReceiver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentTime", &UVrmMocopiReceiver::execGetCurrentTime },
		{ "GetLatestFrameData", &UVrmMocopiReceiver::execGetLatestFrameData },
		{ "GetNextFrameData", &UVrmMocopiReceiver::execGetNextFrameData },
		{ "Listen", &UVrmMocopiReceiver::execListen },
		{ "SetAddress", &UVrmMocopiReceiver::execSetAddress },
		{ "SetBufferNum", &UVrmMocopiReceiver::execSetBufferNum },
		{ "Stop", &UVrmMocopiReceiver::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmMocopiReceiver);
UClass* Z_Construct_UClass_UVrmMocopiReceiver_NoRegister()
{
	return UVrmMocopiReceiver::StaticClass();
}
struct Z_Construct_UClass_UVrmMocopiReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmMocopiReceiver.h" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceived_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime, "GetCurrentTime" }, // 181176250
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData, "GetLatestFrameData" }, // 4090619522
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData, "GetNextFrameData" }, // 920892939
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_Listen, "Listen" }, // 3767933224
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress, "SetAddress" }, // 2871552523
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum, "SetBufferNum" }, // 1973822916
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_Stop, "Stop" }, // 1322035560
		{ &Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature, "VrmMocopiReceiverDelegate__DelegateSignature" }, // 2752124994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmMocopiReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmMocopiReceiver_Statics::NewProp_OnReceived = { "OnReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMocopiReceiver, OnReceived), Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceived_MetaData), NewProp_OnReceived_MetaData) }; // 2752124994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmMocopiReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMocopiReceiver_Statics::NewProp_OnReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMocopiReceiver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmMocopiReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMocopiReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmMocopiReceiver_Statics::ClassParams = {
	&UVrmMocopiReceiver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVrmMocopiReceiver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMocopiReceiver_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMocopiReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmMocopiReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmMocopiReceiver()
{
	if (!Z_Registration_Info_UClass_UVrmMocopiReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmMocopiReceiver.OuterSingleton, Z_Construct_UClass_UVrmMocopiReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmMocopiReceiver.OuterSingleton;
}
template<> VRM4UCAPTURE_API UClass* StaticClass<UVrmMocopiReceiver>()
{
	return UVrmMocopiReceiver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmMocopiReceiver);
UVrmMocopiReceiver::~UVrmMocopiReceiver() {}
// End Class UVrmMocopiReceiver

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStructMocopiData::StaticStruct, Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewStructOps, TEXT("StructMocopiData"), &Z_Registration_Info_UScriptStruct_StructMocopiData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructMocopiData), 3207985732U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmMocopiReceiver, UVrmMocopiReceiver::StaticClass, TEXT("UVrmMocopiReceiver"), &Z_Registration_Info_UClass_UVrmMocopiReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmMocopiReceiver), 3205730831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_675928886(TEXT("/Script/VRM4UCapture"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

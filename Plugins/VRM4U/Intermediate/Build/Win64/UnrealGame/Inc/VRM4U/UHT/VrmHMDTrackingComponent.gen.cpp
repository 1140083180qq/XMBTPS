// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Private/VrmHMDTrackingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmHMDTrackingComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmHMDTrackingComponent();
VRM4U_API UClass* Z_Construct_UClass_UVrmHMDTrackingComponent_NoRegister();
// End Cross Module References

// Begin Class UVrmHMDTrackingComponent Function IsEnable
struct Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics
{
	struct VrmHMDTrackingComponent_eventIsEnable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VrmHMDTrackingComponent_eventIsEnable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmHMDTrackingComponent_eventIsEnable_Parms), &Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmHMDTrackingComponent, nullptr, "IsEnable", nullptr, nullptr, Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::VrmHMDTrackingComponent_eventIsEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::VrmHMDTrackingComponent_eventIsEnable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmHMDTrackingComponent::execIsEnable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnable();
	P_NATIVE_END;
}
// End Class UVrmHMDTrackingComponent Function IsEnable

// Begin Class UVrmHMDTrackingComponent
void UVrmHMDTrackingComponent::StaticRegisterNativesUVrmHMDTrackingComponent()
{
	UClass* Class = UVrmHMDTrackingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsEnable", &UVrmHMDTrackingComponent::execIsEnable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmHMDTrackingComponent);
UClass* Z_Construct_UClass_UVrmHMDTrackingComponent_NoRegister()
{
	return UVrmHMDTrackingComponent::StaticClass();
}
struct Z_Construct_UClass_UVrmHMDTrackingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VrmHMDTrackingComponent.h" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rootScale_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightHandReference_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftHandReference_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightPinch_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftPinch_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadPos_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadRot_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dummyForLog_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLeft_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRight_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHead_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/VrmHMDTrackingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rootScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightHand_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_rightHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftHand_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_leftHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightHandReference_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_rightHandReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftHandReference_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_leftHandReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rightPinch_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_rightPinch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_leftPinch_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_leftPinch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeadPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeadRot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_dummyForLog;
	static void NewProp_bEnableLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLeft;
	static void NewProp_bEnableRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRight;
	static void NewProp_bEnableHead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmHMDTrackingComponent_IsEnable, "IsEnable" }, // 926896441
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmHMDTrackingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rootScale = { "rootScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, rootScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rootScale_MetaData), NewProp_rootScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightHand_Inner = { "rightHand", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, rightHand), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightHand_MetaData), NewProp_rightHand_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftHand_Inner = { "leftHand", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, leftHand), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftHand_MetaData), NewProp_leftHand_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightHandReference_Inner = { "rightHandReference", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightHandReference = { "rightHandReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, rightHandReference), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightHandReference_MetaData), NewProp_rightHandReference_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftHandReference_Inner = { "leftHandReference", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftHandReference = { "leftHandReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, leftHandReference), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftHandReference_MetaData), NewProp_leftHandReference_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightPinch_Inner = { "rightPinch", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightPinch = { "rightPinch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, rightPinch), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightPinch_MetaData), NewProp_rightPinch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftPinch_Inner = { "leftPinch", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftPinch = { "leftPinch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, leftPinch), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftPinch_MetaData), NewProp_leftPinch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_HeadPos = { "HeadPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, HeadPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadPos_MetaData), NewProp_HeadPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_HeadRot = { "HeadRot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, HeadRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadRot_MetaData), NewProp_HeadRot_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_dummyForLog = { "dummyForLog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmHMDTrackingComponent, dummyForLog), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dummyForLog_MetaData), NewProp_dummyForLog_MetaData) };
void Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableLeft_SetBit(void* Obj)
{
	((UVrmHMDTrackingComponent*)Obj)->bEnableLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableLeft = { "bEnableLeft", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmHMDTrackingComponent), &Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLeft_MetaData), NewProp_bEnableLeft_MetaData) };
void Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableRight_SetBit(void* Obj)
{
	((UVrmHMDTrackingComponent*)Obj)->bEnableRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableRight = { "bEnableRight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmHMDTrackingComponent), &Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRight_MetaData), NewProp_bEnableRight_MetaData) };
void Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableHead_SetBit(void* Obj)
{
	((UVrmHMDTrackingComponent*)Obj)->bEnableHead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableHead = { "bEnableHead", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmHMDTrackingComponent), &Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableHead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHead_MetaData), NewProp_bEnableHead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rootScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightHand_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftHand_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightHandReference_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightHandReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftHandReference_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftHandReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightPinch_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_rightPinch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftPinch_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_leftPinch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_HeadPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_HeadRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_dummyForLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::NewProp_bEnableHead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::ClassParams = {
	&UVrmHMDTrackingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmHMDTrackingComponent()
{
	if (!Z_Registration_Info_UClass_UVrmHMDTrackingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmHMDTrackingComponent.OuterSingleton, Z_Construct_UClass_UVrmHMDTrackingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmHMDTrackingComponent.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmHMDTrackingComponent>()
{
	return UVrmHMDTrackingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmHMDTrackingComponent);
UVrmHMDTrackingComponent::~UVrmHMDTrackingComponent() {}
// End Class UVrmHMDTrackingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Private_VrmHMDTrackingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmHMDTrackingComponent, UVrmHMDTrackingComponent::StaticClass, TEXT("UVrmHMDTrackingComponent"), &Z_Registration_Info_UClass_UVrmHMDTrackingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmHMDTrackingComponent), 1322446624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Private_VrmHMDTrackingComponent_h_10439875(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Private_VrmHMDTrackingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Private_VrmHMDTrackingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsCustomExternalForce.h"
#include "KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsCustomExternalForce() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_NoRegister();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin Class UKawaiiPhysics_CustomExternalForce Function Apply
struct KawaiiPhysics_CustomExternalForce_eventApply_Parms
{
	FAnimNode_KawaiiPhysics Node;
	int32 ModifyBoneIndex;
	const USkeletalMeshComponent* SkelComp;
	FTransform BoneTransform;
};
static FName NAME_UKawaiiPhysics_CustomExternalForce_Apply = FName(TEXT("Apply"));
void UKawaiiPhysics_CustomExternalForce::Apply(FAnimNode_KawaiiPhysics& Node, int32 ModifyBoneIndex, const USkeletalMeshComponent* SkelComp, FTransform const& BoneTransform)
{
	KawaiiPhysics_CustomExternalForce_eventApply_Parms Parms;
	Parms.Node=Node;
	Parms.ModifyBoneIndex=ModifyBoneIndex;
	Parms.SkelComp=SkelComp;
	Parms.BoneTransform=BoneTransform;
	ProcessEvent(FindFunctionChecked(NAME_UKawaiiPhysics_CustomExternalForce_Apply),&Parms);
	Node=Parms.Node;
}
struct Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsCustomExternalForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModifyBoneIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KawaiiPhysics_CustomExternalForce_eventApply_Parms, Node), Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics, METADATA_PARAMS(0, nullptr) }; // 2085289797
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::NewProp_ModifyBoneIndex = { "ModifyBoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KawaiiPhysics_CustomExternalForce_eventApply_Parms, ModifyBoneIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::NewProp_SkelComp = { "SkelComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KawaiiPhysics_CustomExternalForce_eventApply_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelComp_MetaData), NewProp_SkelComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::NewProp_BoneTransform = { "BoneTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KawaiiPhysics_CustomExternalForce_eventApply_Parms, BoneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneTransform_MetaData), NewProp_BoneTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::NewProp_ModifyBoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::NewProp_SkelComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::NewProp_BoneTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce, nullptr, "Apply", nullptr, nullptr, Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::PropPointers), sizeof(KawaiiPhysics_CustomExternalForce_eventApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::Function_MetaDataParams) };
static_assert(sizeof(KawaiiPhysics_CustomExternalForce_eventApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysics_CustomExternalForce::execApply)
{
	P_GET_STRUCT_REF(FAnimNode_KawaiiPhysics,Z_Param_Out_Node);
	P_GET_PROPERTY(FIntProperty,Z_Param_ModifyBoneIndex);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_BoneTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Apply_Implementation(Z_Param_Out_Node,Z_Param_ModifyBoneIndex,Z_Param_SkelComp,Z_Param_Out_BoneTransform);
	P_NATIVE_END;
}
// End Class UKawaiiPhysics_CustomExternalForce Function Apply

// Begin Class UKawaiiPhysics_CustomExternalForce Function IsDebugEnabled
struct Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics
{
	struct KawaiiPhysics_CustomExternalForce_eventIsDebugEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KawaiiPhysics|CustomExternalForce" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsCustomExternalForce.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysics_CustomExternalForce_eventIsDebugEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KawaiiPhysics_CustomExternalForce_eventIsDebugEnabled_Parms), &Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce, nullptr, "IsDebugEnabled", nullptr, nullptr, Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::KawaiiPhysics_CustomExternalForce_eventIsDebugEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::KawaiiPhysics_CustomExternalForce_eventIsDebugEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysics_CustomExternalForce::execIsDebugEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDebugEnabled();
	P_NATIVE_END;
}
// End Class UKawaiiPhysics_CustomExternalForce Function IsDebugEnabled

// Begin Class UKawaiiPhysics_CustomExternalForce Function PreApply
struct KawaiiPhysics_CustomExternalForce_eventPreApply_Parms
{
	FAnimNode_KawaiiPhysics Node;
	const USkeletalMeshComponent* SkelComp;
};
static FName NAME_UKawaiiPhysics_CustomExternalForce_PreApply = FName(TEXT("PreApply"));
void UKawaiiPhysics_CustomExternalForce::PreApply(FAnimNode_KawaiiPhysics& Node, const USkeletalMeshComponent* SkelComp)
{
	KawaiiPhysics_CustomExternalForce_eventPreApply_Parms Parms;
	Parms.Node=Node;
	Parms.SkelComp=SkelComp;
	ProcessEvent(FindFunctionChecked(NAME_UKawaiiPhysics_CustomExternalForce_PreApply),&Parms);
	Node=Parms.Node;
}
struct Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsCustomExternalForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KawaiiPhysics_CustomExternalForce_eventPreApply_Parms, Node), Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics, METADATA_PARAMS(0, nullptr) }; // 2085289797
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::NewProp_SkelComp = { "SkelComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KawaiiPhysics_CustomExternalForce_eventPreApply_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelComp_MetaData), NewProp_SkelComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::NewProp_SkelComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce, nullptr, "PreApply", nullptr, nullptr, Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::PropPointers), sizeof(KawaiiPhysics_CustomExternalForce_eventPreApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::Function_MetaDataParams) };
static_assert(sizeof(KawaiiPhysics_CustomExternalForce_eventPreApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysics_CustomExternalForce::execPreApply)
{
	P_GET_STRUCT_REF(FAnimNode_KawaiiPhysics,Z_Param_Out_Node);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreApply_Implementation(Z_Param_Out_Node,Z_Param_SkelComp);
	P_NATIVE_END;
}
// End Class UKawaiiPhysics_CustomExternalForce Function PreApply

// Begin Class UKawaiiPhysics_CustomExternalForce
void UKawaiiPhysics_CustomExternalForce::StaticRegisterNativesUKawaiiPhysics_CustomExternalForce()
{
	UClass* Class = UKawaiiPhysics_CustomExternalForce::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Apply", &UKawaiiPhysics_CustomExternalForce::execApply },
		{ "IsDebugEnabled", &UKawaiiPhysics_CustomExternalForce::execIsDebugEnabled },
		{ "PreApply", &UKawaiiPhysics_CustomExternalForce::execPreApply },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKawaiiPhysics_CustomExternalForce);
UClass* Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_NoRegister()
{
	return UKawaiiPhysics_CustomExternalForce::StaticClass();
}
struct Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KawaiiPhysicsCustomExternalForce.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsCustomExternalForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "KawaiiPhysics|CustomExternalForce" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsCustomExternalForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "KawaiiPhysics|CustomExternalForce" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsCustomExternalForce.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_Apply, "Apply" }, // 1114103303
		{ &Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_IsDebugEnabled, "IsDebugEnabled" }, // 272691969
		{ &Z_Construct_UFunction_UKawaiiPhysics_CustomExternalForce_PreApply, "PreApply" }, // 474029725
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysics_CustomExternalForce>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((UKawaiiPhysics_CustomExternalForce*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKawaiiPhysics_CustomExternalForce), &Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
void Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((UKawaiiPhysics_CustomExternalForce*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKawaiiPhysics_CustomExternalForce), &Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::NewProp_bDrawDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::ClassParams = {
	&UKawaiiPhysics_CustomExternalForce::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::PropPointers),
	0,
	0x001030A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::Class_MetaDataParams), Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce()
{
	if (!Z_Registration_Info_UClass_UKawaiiPhysics_CustomExternalForce.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKawaiiPhysics_CustomExternalForce.OuterSingleton, Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKawaiiPhysics_CustomExternalForce.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UClass* StaticClass<UKawaiiPhysics_CustomExternalForce>()
{
	return UKawaiiPhysics_CustomExternalForce::StaticClass();
}
UKawaiiPhysics_CustomExternalForce::UKawaiiPhysics_CustomExternalForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKawaiiPhysics_CustomExternalForce);
UKawaiiPhysics_CustomExternalForce::~UKawaiiPhysics_CustomExternalForce() {}
// End Class UKawaiiPhysics_CustomExternalForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsCustomExternalForce_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce, UKawaiiPhysics_CustomExternalForce::StaticClass, TEXT("UKawaiiPhysics_CustomExternalForce"), &Z_Registration_Info_UClass_UKawaiiPhysics_CustomExternalForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKawaiiPhysics_CustomExternalForce), 2432272446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsCustomExternalForce_h_98483567(TEXT("/Script/KawaiiPhysics"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsCustomExternalForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsCustomExternalForce_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

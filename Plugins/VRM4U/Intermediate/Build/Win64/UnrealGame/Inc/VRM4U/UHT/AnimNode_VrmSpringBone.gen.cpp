// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmSpringBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmSpringBone() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone();
// End Cross Module References

// Begin ScriptStruct FAnimNode_VrmSpringBone
static_assert(std::is_polymorphic<FAnimNode_VrmSpringBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmSpringBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone;
class UScriptStruct* FAnimNode_VrmSpringBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmSpringBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmSpringBone>()
{
	return FAnimNode_VrmSpringBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableAutoSearchMetaData_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "NativeConst", "" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravityScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravityAdd_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stiffnessScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stiffnessAdd_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomWindRange_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_windScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_loopc_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_collisionCheckLoopCount_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePhysicsResetOnTeleport_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePhysicsCollision_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreVRMCollision_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreWindDirectionalSource_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoWindBoneNameList_MetaData[] = {
		{ "Category", "Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableAutoSearchMetaData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAutoSearchMetaData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_gravityAdd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffnessScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffnessAdd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_randomWindRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_windScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_loopc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_collisionCheckLoopCount;
	static void NewProp_bIgnorePhysicsResetOnTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePhysicsResetOnTeleport;
	static void NewProp_bIgnorePhysicsCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePhysicsCollision;
	static void NewProp_bIgnoreVRMCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreVRMCollision;
	static void NewProp_bIgnoreWindDirectionalSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreWindDirectionalSource;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NoWindBoneNameList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NoWindBoneNameList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmSpringBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_EnableAutoSearchMetaData_SetBit(void* Obj)
{
	((FAnimNode_VrmSpringBone*)Obj)->EnableAutoSearchMetaData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_EnableAutoSearchMetaData = { "EnableAutoSearchMetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_EnableAutoSearchMetaData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableAutoSearchMetaData_MetaData), NewProp_EnableAutoSearchMetaData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmMetaObject_MetaData), NewProp_VrmMetaObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityScale = { "gravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, gravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravityScale_MetaData), NewProp_gravityScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityAdd = { "gravityAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, gravityAdd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravityAdd_MetaData), NewProp_gravityAdd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessScale = { "stiffnessScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, stiffnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stiffnessScale_MetaData), NewProp_stiffnessScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessAdd = { "stiffnessAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, stiffnessAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stiffnessAdd_MetaData), NewProp_stiffnessAdd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_randomWindRange = { "randomWindRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, randomWindRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomWindRange_MetaData), NewProp_randomWindRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_windScale = { "windScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, windScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_windScale_MetaData), NewProp_windScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_loopc = { "loopc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, loopc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_loopc_MetaData), NewProp_loopc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_collisionCheckLoopCount = { "collisionCheckLoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, collisionCheckLoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_collisionCheckLoopCount_MetaData), NewProp_collisionCheckLoopCount_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport_SetBit(void* Obj)
{
	((FAnimNode_VrmSpringBone*)Obj)->bIgnorePhysicsResetOnTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport = { "bIgnorePhysicsResetOnTeleport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnorePhysicsResetOnTeleport_MetaData), NewProp_bIgnorePhysicsResetOnTeleport_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision_SetBit(void* Obj)
{
	((FAnimNode_VrmSpringBone*)Obj)->bIgnorePhysicsCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision = { "bIgnorePhysicsCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnorePhysicsCollision_MetaData), NewProp_bIgnorePhysicsCollision_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision_SetBit(void* Obj)
{
	((FAnimNode_VrmSpringBone*)Obj)->bIgnoreVRMCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision = { "bIgnoreVRMCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreVRMCollision_MetaData), NewProp_bIgnoreVRMCollision_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource_SetBit(void* Obj)
{
	((FAnimNode_VrmSpringBone*)Obj)->bIgnoreWindDirectionalSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource = { "bIgnoreWindDirectionalSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreWindDirectionalSource_MetaData), NewProp_bIgnoreWindDirectionalSource_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList_Inner = { "NoWindBoneNameList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList = { "NoWindBoneNameList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmSpringBone, NoWindBoneNameList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoWindBoneNameList_MetaData), NewProp_NoWindBoneNameList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_EnableAutoSearchMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_VrmMetaObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_randomWindRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_windScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_loopc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_collisionCheckLoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_VrmSpringBone",
	Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::PropPointers),
	sizeof(FAnimNode_VrmSpringBone),
	alignof(FAnimNode_VrmSpringBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.InnerSingleton;
}
// End ScriptStruct FAnimNode_VrmSpringBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_VrmSpringBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewStructOps, TEXT("AnimNode_VrmSpringBone"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmSpringBone), 1074986415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_1601402960(TEXT("/Script/VRM4U"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

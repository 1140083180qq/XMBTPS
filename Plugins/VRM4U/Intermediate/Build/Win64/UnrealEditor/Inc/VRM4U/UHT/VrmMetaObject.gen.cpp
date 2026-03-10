// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmMetaObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmMetaObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject();
VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMConstraintType();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringBoneMeta();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringCollider();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringColliderGroups();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringJointMeta();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringMeta();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationLookAt();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationMeta();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShape();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeGroup();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderGroupMeta();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderMeta();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraint();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintAim();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRoll();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRotation();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringColliderData();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringMeta();
// End Cross Module References

// Begin ScriptStruct FVRMSpringMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMSpringMeta;
class UScriptStruct* FVRMSpringMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMSpringMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMSpringMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMSpringMeta>()
{
	return FVRMSpringMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMSpringMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stiffness_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravityPower_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravityDir_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dragForce_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitRadius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bones_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)\n//int boneNum = 0;\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)\nint boneNum = 0;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boneNames_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderIndexArray_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderGroupArrayVRM10_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_gravityDir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dragForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_hitRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_bones;
	static const UECodeGen_Private::FStrPropertyParams NewProp_boneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_boneNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColliderIndexArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ColliderIndexArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColliderGroupArrayVRM10_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ColliderGroupArrayVRM10;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMSpringMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness = { "stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stiffness_MetaData), NewProp_stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower = { "gravityPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, gravityPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravityPower_MetaData), NewProp_gravityPower_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir = { "gravityDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, gravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravityDir_MetaData), NewProp_gravityDir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce = { "dragForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, dragForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dragForce_MetaData), NewProp_dragForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius = { "hitRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, hitRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitRadius_MetaData), NewProp_hitRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_Inner = { "bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones = { "bones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bones_MetaData), NewProp_bones_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_Inner = { "boneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames = { "boneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, boneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boneNames_MetaData), NewProp_boneNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_Inner = { "ColliderIndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray = { "ColliderIndexArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, ColliderIndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderIndexArray_MetaData), NewProp_ColliderIndexArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_Inner = { "ColliderGroupArrayVRM10", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10 = { "ColliderGroupArrayVRM10", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, ColliderGroupArrayVRM10), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderGroupArrayVRM10_MetaData), NewProp_ColliderGroupArrayVRM10_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMSpringMeta",
	Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers),
	sizeof(FVRMSpringMeta),
	alignof(FVRMSpringMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringMeta()
{
	if (!Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton;
}
// End ScriptStruct FVRMSpringMeta

// Begin ScriptStruct FVRMSpringColliderData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMSpringColliderData;
class UScriptStruct* FVRMSpringColliderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMSpringColliderData, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMSpringColliderData"));
	}
	return Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMSpringColliderData>()
{
	return FVRMSpringColliderData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMSpringColliderData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringColliderData, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_offset_MetaData), NewProp_offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringColliderData, radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_radius_MetaData), NewProp_radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMSpringColliderData",
	Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers),
	sizeof(FVRMSpringColliderData),
	alignof(FVRMSpringColliderData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringColliderData()
{
	if (!Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton, Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton;
}
// End ScriptStruct FVRMSpringColliderData

// Begin ScriptStruct FVRMColliderGroupMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta;
class UScriptStruct* FVRMColliderGroupMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMColliderGroupMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMColliderGroupMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMColliderGroupMeta>()
{
	return FVRMColliderGroupMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_groupName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_colliderGroup_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_groupName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_colliderGroup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_colliderGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMColliderGroupMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName = { "groupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderGroupMeta, groupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_groupName_MetaData), NewProp_groupName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_Inner = { "colliderGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup = { "colliderGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderGroupMeta, colliderGroup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_colliderGroup_MetaData), NewProp_colliderGroup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMColliderGroupMeta",
	Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers),
	sizeof(FVRMColliderGroupMeta),
	alignof(FVRMColliderGroupMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderGroupMeta()
{
	if (!Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton;
}
// End ScriptStruct FVRMColliderGroupMeta

// Begin ScriptStruct FVRMColliderMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMColliderMeta;
class UScriptStruct* FVRMColliderMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMColliderMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMColliderMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMColliderMeta>()
{
	return FVRMColliderMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMColliderMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_bone;
	static const UECodeGen_Private::FStrPropertyParams NewProp_boneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_collider_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_collider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMColliderMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone = { "bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderMeta, bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bone_MetaData), NewProp_bone_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderMeta, boneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boneName_MetaData), NewProp_boneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_Inner = { "collider", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMSpringColliderData, METADATA_PARAMS(0, nullptr) }; // 692386406
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderMeta, collider), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_collider_MetaData), NewProp_collider_MetaData) }; // 692386406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMColliderMeta",
	Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers),
	sizeof(FVRMColliderMeta),
	alignof(FVRMColliderMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderMeta()
{
	if (!Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton;
}
// End ScriptStruct FVRMColliderMeta

// Begin ScriptStruct FVRM1SpringJointMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta;
class UScriptStruct* FVRM1SpringJointMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringJointMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringJointMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringJointMeta>()
{
	return FVRM1SpringJointMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boneNo_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitRadius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stiffness_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravityPower_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravityDir_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dragForce_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_boneNo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_boneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_hitRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_gravityDir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dragForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringJointMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneNo = { "boneNo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, boneNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boneNo_MetaData), NewProp_boneNo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, boneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boneName_MetaData), NewProp_boneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_hitRadius = { "hitRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, hitRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitRadius_MetaData), NewProp_hitRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_stiffness = { "stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stiffness_MetaData), NewProp_stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityPower = { "gravityPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, gravityPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravityPower_MetaData), NewProp_gravityPower_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityDir = { "gravityDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, gravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravityDir_MetaData), NewProp_gravityDir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_dragForce = { "dragForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, dragForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dragForce_MetaData), NewProp_dragForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneNo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_hitRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_dragForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRM1SpringJointMeta",
	Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::PropPointers),
	sizeof(FVRM1SpringJointMeta),
	alignof(FVRM1SpringJointMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringJointMeta()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.InnerSingleton;
}
// End ScriptStruct FVRM1SpringJointMeta

// Begin ScriptStruct FVRM1SpringMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringMeta;
class UScriptStruct* FVRM1SpringMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringMeta>()
{
	return FVRM1SpringMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_joints_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_colliderGroups_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_center_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_joints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_joints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_colliderGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_colliderGroups;
	static const UECodeGen_Private::FIntPropertyParams NewProp_center;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints_Inner = { "joints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRM1SpringJointMeta, METADATA_PARAMS(0, nullptr) }; // 1278407526
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints = { "joints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringMeta, joints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_joints_MetaData), NewProp_joints_MetaData) }; // 1278407526
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups_Inner = { "colliderGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups = { "colliderGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringMeta, colliderGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_colliderGroups_MetaData), NewProp_colliderGroups_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringMeta, center), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_center_MetaData), NewProp_center_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_center,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRM1SpringMeta",
	Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::PropPointers),
	sizeof(FVRM1SpringMeta),
	alignof(FVRM1SpringMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringMeta()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringMeta.InnerSingleton;
}
// End ScriptStruct FVRM1SpringMeta

// Begin ScriptStruct FVRM1SpringCollider
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringCollider;
class UScriptStruct* FVRM1SpringCollider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringCollider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringCollider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringCollider, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringCollider"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringCollider.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringCollider>()
{
	return FVRM1SpringCollider::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boneNo_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shapeType_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tail_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// for capsule. offset-tail cylinder\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for capsule. offset-tail cylinder" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_boneNo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_boneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_shapeType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_tail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringCollider>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneNo = { "boneNo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, boneNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boneNo_MetaData), NewProp_boneNo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, boneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boneName_MetaData), NewProp_boneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_shapeType = { "shapeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, shapeType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shapeType_MetaData), NewProp_shapeType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_offset_MetaData), NewProp_offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_radius_MetaData), NewProp_radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_tail = { "tail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, tail), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tail_MetaData), NewProp_tail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneNo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_shapeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_tail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRM1SpringCollider",
	Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::PropPointers),
	sizeof(FVRM1SpringCollider),
	alignof(FVRM1SpringCollider),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringCollider()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringCollider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringCollider.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringCollider.InnerSingleton;
}
// End ScriptStruct FVRM1SpringCollider

// Begin ScriptStruct FVRM1SpringColliderGroups
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups;
class UScriptStruct* FVRM1SpringColliderGroups::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringColliderGroups"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringColliderGroups>()
{
	return FVRM1SpringColliderGroups::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_colliders_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_colliders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_colliders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringColliderGroups>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringColliderGroups, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders_Inner = { "colliders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders = { "colliders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringColliderGroups, colliders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_colliders_MetaData), NewProp_colliders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRM1SpringColliderGroups",
	Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::PropPointers),
	sizeof(FVRM1SpringColliderGroups),
	alignof(FVRM1SpringColliderGroups),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringColliderGroups()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.InnerSingleton;
}
// End ScriptStruct FVRM1SpringColliderGroups

// Begin ScriptStruct FVRM1SpringBoneMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta;
class UScriptStruct* FVRM1SpringBoneMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringBoneMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringBoneMeta>()
{
	return FVRM1SpringBoneMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Springs_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colliders_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderGroups_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Springs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Springs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colliders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colliders;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColliderGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ColliderGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringBoneMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs_Inner = { "Springs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRM1SpringMeta, METADATA_PARAMS(0, nullptr) }; // 3824950858
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs = { "Springs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringBoneMeta, Springs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Springs_MetaData), NewProp_Springs_MetaData) }; // 3824950858
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders_Inner = { "Colliders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRM1SpringCollider, METADATA_PARAMS(0, nullptr) }; // 521367254
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders = { "Colliders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringBoneMeta, Colliders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colliders_MetaData), NewProp_Colliders_MetaData) }; // 521367254
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups_Inner = { "ColliderGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRM1SpringColliderGroups, METADATA_PARAMS(0, nullptr) }; // 807508586
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups = { "ColliderGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringBoneMeta, ColliderGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderGroups_MetaData), NewProp_ColliderGroups_MetaData) }; // 807508586
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRM1SpringBoneMeta",
	Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::PropPointers),
	sizeof(FVRM1SpringBoneMeta),
	alignof(FVRM1SpringBoneMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringBoneMeta()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.InnerSingleton;
}
// End ScriptStruct FVRM1SpringBoneMeta

// Begin ScriptStruct FVrmBlendShape
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShape;
class UScriptStruct* FVrmBlendShape::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShape, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShape"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShape>()
{
	return FVrmBlendShape::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVrmBlendShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlendShape\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlendShape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_morphTargetName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nodeName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_meshName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_meshID_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shapeIndex_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_morphTargetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_nodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_meshName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_meshID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_shapeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShape>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName = { "morphTargetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, morphTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_morphTargetName_MetaData), NewProp_morphTargetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName = { "nodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, nodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nodeName_MetaData), NewProp_nodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName = { "meshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, meshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_meshName_MetaData), NewProp_meshName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID = { "meshID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, meshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_meshID_MetaData), NewProp_meshID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex = { "shapeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, shapeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shapeIndex_MetaData), NewProp_shapeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weight_MetaData), NewProp_weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VrmBlendShape",
	Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers),
	sizeof(FVrmBlendShape),
	alignof(FVrmBlendShape),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShape()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShape_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton;
}
// End ScriptStruct FVrmBlendShape

// Begin ScriptStruct FVrmBlendShapeMaterialList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList;
class UScriptStruct* FVrmBlendShapeMaterialList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShapeMaterialList"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShapeMaterialList>()
{
	return FVrmBlendShapeMaterialList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlendShape Material\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlendShape Material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_propertyName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_materialName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_propertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShapeMaterialList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName = { "materialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, materialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialName_MetaData), NewProp_materialName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, propertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_propertyName_MetaData), NewProp_propertyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_color_MetaData), NewProp_color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VrmBlendShapeMaterialList",
	Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers),
	sizeof(FVrmBlendShapeMaterialList),
	alignof(FVrmBlendShapeMaterialList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton;
}
// End ScriptStruct FVrmBlendShapeMaterialList

// Begin ScriptStruct FVrmBlendShapeGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup;
class UScriptStruct* FVrmBlendShapeGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShapeGroup, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShapeGroup"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShapeGroup>()
{
	return FVrmBlendShapeGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendShape_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isBinary_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// vrm10\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "vrm10" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_overrideBlink_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// none, block, blend\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "none, block, blend" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_overrideLookAt_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_overrideMouth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShape_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialList;
	static void NewProp_isBinary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isBinary;
	static const UECodeGen_Private::FStrPropertyParams NewProp_overrideBlink;
	static const UECodeGen_Private::FStrPropertyParams NewProp_overrideLookAt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_overrideMouth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShapeGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_Inner = { "BlendShape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShape, METADATA_PARAMS(0, nullptr) }; // 961182127
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, BlendShape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendShape_MetaData), NewProp_BlendShape_MetaData) }; // 961182127
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_Inner = { "MaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList, METADATA_PARAMS(0, nullptr) }; // 11426976
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList = { "MaterialList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, MaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialList_MetaData), NewProp_MaterialList_MetaData) }; // 11426976
void Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary_SetBit(void* Obj)
{
	((FVrmBlendShapeGroup*)Obj)->isBinary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary = { "isBinary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVrmBlendShapeGroup), &Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isBinary_MetaData), NewProp_isBinary_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideBlink = { "overrideBlink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, overrideBlink), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_overrideBlink_MetaData), NewProp_overrideBlink_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideLookAt = { "overrideLookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, overrideLookAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_overrideLookAt_MetaData), NewProp_overrideLookAt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideMouth = { "overrideMouth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, overrideMouth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_overrideMouth_MetaData), NewProp_overrideMouth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideBlink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideLookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideMouth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VrmBlendShapeGroup",
	Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers),
	sizeof(FVrmBlendShapeGroup),
	alignof(FVrmBlendShapeGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeGroup()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton;
}
// End ScriptStruct FVrmBlendShapeGroup

// Begin Enum EVRMConstraintType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMConstraintType;
static UEnum* EVRMConstraintType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMConstraintType, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMConstraintType"));
	}
	return Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton;
}
template<> VRM4U_API UEnum* StaticEnum<EVRMConstraintType>()
{
	return EVRMConstraintType_StaticEnum();
}
struct Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aim.Name", "EVRMConstraintType::Aim" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//struct VRM4U_API FBVrmlendShapeGroup {\n//\x09TArray<FVrmBlendShape> \n//};\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "None.Name", "EVRMConstraintType::None" },
		{ "Roll.Name", "EVRMConstraintType::Roll" },
		{ "Rotation.Name", "EVRMConstraintType::Rotation" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "struct VRM4U_API FBVrmlendShapeGroup {\n       TArray<FVrmBlendShape>\n};" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRMConstraintType::None", (int64)EVRMConstraintType::None },
		{ "EVRMConstraintType::Roll", (int64)EVRMConstraintType::Roll },
		{ "EVRMConstraintType::Aim", (int64)EVRMConstraintType::Aim },
		{ "EVRMConstraintType::Rotation", (int64)EVRMConstraintType::Rotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	"EVRMConstraintType",
	"EVRMConstraintType",
	Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRM4U_EVRMConstraintType()
{
	if (!Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton;
}
// End Enum EVRMConstraintType

// Begin ScriptStruct FVRMConstraintRoll
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintRoll;
class UScriptStruct* FVRMConstraintRoll::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintRoll, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintRoll"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintRoll>()
{
	return FVRMConstraintRoll::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rollAxis_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_rollAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintRoll>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRoll, sourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sourceName_MetaData), NewProp_sourceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRoll, source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_source_MetaData), NewProp_source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis = { "rollAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRoll, rollAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rollAxis_MetaData), NewProp_rollAxis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRoll, weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weight_MetaData), NewProp_weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMConstraintRoll",
	Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers),
	sizeof(FVRMConstraintRoll),
	alignof(FVRMConstraintRoll),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRoll()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton;
}
// End ScriptStruct FVRMConstraintRoll

// Begin ScriptStruct FVRMConstraintAim
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintAim;
class UScriptStruct* FVRMConstraintAim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintAim, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintAim"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintAim>()
{
	return FVRMConstraintAim::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMConstraintAim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aimAxis_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_aimAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintAim>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintAim, sourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sourceName_MetaData), NewProp_sourceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintAim, source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_source_MetaData), NewProp_source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis = { "aimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintAim, aimAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aimAxis_MetaData), NewProp_aimAxis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintAim, weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weight_MetaData), NewProp_weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMConstraintAim",
	Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers),
	sizeof(FVRMConstraintAim),
	alignof(FVRMConstraintAim),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintAim()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton;
}
// End ScriptStruct FVRMConstraintAim

// Begin ScriptStruct FVRMConstraintRotation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintRotation;
class UScriptStruct* FVRMConstraintRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintRotation, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintRotation"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintRotation>()
{
	return FVRMConstraintRotation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_source;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintRotation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRotation, sourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sourceName_MetaData), NewProp_sourceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRotation, source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_source_MetaData), NewProp_source_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRotation, weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weight_MetaData), NewProp_weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMConstraintRotation",
	Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers),
	sizeof(FVRMConstraintRotation),
	alignof(FVRMConstraintRotation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRotation()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton;
}
// End ScriptStruct FVRMConstraintRotation

// Begin ScriptStruct FVRMAnimationLookAt
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMAnimationLookAt;
class UScriptStruct* FVRMAnimationLookAt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMAnimationLookAt, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMAnimationLookAt"));
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMAnimationLookAt>()
{
	return FVRMAnimationLookAt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAtNode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAtNodeName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_lookAtNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_lookAtNodeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMAnimationLookAt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNode = { "lookAtNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationLookAt, lookAtNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAtNode_MetaData), NewProp_lookAtNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNodeName = { "lookAtNodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationLookAt, lookAtNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAtNodeName_MetaData), NewProp_lookAtNodeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNodeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMAnimationLookAt",
	Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::PropPointers),
	sizeof(FVRMAnimationLookAt),
	alignof(FVRMAnimationLookAt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationLookAt()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.InnerSingleton, Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.InnerSingleton;
}
// End ScriptStruct FVRMAnimationLookAt

// Begin ScriptStruct FVRMAnimationExpressionPreset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset;
class UScriptStruct* FVRMAnimationExpressionPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMAnimationExpressionPreset"));
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMAnimationExpressionPreset>()
{
	return FVRMAnimationExpressionPreset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_expressionName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_expressionNode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_expressionNodeName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_expressionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_expressionNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_expressionNodeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMAnimationExpressionPreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionName = { "expressionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationExpressionPreset, expressionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_expressionName_MetaData), NewProp_expressionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNode = { "expressionNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationExpressionPreset, expressionNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_expressionNode_MetaData), NewProp_expressionNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNodeName = { "expressionNodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationExpressionPreset, expressionNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_expressionNodeName_MetaData), NewProp_expressionNodeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNodeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMAnimationExpressionPreset",
	Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::PropPointers),
	sizeof(FVRMAnimationExpressionPreset),
	alignof(FVRMAnimationExpressionPreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.InnerSingleton, Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.InnerSingleton;
}
// End ScriptStruct FVRMAnimationExpressionPreset

// Begin ScriptStruct FVRMAnimationMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMAnimationMeta;
class UScriptStruct* FVRMAnimationMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMAnimationMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMAnimationMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMAnimationMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMAnimationMeta>()
{
	return FVRMAnimationMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAt_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_expressionPreset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lookAt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_expressionPreset_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_expressionPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMAnimationMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_lookAt = { "lookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationMeta, lookAt), Z_Construct_UScriptStruct_FVRMAnimationLookAt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAt_MetaData), NewProp_lookAt_MetaData) }; // 1161920688
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset_Inner = { "expressionPreset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset, METADATA_PARAMS(0, nullptr) }; // 2486855697
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset = { "expressionPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationMeta, expressionPreset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_expressionPreset_MetaData), NewProp_expressionPreset_MetaData) }; // 2486855697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_lookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMAnimationMeta",
	Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::PropPointers),
	sizeof(FVRMAnimationMeta),
	alignof(FVRMAnimationMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationMeta()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMAnimationMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationMeta.InnerSingleton;
}
// End ScriptStruct FVRMAnimationMeta

// Begin ScriptStruct FVRMConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraint;
class UScriptStruct* FVRMConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraint, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraint>()
{
	return FVRMConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_constraintRoll_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_constraintAim_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_constraintRotation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_constraintRoll;
	static const UECodeGen_Private::FStructPropertyParams NewProp_constraintAim;
	static const UECodeGen_Private::FStructPropertyParams NewProp_constraintRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraint, type), Z_Construct_UEnum_VRM4U_EVRMConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_type_MetaData), NewProp_type_MetaData) }; // 578841261
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll = { "constraintRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraint, constraintRoll), Z_Construct_UScriptStruct_FVRMConstraintRoll, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_constraintRoll_MetaData), NewProp_constraintRoll_MetaData) }; // 2704725310
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim = { "constraintAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraint, constraintAim), Z_Construct_UScriptStruct_FVRMConstraintAim, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_constraintAim_MetaData), NewProp_constraintAim_MetaData) }; // 3985576547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation = { "constraintRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraint, constraintRotation), Z_Construct_UScriptStruct_FVRMConstraintRotation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_constraintRotation_MetaData), NewProp_constraintRotation_MetaData) }; // 2247248747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMConstraint",
	Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers),
	sizeof(FVRMConstraint),
	alignof(FVRMConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton;
}
// End ScriptStruct FVRMConstraint

// Begin Class UVrmMetaObject Function GetVRMVersion
struct Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics
{
	struct VrmMetaObject_eventGetVRMVersion_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMetaObject_eventGetVRMVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMetaObject, nullptr, "GetVRMVersion", nullptr, nullptr, Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::VrmMetaObject_eventGetVRMVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::VrmMetaObject_eventGetVRMVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmMetaObject::execGetVRMVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetVRMVersion();
	P_NATIVE_END;
}
// End Class UVrmMetaObject Function GetVRMVersion

// Begin Class UVrmMetaObject
void UVrmMetaObject::StaticRegisterNativesUVrmMetaObject()
{
	UClass* Class = UVrmMetaObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetVRMVersion", &UVrmMetaObject::execGetVRMVersion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmMetaObject);
UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister()
{
	return UVrmMetaObject::StaticClass();
}
struct Z_Construct_UClass_UVrmMetaObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmMetaObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_humanoidBoneTable_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// humanoid name -> model name\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "humanoid name -> model name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeGroup_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRMSpringMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRM1SpringBoneMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRMColliderMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRMColliderGroupMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRMConstraintMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRMAnimationMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmAssetListObject_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_humanoidBoneTable_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_humanoidBoneTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_humanoidBoneTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShapeGroup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShapeGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRMSpringMeta_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMSpringMeta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRM1SpringBoneMeta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRMColliderMeta_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMColliderMeta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRMColliderGroupMeta_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMColliderGroupMeta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRMConstraintMeta_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VRMConstraintMeta_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VRMConstraintMeta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRMAnimationMeta;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmAssetListObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion, "GetVRMVersion" }, // 4158723088
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmMetaObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_ValueProp = { "humanoidBoneTable", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_Key_KeyProp = { "humanoidBoneTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable = { "humanoidBoneTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, humanoidBoneTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_humanoidBoneTable_MetaData), NewProp_humanoidBoneTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_Inner = { "BlendShapeGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShapeGroup, METADATA_PARAMS(0, nullptr) }; // 925226993
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup = { "BlendShapeGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, BlendShapeGroup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendShapeGroup_MetaData), NewProp_BlendShapeGroup_MetaData) }; // 925226993
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_Inner = { "VRMSpringMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMSpringMeta, METADATA_PARAMS(0, nullptr) }; // 657373782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta = { "VRMSpringMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMSpringMeta), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRMSpringMeta_MetaData), NewProp_VRMSpringMeta_MetaData) }; // 657373782
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRM1SpringBoneMeta = { "VRM1SpringBoneMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRM1SpringBoneMeta), Z_Construct_UScriptStruct_FVRM1SpringBoneMeta, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRM1SpringBoneMeta_MetaData), NewProp_VRM1SpringBoneMeta_MetaData) }; // 3448191382
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_Inner = { "VRMColliderMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMColliderMeta, METADATA_PARAMS(0, nullptr) }; // 2886619488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta = { "VRMColliderMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMColliderMeta), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRMColliderMeta_MetaData), NewProp_VRMColliderMeta_MetaData) }; // 2886619488
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_Inner = { "VRMColliderGroupMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMColliderGroupMeta, METADATA_PARAMS(0, nullptr) }; // 3056604489
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta = { "VRMColliderGroupMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMColliderGroupMeta), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRMColliderGroupMeta_MetaData), NewProp_VRMColliderGroupMeta_MetaData) }; // 3056604489
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_ValueProp = { "VRMConstraintMeta", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVRMConstraint, METADATA_PARAMS(0, nullptr) }; // 1459208469
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_Key_KeyProp = { "VRMConstraintMeta_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta = { "VRMConstraintMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMConstraintMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRMConstraintMeta_MetaData), NewProp_VRMConstraintMeta_MetaData) }; // 1459208469
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMAnimationMeta = { "VRMAnimationMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMAnimationMeta), Z_Construct_UScriptStruct_FVRMAnimationMeta, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRMAnimationMeta_MetaData), NewProp_VRMAnimationMeta_MetaData) }; // 1829081359
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject = { "VrmAssetListObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VrmAssetListObject), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmAssetListObject_MetaData), NewProp_VrmAssetListObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRM1SpringBoneMeta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMAnimationMeta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmMetaObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmMetaObject_Statics::ClassParams = {
	&UVrmMetaObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmMetaObject()
{
	if (!Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton, Z_Construct_UClass_UVrmMetaObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmMetaObject>()
{
	return UVrmMetaObject::StaticClass();
}
UVrmMetaObject::UVrmMetaObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmMetaObject);
UVrmMetaObject::~UVrmMetaObject() {}
// End Class UVrmMetaObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRMConstraintType_StaticEnum, TEXT("EVRMConstraintType"), &Z_Registration_Info_UEnum_EVRMConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 578841261U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVRMSpringMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewStructOps, TEXT("VRMSpringMeta"), &Z_Registration_Info_UScriptStruct_VRMSpringMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMSpringMeta), 657373782U) },
		{ FVRMSpringColliderData::StaticStruct, Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewStructOps, TEXT("VRMSpringColliderData"), &Z_Registration_Info_UScriptStruct_VRMSpringColliderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMSpringColliderData), 692386406U) },
		{ FVRMColliderGroupMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewStructOps, TEXT("VRMColliderGroupMeta"), &Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMColliderGroupMeta), 3056604489U) },
		{ FVRMColliderMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewStructOps, TEXT("VRMColliderMeta"), &Z_Registration_Info_UScriptStruct_VRMColliderMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMColliderMeta), 2886619488U) },
		{ FVRM1SpringJointMeta::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewStructOps, TEXT("VRM1SpringJointMeta"), &Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringJointMeta), 1278407526U) },
		{ FVRM1SpringMeta::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewStructOps, TEXT("VRM1SpringMeta"), &Z_Registration_Info_UScriptStruct_VRM1SpringMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringMeta), 3824950858U) },
		{ FVRM1SpringCollider::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewStructOps, TEXT("VRM1SpringCollider"), &Z_Registration_Info_UScriptStruct_VRM1SpringCollider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringCollider), 521367254U) },
		{ FVRM1SpringColliderGroups::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewStructOps, TEXT("VRM1SpringColliderGroups"), &Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringColliderGroups), 807508586U) },
		{ FVRM1SpringBoneMeta::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewStructOps, TEXT("VRM1SpringBoneMeta"), &Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringBoneMeta), 3448191382U) },
		{ FVrmBlendShape::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewStructOps, TEXT("VrmBlendShape"), &Z_Registration_Info_UScriptStruct_VrmBlendShape, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShape), 961182127U) },
		{ FVrmBlendShapeMaterialList::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewStructOps, TEXT("VrmBlendShapeMaterialList"), &Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShapeMaterialList), 11426976U) },
		{ FVrmBlendShapeGroup::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewStructOps, TEXT("VrmBlendShapeGroup"), &Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShapeGroup), 925226993U) },
		{ FVRMConstraintRoll::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewStructOps, TEXT("VRMConstraintRoll"), &Z_Registration_Info_UScriptStruct_VRMConstraintRoll, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintRoll), 2704725310U) },
		{ FVRMConstraintAim::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewStructOps, TEXT("VRMConstraintAim"), &Z_Registration_Info_UScriptStruct_VRMConstraintAim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintAim), 3985576547U) },
		{ FVRMConstraintRotation::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewStructOps, TEXT("VRMConstraintRotation"), &Z_Registration_Info_UScriptStruct_VRMConstraintRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintRotation), 2247248747U) },
		{ FVRMAnimationLookAt::StaticStruct, Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewStructOps, TEXT("VRMAnimationLookAt"), &Z_Registration_Info_UScriptStruct_VRMAnimationLookAt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMAnimationLookAt), 1161920688U) },
		{ FVRMAnimationExpressionPreset::StaticStruct, Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewStructOps, TEXT("VRMAnimationExpressionPreset"), &Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMAnimationExpressionPreset), 2486855697U) },
		{ FVRMAnimationMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewStructOps, TEXT("VRMAnimationMeta"), &Z_Registration_Info_UScriptStruct_VRMAnimationMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMAnimationMeta), 1829081359U) },
		{ FVRMConstraint::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewStructOps, TEXT("VRMConstraint"), &Z_Registration_Info_UScriptStruct_VRMConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraint), 1459208469U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmMetaObject, UVrmMetaObject::StaticClass, TEXT("UVrmMetaObject"), &Z_Registration_Info_UClass_UVrmMetaObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmMetaObject), 1728652356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_1467463458(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

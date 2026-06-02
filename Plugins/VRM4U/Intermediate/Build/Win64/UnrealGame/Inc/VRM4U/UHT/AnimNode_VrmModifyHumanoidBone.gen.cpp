// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyHumanoidBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyHumanoidBone() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMBoneTransform();
// End Cross Module References

// Begin ScriptStruct FVRMBoneTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMBoneTransform;
class UScriptStruct* FVRMBoneTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMBoneTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMBoneTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMBoneTransform, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMBoneTransform"));
	}
	return Z_Registration_Info_UScriptStruct_VRMBoneTransform.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMBoneTransform>()
{
	return FVRMBoneTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMBoneTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTranslation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRMHumanoidBoneName_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_bEnableRotation;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTranslation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_bEnableTranslation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VRMHumanoidBoneName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMHumanoidBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMBoneTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_Inner = { "Transform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMBoneTransform, Transform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_Inner = { "bEnableRotation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation = { "bEnableRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMBoneTransform, bEnableRotation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRotation_MetaData), NewProp_bEnableRotation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_Inner = { "bEnableTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation = { "bEnableTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMBoneTransform, bEnableTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTranslation_MetaData), NewProp_bEnableTranslation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_Inner = { "VRMHumanoidBoneName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName = { "VRMHumanoidBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMBoneTransform, VRMHumanoidBoneName), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRMHumanoidBoneName_MetaData), NewProp_VRMHumanoidBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VRMBoneTransform",
	Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers),
	sizeof(FVRMBoneTransform),
	alignof(FVRMBoneTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMBoneTransform()
{
	if (!Z_Registration_Info_UScriptStruct_VRMBoneTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMBoneTransform.InnerSingleton, Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMBoneTransform.InnerSingleton;
}
// End ScriptStruct FVRMBoneTransform

// Begin ScriptStruct FAnimNode_VrmModifyHumanoidBone
static_assert(std::is_polymorphic<FAnimNode_VrmModifyHumanoidBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyHumanoidBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone;
class UScriptStruct* FAnimNode_VrmModifyHumanoidBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyHumanoidBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyHumanoidBone>()
{
	return FAnimNode_VrmModifyHumanoidBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmAssetList_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **///UPROPERTY(EditAnywhere, Category=SkeletalControl) \n//FBoneReference BoneToModify;\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *//UPROPERTY(EditAnywhere, Category=SkeletalControl)\n//FBoneReference BoneToModify;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HumanoidBoneTransform_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtBoneTransform_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmAssetList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HumanoidBoneTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtBoneTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyHumanoidBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList = { "VrmAssetList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, VrmAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmAssetList_MetaData), NewProp_VrmAssetList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform = { "HumanoidBoneTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, HumanoidBoneTransform), Z_Construct_UScriptStruct_FVRMBoneTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HumanoidBoneTransform_MetaData), NewProp_HumanoidBoneTransform_MetaData) }; // 948322570
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform = { "ExtBoneTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, ExtBoneTransform), Z_Construct_UScriptStruct_FVRMBoneTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtBoneTransform_MetaData), NewProp_ExtBoneTransform_MetaData) }; // 948322570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_VrmModifyHumanoidBone",
	Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers),
	sizeof(FAnimNode_VrmModifyHumanoidBone),
	alignof(FAnimNode_VrmModifyHumanoidBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.InnerSingleton;
}
// End ScriptStruct FAnimNode_VrmModifyHumanoidBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVRMBoneTransform::StaticStruct, Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewStructOps, TEXT("VRMBoneTransform"), &Z_Registration_Info_UScriptStruct_VRMBoneTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMBoneTransform), 948322570U) },
		{ FAnimNode_VrmModifyHumanoidBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewStructOps, TEXT("AnimNode_VrmModifyHumanoidBone"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmModifyHumanoidBone), 1905936371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_3320152470(TEXT("/Script/VRM4U"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

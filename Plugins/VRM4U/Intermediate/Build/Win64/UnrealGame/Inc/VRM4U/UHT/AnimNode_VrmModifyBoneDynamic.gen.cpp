// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneDynamic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyBoneDynamic() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic();
// End Cross Module References

// Begin ScriptStruct FAnimNode_VrmModifyBoneDynamic
static_assert(std::is_polymorphic<FAnimNode_VrmModifyBoneDynamic>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyBoneDynamic cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic;
class UScriptStruct* FAnimNode_VrmModifyBoneDynamic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyBoneDynamic"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyBoneDynamic>()
{
	return FAnimNode_VrmModifyBoneDynamic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **///UPROPERTY(EditAnywhere, Category=SkeletalControl) \n//FBoneReference BoneToModify;\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *//UPROPERTY(EditAnywhere, Category=SkeletalControl)\n//FBoneReference BoneToModify;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New translation of bone to apply. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New translation of bone to apply." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New rotation of bone to apply. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New rotation of bone to apply." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Scale" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New Scale of bone to apply. This is only worldspace. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New Scale of bone to apply. This is only worldspace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Translation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
		{ "Category", "Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[] = {
		{ "Category", "Scale" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationSpace_MetaData[] = {
		{ "Category", "Translation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference frame to apply Translation in. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference frame to apply Translation in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference frame to apply Rotation in. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference frame to apply Rotation in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSpace_MetaData[] = {
		{ "Category", "Scale" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference frame to apply Scale in. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference frame to apply Scale in." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameToModify;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyBoneDynamic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify = { "BoneNameToModify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, BoneNameToModify), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNameToModify_MetaData), NewProp_BoneNameToModify_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, TranslationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationMode_MetaData), NewProp_TranslationMode_MetaData) }; // 1234177555
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, RotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMode_MetaData), NewProp_RotationMode_MetaData) }; // 1234177555
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode = { "ScaleMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, ScaleMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMode_MetaData), NewProp_ScaleMode_MetaData) }; // 1234177555
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace = { "TranslationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, TranslationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationSpace_MetaData), NewProp_TranslationSpace_MetaData) }; // 385354733
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, RotationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpace_MetaData), NewProp_RotationSpace_MetaData) }; // 385354733
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace = { "ScaleSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, ScaleSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleSpace_MetaData), NewProp_ScaleSpace_MetaData) }; // 385354733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_VrmModifyBoneDynamic",
	Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers),
	sizeof(FAnimNode_VrmModifyBoneDynamic),
	alignof(FAnimNode_VrmModifyBoneDynamic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.InnerSingleton;
}
// End ScriptStruct FAnimNode_VrmModifyBoneDynamic

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_VrmModifyBoneDynamic::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewStructOps, TEXT("AnimNode_VrmModifyBoneDynamic"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmModifyBoneDynamic), 3263168818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_3470483797(TEXT("/Script/VRM4U"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

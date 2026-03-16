// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmAssetListObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAssetListObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrm1LicenseObject_NoRegister();
VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject();
VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
VRM4U_API UClass* Z_Construct_UClass_UVrmImportMaterialSet_NoRegister();
VRM4U_API UClass* Z_Construct_UClass_UVrmLicenseObject_NoRegister();
VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType();
// End Cross Module References

// Begin Class UVrmAssetListObject
void UVrmAssetListObject::StaticRegisterNativesUVrmAssetListObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmAssetListObject);
UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister()
{
	return UVrmAssetListObject::StaticClass();
}
struct Z_Construct_UClass_UVrmAssetListObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VrmAssetListObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssetSave_MetaData[] = {
		{ "Category", "InOption" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipMorphTarget_MetaData[] = {
		{ "Category", "InOption" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MtoonLitSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MtoonUnlitSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SSSSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SSSProfileSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlitSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GLTFSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UEFNUnlitSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UEFNLitSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UEFNSSSProfileSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMToonLitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMToonLitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonLitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonLitOpaqueTwoSidedMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonLitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonLitTranslucentTwoSidedMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMToonUnlitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_unlit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// unlit\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "unlit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMToonUnlitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonUnlitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonUnlitOpaqueTwoSidedMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonUnlitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonUnlitTranslucentTwoSidedMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptMToonOutlineMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseUnlitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseUnlitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePBROpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSkeletalMesh_MetaData[] = {
		{ "Category", "Out" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Out\")\n//USkeleton* BaseSkeleton;\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Out\")\nUSkeleton* BaseSkeleton;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmHumanoidMetaObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmMannequinMetaObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmLicenseObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vrm1LicenseObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallThumbnailTexture_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SSSProfile_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportMode_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterials_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HumanoidRig_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseBody_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseFace_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFlag_Translucent_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFlag_TwoSided_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_model_root_transform_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_CompressType_MetaData[] = {
		{ "Category", "Out" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TArray<FTransform> poseGlobal_bindpose;\x09// bone\n//TArray<FTransform> poseGlobal_tpose;\x09// node\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TArray<FTransform> poseGlobal_bindpose;  bone\nTArray<FTransform> poseGlobal_tpose;    node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_CompressTypeList_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileFullPathName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrigFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UE4SkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HumanoidSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VRM4U_PRECOMPILE_500\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VRM4U_PRECOMPILE_500" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bAssetSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetSave;
	static void NewProp_bSkipMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipMorphTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MtoonLitSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MtoonUnlitSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SSSSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SSSProfileSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnlitSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GLTFSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UEFNUnlitSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UEFNLitSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UEFNSSSProfileSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMToonLitOpaqueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMToonLitTranslucentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonLitOpaqueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonLitOpaqueTwoSidedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonLitTranslucentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonLitTranslucentTwoSidedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMToonUnlitOpaqueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMToonUnlitTranslucentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonUnlitOpaqueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonUnlitOpaqueTwoSidedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonUnlitTranslucentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonUnlitTranslucentTwoSidedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptMToonOutlineMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseUnlitOpaqueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseUnlitTranslucentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasePBROpaqueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmHumanoidMetaObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMannequinMetaObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmLicenseObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Vrm1LicenseObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallThumbnailTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SSSProfile;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImportMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutlineMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutlineMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HumanoidRig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseBody;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseFace;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MaterialFlag_Translucent_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialFlag_Translucent;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MaterialFlag_TwoSided_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialFlag_TwoSided;
	static const UECodeGen_Private::FStructPropertyParams NewProp_model_root_transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Texture_CompressType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Texture_CompressType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Texture_CompressTypeList_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Texture_CompressTypeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Texture_CompressTypeList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Package;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReimportBase;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileFullPathName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrigFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseFileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UE4SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HumanoidSkeletalMesh;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAssetListObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave_SetBit(void* Obj)
{
	((UVrmAssetListObject*)Obj)->bAssetSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave = { "bAssetSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmAssetListObject), &Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssetSave_MetaData), NewProp_bAssetSave_MetaData) };
void Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget_SetBit(void* Obj)
{
	((UVrmAssetListObject*)Obj)->bSkipMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget = { "bSkipMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmAssetListObject), &Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipMorphTarget_MetaData), NewProp_bSkipMorphTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonLitSet = { "MtoonLitSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, MtoonLitSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MtoonLitSet_MetaData), NewProp_MtoonLitSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonUnlitSet = { "MtoonUnlitSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, MtoonUnlitSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MtoonUnlitSet_MetaData), NewProp_MtoonUnlitSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSSet = { "SSSSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, SSSSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SSSSet_MetaData), NewProp_SSSSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfileSet = { "SSSProfileSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, SSSProfileSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SSSProfileSet_MetaData), NewProp_SSSProfileSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UnlitSet = { "UnlitSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, UnlitSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlitSet_MetaData), NewProp_UnlitSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_GLTFSet = { "GLTFSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, GLTFSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GLTFSet_MetaData), NewProp_GLTFSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UEFNUnlitSet = { "UEFNUnlitSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, UEFNUnlitSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UEFNUnlitSet_MetaData), NewProp_UEFNUnlitSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UEFNLitSet = { "UEFNLitSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, UEFNLitSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UEFNLitSet_MetaData), NewProp_UEFNLitSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UEFNSSSProfileSet = { "UEFNSSSProfileSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, UEFNSSSProfileSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UEFNSSSProfileSet_MetaData), NewProp_UEFNSSSProfileSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_CustomSet = { "CustomSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, CustomSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSet_MetaData), NewProp_CustomSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitOpaqueMaterial = { "BaseMToonLitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseMToonLitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMToonLitOpaqueMaterial_MetaData), NewProp_BaseMToonLitOpaqueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitTranslucentMaterial = { "BaseMToonLitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseMToonLitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMToonLitTranslucentMaterial_MetaData), NewProp_BaseMToonLitTranslucentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueMaterial = { "OptMToonLitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonLitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonLitOpaqueMaterial_MetaData), NewProp_OptMToonLitOpaqueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueTwoSidedMaterial = { "OptMToonLitOpaqueTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonLitOpaqueTwoSidedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonLitOpaqueTwoSidedMaterial_MetaData), NewProp_OptMToonLitOpaqueTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentMaterial = { "OptMToonLitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonLitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonLitTranslucentMaterial_MetaData), NewProp_OptMToonLitTranslucentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentTwoSidedMaterial = { "OptMToonLitTranslucentTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonLitTranslucentTwoSidedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonLitTranslucentTwoSidedMaterial_MetaData), NewProp_OptMToonLitTranslucentTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitOpaqueMaterial = { "BaseMToonUnlitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseMToonUnlitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMToonUnlitOpaqueMaterial_MetaData), NewProp_BaseMToonUnlitOpaqueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitTranslucentMaterial = { "BaseMToonUnlitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseMToonUnlitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMToonUnlitTranslucentMaterial_MetaData), NewProp_BaseMToonUnlitTranslucentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueMaterial = { "OptMToonUnlitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonUnlitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonUnlitOpaqueMaterial_MetaData), NewProp_OptMToonUnlitOpaqueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueTwoSidedMaterial = { "OptMToonUnlitOpaqueTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonUnlitOpaqueTwoSidedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonUnlitOpaqueTwoSidedMaterial_MetaData), NewProp_OptMToonUnlitOpaqueTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentMaterial = { "OptMToonUnlitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonUnlitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonUnlitTranslucentMaterial_MetaData), NewProp_OptMToonUnlitTranslucentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentTwoSidedMaterial = { "OptMToonUnlitTranslucentTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonUnlitTranslucentTwoSidedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonUnlitTranslucentTwoSidedMaterial_MetaData), NewProp_OptMToonUnlitTranslucentTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonOutlineMaterial = { "OptMToonOutlineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonOutlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptMToonOutlineMaterial_MetaData), NewProp_OptMToonOutlineMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitOpaqueMaterial = { "BaseUnlitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseUnlitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseUnlitOpaqueMaterial_MetaData), NewProp_BaseUnlitOpaqueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitTranslucentMaterial = { "BaseUnlitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseUnlitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseUnlitTranslucentMaterial_MetaData), NewProp_BaseUnlitTranslucentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BasePBROpaqueMaterial = { "BasePBROpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BasePBROpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePBROpaqueMaterial_MetaData), NewProp_BasePBROpaqueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseSkeletalMesh = { "BaseSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSkeletalMesh_MetaData), NewProp_BaseSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmMetaObject_MetaData), NewProp_VrmMetaObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmHumanoidMetaObject = { "VrmHumanoidMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, VrmHumanoidMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmHumanoidMetaObject_MetaData), NewProp_VrmHumanoidMetaObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMannequinMetaObject = { "VrmMannequinMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, VrmMannequinMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmMannequinMetaObject_MetaData), NewProp_VrmMannequinMetaObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmLicenseObject = { "VrmLicenseObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, VrmLicenseObject), Z_Construct_UClass_UVrmLicenseObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmLicenseObject_MetaData), NewProp_VrmLicenseObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Vrm1LicenseObject = { "Vrm1LicenseObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, Vrm1LicenseObject), Z_Construct_UClass_UVrm1LicenseObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vrm1LicenseObject_MetaData), NewProp_Vrm1LicenseObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SmallThumbnailTexture = { "SmallThumbnailTexture", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, SmallThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallThumbnailTexture_MetaData), NewProp_SmallThumbnailTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfile = { "SSSProfile", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, SSSProfile), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SSSProfile_MetaData), NewProp_SSSProfile_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode = { "ImportMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, ImportMode), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportMode_MetaData), NewProp_ImportMode_MetaData) }; // 1422341709
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials_Inner = { "OutlineMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials = { "OutlineMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OutlineMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineMaterials_MetaData), NewProp_OutlineMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidRig = { "HumanoidRig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, HumanoidRig), Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HumanoidRig_MetaData), NewProp_HumanoidRig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_PoseBody = { "PoseBody", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, PoseBody), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseBody_MetaData), NewProp_PoseBody_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_PoseFace = { "PoseFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, PoseFace), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseFace_MetaData), NewProp_PoseFace_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MaterialFlag_Translucent_Inner = { "MaterialFlag_Translucent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MaterialFlag_Translucent = { "MaterialFlag_Translucent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, MaterialFlag_Translucent), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFlag_Translucent_MetaData), NewProp_MaterialFlag_Translucent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MaterialFlag_TwoSided_Inner = { "MaterialFlag_TwoSided", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MaterialFlag_TwoSided = { "MaterialFlag_TwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, MaterialFlag_TwoSided), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFlag_TwoSided_MetaData), NewProp_MaterialFlag_TwoSided_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_model_root_transform = { "model_root_transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, model_root_transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_model_root_transform_MetaData), NewProp_model_root_transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressType = { "Texture_CompressType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, Texture_CompressType), Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_CompressType_MetaData), NewProp_Texture_CompressType_MetaData) }; // 1237597166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressTypeList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressTypeList_Inner = { "Texture_CompressTypeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType, METADATA_PARAMS(0, nullptr) }; // 1237597166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressTypeList = { "Texture_CompressTypeList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, Texture_CompressTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_CompressTypeList_MetaData), NewProp_Texture_CompressTypeList_MetaData) }; // 1237597166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, Package), Z_Construct_UClass_UPackage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Package_MetaData), NewProp_Package_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ReimportBase = { "ReimportBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, ReimportBase), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportBase_MetaData), NewProp_ReimportBase_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_FileFullPathName = { "FileFullPathName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, FileFullPathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileFullPathName_MetaData), NewProp_FileFullPathName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OrigFileName = { "OrigFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, OrigFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrigFileName_MetaData), NewProp_OrigFileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseFileName = { "BaseFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseFileName_MetaData), NewProp_BaseFileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UE4SkeletalMesh = { "UE4SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, UE4SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UE4SkeletalMesh_MetaData), NewProp_UE4SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidSkeletalMesh = { "HumanoidSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, HumanoidSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HumanoidSkeletalMesh_MetaData), NewProp_HumanoidSkeletalMesh_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListObject, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAssetListObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonLitSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonUnlitSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UnlitSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_GLTFSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UEFNUnlitSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UEFNLitSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UEFNSSSProfileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_CustomSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitOpaqueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitTranslucentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitOpaqueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitTranslucentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonOutlineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitOpaqueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitTranslucentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BasePBROpaqueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMetaObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmHumanoidMetaObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMannequinMetaObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmLicenseObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Vrm1LicenseObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SmallThumbnailTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfile,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_PoseBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_PoseFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MaterialFlag_Translucent_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MaterialFlag_Translucent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MaterialFlag_TwoSided_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MaterialFlag_TwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_model_root_transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressTypeList_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressTypeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Texture_CompressTypeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Package,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ReimportBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_FileFullPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OrigFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UE4SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidSkeletalMesh,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmAssetListObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmAssetListObject_Statics::ClassParams = {
	&UVrmAssetListObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVrmAssetListObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmAssetListObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmAssetListObject()
{
	if (!Z_Registration_Info_UClass_UVrmAssetListObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmAssetListObject.OuterSingleton, Z_Construct_UClass_UVrmAssetListObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmAssetListObject.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmAssetListObject>()
{
	return UVrmAssetListObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAssetListObject);
UVrmAssetListObject::~UVrmAssetListObject() {}
// End Class UVrmAssetListObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmAssetListObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmAssetListObject, UVrmAssetListObject::StaticClass, TEXT("UVrmAssetListObject"), &Z_Registration_Info_UClass_UVrmAssetListObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmAssetListObject), 2974562156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmAssetListObject_h_2365585698(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmAssetListObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmAssetListObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

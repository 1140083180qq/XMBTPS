// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/VrmImportUI.h"
#include "VRM4U/Public/Vrm1LicenseObject.h"
#include "VRM4U/Public/VrmUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmImportUI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FLicenseBoolDataPair();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FLicenseStringDataArray();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FLicenseStringDataPair();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmImportUI();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmImportUI_NoRegister();
// End Cross Module References

// Begin Class UVrmImportUI Function ResetToDefault
struct Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmImportUI, nullptr, "ResetToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVrmImportUI_ResetToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmImportUI::execResetToDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefault();
	P_NATIVE_END;
}
// End Class UVrmImportUI Function ResetToDefault

// Begin Class UVrmImportUI
void UVrmImportUI::StaticRegisterNativesUVrmImportUI()
{
	UClass* Class = UVrmImportUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetToDefault", &UVrmImportUI::execResetToDefault },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmImportUI);
UClass* Z_Construct_UClass_UVrmImportUI_NoRegister()
{
	return UVrmImportUI::StaticClass();
}
struct Z_Construct_UClass_UVrmImportUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FTransform" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VrmImportUI.h" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Thumbnail" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleAuthor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "VRM Title / Author" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUEFN_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** for Mobile. Import root bone only */" },
#endif
		{ "DisplayName", "**UE5** UEFN mode" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for Mobile. Import root bone only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAPoseRetarget_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "**UE4** RetargetPose A-pose(Off to T-pose)" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileBone_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** for Mobile. Import root bone only */" },
#endif
		{ "DisplayName", "**mobile** Reduce bonemap<=75" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for Mobile. Import root bone only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Materal Type */" },
#endif
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Materal Type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUE5Material_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Use UE5 Material" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOutlineMaterial_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Outline Material*/" },
#endif
		{ "DisplayName", "GenerateOutlineMaterial" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outline Material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOverride_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Force Override */" },
#endif
		{ "DisplayName", "Force Override (as New Asset)" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force Override" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Model scale" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTranslateScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Animation Translate scale" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Animation Play Rate Scale" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveRootBoneRotation_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove RootBone Rotation */" },
#endif
		{ "DisplayName", "Remove RootBone Rotation" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove RootBone Rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveRootBonePosition_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove RootBone Position */" },
#endif
		{ "DisplayName", "Remove RootBone Position" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove RootBone Position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVrm10UseBindToRestPose_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "VRM10 Convert to Restpose from Bindpose" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVrm10RemoveLocalRotation_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove Local Rotation for VRM10 */" },
#endif
		{ "DisplayName", "VRM10 Remove Local Rotation" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove Local Rotation for VRM10" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVrm10Bindpose_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use Bindpose for VRM10 */" },
#endif
		{ "DisplayName", "VRM10 Bindpose" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use Bindpose for VRM10" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOriginalBoneName_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Force Original Bone Name */" },
#endif
		{ "DisplayName", "Force original bone name" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force Original Bone Name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateHumanoidRenamedMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Duplicate mesh and renamed humanoid bone */" },
#endif
		{ "DisplayName", "Generate renamed humanoid mesh" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duplicate mesh and renamed humanoid bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateIKBone_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add IK Bone */" },
#endif
		{ "DisplayName", "Generate IK Bone" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add IK Bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateRigIK_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add RigIK asset*/" },
#endif
		{ "DisplayName", "Generate RigIK Asset" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add RigIK asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipPhysics_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove Physics asset */" },
#endif
		{ "DisplayName", "No physics asset" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove Physics asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipRetargeter_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove Retargeter asset */" },
#endif
		{ "DisplayName", "No Retargeter asset" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove Retargeter asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipMorphTarget_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove MorphTarget */" },
#endif
		{ "DisplayName", "No MorphTarget" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove MorphTarget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMorphTargetNormal_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use MorphTarget Normal */" },
#endif
		{ "DisplayName", "Eable MorphTarget Normal(TangentZDelta)" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use MorphTarget Normal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOriginalMorphTargetName_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Force Original MorphTarget Name Mode */" },
#endif
		{ "DisplayName", "Force original morphtarget name" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force Original MorphTarget Name Mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveBlendShapeGroupPrefix_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use Strict MorphTarget Name Mode */" },
#endif
		{ "DisplayName", "Remove BlendShapeGroup prefix for old VRM file" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use Strict MorphTarget Name Mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use Opaque insted of translucent */" },
#endif
		{ "DisplayName", "Force Opaque" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use Opaque insted of translucent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTwoSided_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use TwoSided */" },
#endif
		{ "DisplayName", "Force TwoSided" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use TwoSided" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleUAssetFile_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save as single uasset file */" },
#endif
		{ "DisplayName", "Single uasset file" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save as single uasset file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultGridTextureMode_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use GridTexture by Default */" },
#endif
		{ "DisplayName", "[Texture] Use DummyGrid by DefaultBaseTexture" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use GridTexture by Default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBC7Mode_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use BC7 */" },
#endif
		{ "DisplayName", "[Texture] Use BC7 for BaseTexture" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use BC7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMipmapGenerateMode_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generate mipmap (be careful of MatCap texture)*/" },
#endif
		{ "DisplayName", "[Texture] Generate Mipmap" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate mipmap (be careful of MatCap texture)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterial_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Merge material using same parameter */" },
#endif
		{ "DisplayName", "[Optimize] Merge material" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Merge material using same parameter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergePrimitive_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Merge primitives using same material */" },
#endif
		{ "DisplayName", "[Optimize] Merge primitive" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Merge primitives using same material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeMaterial_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use optimized MaterialInstance */" },
#endif
		{ "DisplayName", "[Optimize] use opt material" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use optimized MaterialInstance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerateTriangles_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove degenerate triangles */" },
#endif
		{ "DisplayName", "[Optimize] remove degenerate triangles" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove degenerate triangles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeightInfluenceNum_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BoneWeight influence */" },
#endif
		{ "DisplayName", "[Optimize] Bone Weight Influence Num" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BoneWeight influence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimpleRoot_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove bone has no mesh */" },
#endif
		{ "DisplayName", "[Optimize] Remove bone used DCC tool" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove bone has no mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActiveBone_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove bone has no mesh */" },
#endif
		{ "DisplayName", "[Optimize] Use ActiveBone List" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove bone has no mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreVRMValidation_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** for DEBUG. Ignore Validation */" },
#endif
		{ "DisplayName", "[Debug] Ignore VRM Validataion" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for DEBUG. Ignore Validation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugOneBone_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** for DEBUG. Import root bone only */" },
#endif
		{ "DisplayName", "[Debug] One bone only" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for DEBUG. Import root bone only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugNoMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** for DEBUG. No mesh. Bone only */" },
#endif
		{ "DisplayName", "[Debug] No Mesh" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for DEBUG. No mesh. Bone only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugNoMaterial_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** for DEBUG. No mesh. Bone only */" },
#endif
		{ "DisplayName", "[Debug] No Material" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for DEBUG. No mesh. Bone only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset. */" },
#endif
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicenseBool_MetaData[] = {
		{ "Category", "VRM1_License" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicenseString_MetaData[] = {
		{ "Category", "VRM1_License" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicenseStringArray_MetaData[] = {
		{ "Category", "VRM1_License" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_allowedUserName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_violentUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sexualUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commercialUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherPermissionUrl_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_licenseName_MetaData[] = {
		{ "Category", "License_Redistribution/ModificationsLicense" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherLicenseUrl_MetaData[] = {
		{ "Category", "License_Redistribution/ModificationsLicense" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleAuthor;
	static void NewProp_bUEFN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUEFN;
	static void NewProp_bAPoseRetarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAPoseRetarget;
	static void NewProp_bMobileBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileBone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
	static void NewProp_bUseUE5Material_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUE5Material;
	static void NewProp_bGenerateOutlineMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOutlineMaterial;
	static void NewProp_bForceOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModelScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationTranslateScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRateScale;
	static void NewProp_bRemoveRootBoneRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveRootBoneRotation;
	static void NewProp_bRemoveRootBonePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveRootBonePosition;
	static void NewProp_bVrm10UseBindToRestPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVrm10UseBindToRestPose;
	static void NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVrm10RemoveLocalRotation;
	static void NewProp_bVrm10Bindpose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVrm10Bindpose;
	static void NewProp_bForceOriginalBoneName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOriginalBoneName;
	static void NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateHumanoidRenamedMesh;
	static void NewProp_bGenerateIKBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateIKBone;
	static void NewProp_bGenerateRigIK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateRigIK;
	static void NewProp_bSkipPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipPhysics;
	static void NewProp_bSkipRetargeter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipRetargeter;
	static void NewProp_bSkipMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipMorphTarget;
	static void NewProp_bEnableMorphTargetNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMorphTargetNormal;
	static void NewProp_bForceOriginalMorphTargetName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOriginalMorphTargetName;
	static void NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveBlendShapeGroupPrefix;
	static void NewProp_bForceOpaque_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
	static void NewProp_bForceTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTwoSided;
	static void NewProp_bSingleUAssetFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleUAssetFile;
	static void NewProp_bDefaultGridTextureMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultGridTextureMode;
	static void NewProp_bBC7Mode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBC7Mode;
	static void NewProp_bMipmapGenerateMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMipmapGenerateMode;
	static void NewProp_bMergeMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterial;
	static void NewProp_bMergePrimitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergePrimitive;
	static void NewProp_bOptimizeMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeMaterial;
	static void NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerateTriangles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneWeightInfluenceNum;
	static void NewProp_bSimpleRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimpleRoot;
	static void NewProp_bActiveBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveBone;
	static void NewProp_bIgnoreVRMValidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreVRMValidation;
	static void NewProp_bDebugOneBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugOneBone;
	static void NewProp_bDebugNoMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugNoMesh;
	static void NewProp_bDebugNoMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugNoMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LicenseBool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LicenseBool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LicenseString_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LicenseString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LicenseStringArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LicenseStringArray;
	static const UECodeGen_Private::FStrPropertyParams NewProp_allowedUserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_violentUsageName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_sexualUsageName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_commercialUsageName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_otherPermissionUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_licenseName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_otherLicenseUrl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmImportUI_ResetToDefault, "ResetToDefault" }, // 2173766607
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmImportUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor = { "TitleAuthor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, TitleAuthor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleAuthor_MetaData), NewProp_TitleAuthor_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bUEFN_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bUEFN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bUEFN = { "bUEFN", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bUEFN_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUEFN_MetaData), NewProp_bUEFN_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bAPoseRetarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget = { "bAPoseRetarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAPoseRetarget_MetaData), NewProp_bAPoseRetarget_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bMobileBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone = { "bMobileBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileBone_MetaData), NewProp_bMobileBone_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, MaterialType), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialType_MetaData), NewProp_MaterialType_MetaData) }; // 1422341709
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bUseUE5Material_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bUseUE5Material = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bUseUE5Material = { "bUseUE5Material", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bUseUE5Material_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUE5Material_MetaData), NewProp_bUseUE5Material_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bGenerateOutlineMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial = { "bGenerateOutlineMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOutlineMaterial_MetaData), NewProp_bGenerateOutlineMaterial_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bForceOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride = { "bForceOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOverride_MetaData), NewProp_bForceOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale = { "ModelScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, ModelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelScale_MetaData), NewProp_ModelScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_AnimationTranslateScale = { "AnimationTranslateScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, AnimationTranslateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTranslateScale_MetaData), NewProp_AnimationTranslateScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_PlayRateScale = { "PlayRateScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, PlayRateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRateScale_MetaData), NewProp_PlayRateScale_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveRootBoneRotation_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bRemoveRootBoneRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveRootBoneRotation = { "bRemoveRootBoneRotation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveRootBoneRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveRootBoneRotation_MetaData), NewProp_bRemoveRootBoneRotation_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveRootBonePosition_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bRemoveRootBonePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveRootBonePosition = { "bRemoveRootBonePosition", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveRootBonePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveRootBonePosition_MetaData), NewProp_bRemoveRootBonePosition_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10UseBindToRestPose_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bVrm10UseBindToRestPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10UseBindToRestPose = { "bVrm10UseBindToRestPose", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10UseBindToRestPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVrm10UseBindToRestPose_MetaData), NewProp_bVrm10UseBindToRestPose_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bVrm10RemoveLocalRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation = { "bVrm10RemoveLocalRotation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVrm10RemoveLocalRotation_MetaData), NewProp_bVrm10RemoveLocalRotation_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bVrm10Bindpose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose = { "bVrm10Bindpose", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVrm10Bindpose_MetaData), NewProp_bVrm10Bindpose_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOriginalBoneName_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bForceOriginalBoneName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOriginalBoneName = { "bForceOriginalBoneName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOriginalBoneName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOriginalBoneName_MetaData), NewProp_bForceOriginalBoneName_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bGenerateHumanoidRenamedMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh = { "bGenerateHumanoidRenamedMesh", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateHumanoidRenamedMesh_MetaData), NewProp_bGenerateHumanoidRenamedMesh_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bGenerateIKBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone = { "bGenerateIKBone", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateIKBone_MetaData), NewProp_bGenerateIKBone_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bGenerateRigIK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK = { "bGenerateRigIK", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateRigIK_MetaData), NewProp_bGenerateRigIK_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bSkipPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics = { "bSkipPhysics", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipPhysics_MetaData), NewProp_bSkipPhysics_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipRetargeter_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bSkipRetargeter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipRetargeter = { "bSkipRetargeter", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipRetargeter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipRetargeter_MetaData), NewProp_bSkipRetargeter_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bSkipMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget = { "bSkipMorphTarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipMorphTarget_MetaData), NewProp_bSkipMorphTarget_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bEnableMorphTargetNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal = { "bEnableMorphTargetNormal", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMorphTargetNormal_MetaData), NewProp_bEnableMorphTargetNormal_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOriginalMorphTargetName_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bForceOriginalMorphTargetName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOriginalMorphTargetName = { "bForceOriginalMorphTargetName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOriginalMorphTargetName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOriginalMorphTargetName_MetaData), NewProp_bForceOriginalMorphTargetName_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bRemoveBlendShapeGroupPrefix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix = { "bRemoveBlendShapeGroupPrefix", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveBlendShapeGroupPrefix_MetaData), NewProp_bRemoveBlendShapeGroupPrefix_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bForceOpaque = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOpaque_MetaData), NewProp_bForceOpaque_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bForceTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided = { "bForceTwoSided", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTwoSided_MetaData), NewProp_bForceTwoSided_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bSingleUAssetFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile = { "bSingleUAssetFile", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleUAssetFile_MetaData), NewProp_bSingleUAssetFile_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bDefaultGridTextureMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode = { "bDefaultGridTextureMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultGridTextureMode_MetaData), NewProp_bDefaultGridTextureMode_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bBC7Mode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode = { "bBC7Mode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBC7Mode_MetaData), NewProp_bBC7Mode_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bMipmapGenerateMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode = { "bMipmapGenerateMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMipmapGenerateMode_MetaData), NewProp_bMipmapGenerateMode_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bMergeMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial = { "bMergeMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeMaterial_MetaData), NewProp_bMergeMaterial_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bMergePrimitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive = { "bMergePrimitive", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergePrimitive_MetaData), NewProp_bMergePrimitive_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bOptimizeMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial = { "bOptimizeMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeMaterial_MetaData), NewProp_bOptimizeMaterial_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bRemoveDegenerateTriangles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles = { "bRemoveDegenerateTriangles", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDegenerateTriangles_MetaData), NewProp_bRemoveDegenerateTriangles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum = { "BoneWeightInfluenceNum", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, BoneWeightInfluenceNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneWeightInfluenceNum_MetaData), NewProp_BoneWeightInfluenceNum_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bSimpleRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot = { "bSimpleRoot", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimpleRoot_MetaData), NewProp_bSimpleRoot_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bActiveBone_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bActiveBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bActiveBone = { "bActiveBone", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bActiveBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActiveBone_MetaData), NewProp_bActiveBone_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bIgnoreVRMValidation_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bIgnoreVRMValidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bIgnoreVRMValidation = { "bIgnoreVRMValidation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bIgnoreVRMValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreVRMValidation_MetaData), NewProp_bIgnoreVRMValidation_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bDebugOneBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone = { "bDebugOneBone", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugOneBone_MetaData), NewProp_bDebugOneBone_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugNoMesh_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bDebugNoMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugNoMesh = { "bDebugNoMesh", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugNoMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugNoMesh_MetaData), NewProp_bDebugNoMesh_MetaData) };
void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugNoMaterial_SetBit(void* Obj)
{
	((UVrmImportUI*)Obj)->bDebugNoMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugNoMaterial = { "bDebugNoMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugNoMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugNoMaterial_MetaData), NewProp_bDebugNoMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseBool_Inner = { "LicenseBool", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLicenseBoolDataPair, METADATA_PARAMS(0, nullptr) }; // 562987867
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseBool = { "LicenseBool", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, LicenseBool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicenseBool_MetaData), NewProp_LicenseBool_MetaData) }; // 562987867
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseString_Inner = { "LicenseString", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLicenseStringDataPair, METADATA_PARAMS(0, nullptr) }; // 2883432721
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseString = { "LicenseString", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, LicenseString), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicenseString_MetaData), NewProp_LicenseString_MetaData) }; // 2883432721
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseStringArray_Inner = { "LicenseStringArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLicenseStringDataArray, METADATA_PARAMS(0, nullptr) }; // 2341886905
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseStringArray = { "LicenseStringArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, LicenseStringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicenseStringArray_MetaData), NewProp_LicenseStringArray_MetaData) }; // 2341886905
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName = { "allowedUserName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, allowedUserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_allowedUserName_MetaData), NewProp_allowedUserName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUsageName = { "violentUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, violentUsageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_violentUsageName_MetaData), NewProp_violentUsageName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUsageName = { "sexualUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, sexualUsageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sexualUsageName_MetaData), NewProp_sexualUsageName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUsageName = { "commercialUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, commercialUsageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commercialUsageName_MetaData), NewProp_commercialUsageName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl = { "otherPermissionUrl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, otherPermissionUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherPermissionUrl_MetaData), NewProp_otherPermissionUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName = { "licenseName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, licenseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_licenseName_MetaData), NewProp_licenseName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl = { "otherLicenseUrl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, otherLicenseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherLicenseUrl_MetaData), NewProp_otherLicenseUrl_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportUI, data), Z_Construct_UScriptStruct_FImportOptionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1860667208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmImportUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bUEFN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bUseUE5Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_AnimationTranslateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_PlayRateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveRootBoneRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveRootBonePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10UseBindToRestPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOriginalBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipRetargeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOriginalMorphTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bActiveBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bIgnoreVRMValidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugNoMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugNoMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseBool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseBool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseString_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseStringArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_LicenseStringArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUsageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUsageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUsageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmImportUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmImportUI_Statics::ClassParams = {
	&UVrmImportUI::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVrmImportUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmImportUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmImportUI()
{
	if (!Z_Registration_Info_UClass_UVrmImportUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmImportUI.OuterSingleton, Z_Construct_UClass_UVrmImportUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmImportUI.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UVrmImportUI>()
{
	return UVrmImportUI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmImportUI);
UVrmImportUI::~UVrmImportUI() {}
// End Class UVrmImportUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmImportUI, UVrmImportUI::StaticClass, TEXT("UVrmImportUI"), &Z_Registration_Info_UClass_UVrmImportUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmImportUI), 616213781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_765337297(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

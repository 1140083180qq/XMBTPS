// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmUtil() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
// End Cross Module References

// Begin Enum EVRMImportMaterialType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMImportMaterialType;
static UEnum* EVRMImportMaterialType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRMImportMaterialType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRMImportMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMImportMaterialType"));
	}
	return Z_Registration_Info_UEnum_EVRMImportMaterialType.OuterSingleton;
}
template<> VRM4U_API UEnum* StaticEnum<EVRMImportMaterialType>()
{
	return EVRMImportMaterialType_StaticEnum();
}
struct Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n//\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
		{ "VRMIMT_Auto.Comment", "// \n//\n" },
		{ "VRMIMT_Auto.DisplayName", "Auto(MToon Unlit)" },
		{ "VRMIMT_Auto.Name", "EVRMImportMaterialType::VRMIMT_Auto" },
		{ "VRMIMT_Custom.Comment", "// \n//\n" },
		{ "VRMIMT_Custom.DisplayName", "Custom" },
		{ "VRMIMT_Custom.Name", "EVRMImportMaterialType::VRMIMT_Custom" },
		{ "VRMIMT_glTF.Comment", "// \n//\n" },
		{ "VRMIMT_glTF.DisplayName", "PBR(glTF2)" },
		{ "VRMIMT_glTF.Name", "EVRMImportMaterialType::VRMIMT_glTF" },
		{ "VRMIMT_MAX.Comment", "// \n//\n" },
		{ "VRMIMT_MAX.Name", "EVRMImportMaterialType::VRMIMT_MAX" },
		{ "VRMIMT_MToon.Comment", "// \n//\n" },
		{ "VRMIMT_MToon.DisplayName", "MToon Lit" },
		{ "VRMIMT_MToon.Name", "EVRMImportMaterialType::VRMIMT_MToon" },
		{ "VRMIMT_MToonUnlit.Comment", "// \n//\n" },
		{ "VRMIMT_MToonUnlit.DisplayName", "MToon Unlit" },
		{ "VRMIMT_MToonUnlit.Name", "EVRMImportMaterialType::VRMIMT_MToonUnlit" },
		{ "VRMIMT_SSS.Comment", "// \n//\n" },
		{ "VRMIMT_SSS.DisplayName", "Subsurface" },
		{ "VRMIMT_SSS.Name", "EVRMImportMaterialType::VRMIMT_SSS" },
		{ "VRMIMT_SSSProfile.Comment", "// \n//\n" },
		{ "VRMIMT_SSSProfile.DisplayName", "Subsurface Profile" },
		{ "VRMIMT_SSSProfile.Name", "EVRMImportMaterialType::VRMIMT_SSSProfile" },
		{ "VRMIMT_UEFNLit.Comment", "// \n//\n" },
		{ "VRMIMT_UEFNLit.DisplayName", "UEFN(Lit)" },
		{ "VRMIMT_UEFNLit.Name", "EVRMImportMaterialType::VRMIMT_UEFNLit" },
		{ "VRMIMT_UEFNSSSProfile.Comment", "// \n//\n" },
		{ "VRMIMT_UEFNSSSProfile.DisplayName", "UEFN(SSSProfile)" },
		{ "VRMIMT_UEFNSSSProfile.Name", "EVRMImportMaterialType::VRMIMT_UEFNSSSProfile" },
		{ "VRMIMT_UEFNUnlit.Comment", "// \n//\n" },
		{ "VRMIMT_UEFNUnlit.DisplayName", "UEFN(Unlit)" },
		{ "VRMIMT_UEFNUnlit.Name", "EVRMImportMaterialType::VRMIMT_UEFNUnlit" },
		{ "VRMIMT_Unlit.Comment", "// \n//\n" },
		{ "VRMIMT_Unlit.DisplayName", "Unlit" },
		{ "VRMIMT_Unlit.Name", "EVRMImportMaterialType::VRMIMT_Unlit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRMImportMaterialType::VRMIMT_Auto", (int64)EVRMImportMaterialType::VRMIMT_Auto },
		{ "EVRMImportMaterialType::VRMIMT_MToon", (int64)EVRMImportMaterialType::VRMIMT_MToon },
		{ "EVRMImportMaterialType::VRMIMT_MToonUnlit", (int64)EVRMImportMaterialType::VRMIMT_MToonUnlit },
		{ "EVRMImportMaterialType::VRMIMT_SSS", (int64)EVRMImportMaterialType::VRMIMT_SSS },
		{ "EVRMImportMaterialType::VRMIMT_SSSProfile", (int64)EVRMImportMaterialType::VRMIMT_SSSProfile },
		{ "EVRMImportMaterialType::VRMIMT_Unlit", (int64)EVRMImportMaterialType::VRMIMT_Unlit },
		{ "EVRMImportMaterialType::VRMIMT_glTF", (int64)EVRMImportMaterialType::VRMIMT_glTF },
		{ "EVRMImportMaterialType::VRMIMT_UEFNLit", (int64)EVRMImportMaterialType::VRMIMT_UEFNLit },
		{ "EVRMImportMaterialType::VRMIMT_UEFNUnlit", (int64)EVRMImportMaterialType::VRMIMT_UEFNUnlit },
		{ "EVRMImportMaterialType::VRMIMT_UEFNSSSProfile", (int64)EVRMImportMaterialType::VRMIMT_UEFNSSSProfile },
		{ "EVRMImportMaterialType::VRMIMT_Custom", (int64)EVRMImportMaterialType::VRMIMT_Custom },
		{ "EVRMImportMaterialType::VRMIMT_MAX", (int64)EVRMImportMaterialType::VRMIMT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	"EVRMImportMaterialType",
	"EVRMImportMaterialType",
	Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType()
{
	if (!Z_Registration_Info_UEnum_EVRMImportMaterialType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMImportMaterialType.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRMImportMaterialType.InnerSingleton;
}
// End Enum EVRMImportMaterialType

// Begin Enum EVRMImportTextureCompressType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMImportTextureCompressType;
static UEnum* EVRMImportTextureCompressType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRMImportTextureCompressType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRMImportTextureCompressType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMImportTextureCompressType"));
	}
	return Z_Registration_Info_UEnum_EVRMImportTextureCompressType.OuterSingleton;
}
template<> VRM4U_API UEnum* StaticEnum<EVRMImportTextureCompressType>()
{
	return EVRMImportTextureCompressType_StaticEnum();
}
struct Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
		{ "VRMITC_Auto.DisplayName", "Auto(DXT1)" },
		{ "VRMITC_Auto.Name", "EVRMImportTextureCompressType::VRMITC_Auto" },
		{ "VRMITC_BC7.DisplayName", "BC7" },
		{ "VRMITC_BC7.Name", "EVRMImportTextureCompressType::VRMITC_BC7" },
		{ "VRMITC_DXT1.DisplayName", "DXT1" },
		{ "VRMITC_DXT1.Name", "EVRMImportTextureCompressType::VRMITC_DXT1" },
		{ "VRMITC_MAX.Name", "EVRMImportTextureCompressType::VRMITC_MAX" },
		{ "VRMITC_NoCompression.DisplayName", "NoCompression" },
		{ "VRMITC_NoCompression.Name", "EVRMImportTextureCompressType::VRMITC_NoCompression" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRMImportTextureCompressType::VRMITC_Auto", (int64)EVRMImportTextureCompressType::VRMITC_Auto },
		{ "EVRMImportTextureCompressType::VRMITC_DXT1", (int64)EVRMImportTextureCompressType::VRMITC_DXT1 },
		{ "EVRMImportTextureCompressType::VRMITC_BC7", (int64)EVRMImportTextureCompressType::VRMITC_BC7 },
		{ "EVRMImportTextureCompressType::VRMITC_NoCompression", (int64)EVRMImportTextureCompressType::VRMITC_NoCompression },
		{ "EVRMImportTextureCompressType::VRMITC_MAX", (int64)EVRMImportTextureCompressType::VRMITC_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	"EVRMImportTextureCompressType",
	"EVRMImportTextureCompressType",
	Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType()
{
	if (!Z_Registration_Info_UEnum_EVRMImportTextureCompressType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMImportTextureCompressType.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRMImportTextureCompressType.InnerSingleton;
}
// End Enum EVRMImportTextureCompressType

// Begin ScriptStruct FImportOptionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportOptionData;
class UScriptStruct* FImportOptionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportOptionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportOptionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportOptionData, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("ImportOptionData"));
	}
	return Z_Registration_Info_UScriptStruct_ImportOptionData.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FImportOptionData>()
{
	return FImportOptionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImportOptionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTranslateScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveRootBoneRotation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveRootBonePosition_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVrm10RemoveLocalRotation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVrm10UseBindToRestPose_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOriginalBoneName_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateHumanoidRenamedMesh_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateIKBone_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipPhysics_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipRetargeter_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipMorphTarget_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveBlendShapeGroupPrefix_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTwoSided_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBC7Mode_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMipmapGenerateMode_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUE5Material_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOutlineMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergePrimitive_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeVertex_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerateTriangles_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreVRMValidation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugOneBone_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugNoMesh_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugNoMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModelScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationTranslateScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRateScale;
	static void NewProp_bRemoveRootBoneRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveRootBoneRotation;
	static void NewProp_bRemoveRootBonePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveRootBonePosition;
	static void NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVrm10RemoveLocalRotation;
	static void NewProp_bVrm10UseBindToRestPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVrm10UseBindToRestPose;
	static void NewProp_bForceOriginalBoneName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOriginalBoneName;
	static void NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateHumanoidRenamedMesh;
	static void NewProp_bGenerateIKBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateIKBone;
	static void NewProp_bSkipPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipPhysics;
	static void NewProp_bSkipRetargeter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipRetargeter;
	static void NewProp_bSkipMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipMorphTarget;
	static void NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveBlendShapeGroupPrefix;
	static void NewProp_bForceOpaque_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
	static void NewProp_bForceTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTwoSided;
	static void NewProp_bBC7Mode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBC7Mode;
	static void NewProp_bMipmapGenerateMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMipmapGenerateMode;
	static void NewProp_bUseUE5Material_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUE5Material;
	static void NewProp_bGenerateOutlineMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOutlineMaterial;
	static void NewProp_bMergeMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterial;
	static void NewProp_bMergePrimitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergePrimitive;
	static void NewProp_bOptimizeVertex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeVertex;
	static void NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerateTriangles;
	static void NewProp_bIgnoreVRMValidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreVRMValidation;
	static void NewProp_bDebugOneBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugOneBone;
	static void NewProp_bDebugNoMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugNoMesh;
	static void NewProp_bDebugNoMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugNoMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportOptionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportOptionData, MaterialType), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialType_MetaData), NewProp_MaterialType_MetaData) }; // 1422341709
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale = { "ModelScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportOptionData, ModelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelScale_MetaData), NewProp_ModelScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_AnimationTranslateScale = { "AnimationTranslateScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportOptionData, AnimationTranslateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTranslateScale_MetaData), NewProp_AnimationTranslateScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_PlayRateScale = { "PlayRateScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportOptionData, PlayRateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRateScale_MetaData), NewProp_PlayRateScale_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveRootBoneRotation_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bRemoveRootBoneRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveRootBoneRotation = { "bRemoveRootBoneRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveRootBoneRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveRootBoneRotation_MetaData), NewProp_bRemoveRootBoneRotation_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveRootBonePosition_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bRemoveRootBonePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveRootBonePosition = { "bRemoveRootBonePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveRootBonePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveRootBonePosition_MetaData), NewProp_bRemoveRootBonePosition_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bVrm10RemoveLocalRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation = { "bVrm10RemoveLocalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVrm10RemoveLocalRotation_MetaData), NewProp_bVrm10RemoveLocalRotation_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10UseBindToRestPose_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bVrm10UseBindToRestPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10UseBindToRestPose = { "bVrm10UseBindToRestPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10UseBindToRestPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVrm10UseBindToRestPose_MetaData), NewProp_bVrm10UseBindToRestPose_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOriginalBoneName_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bForceOriginalBoneName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOriginalBoneName = { "bForceOriginalBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOriginalBoneName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOriginalBoneName_MetaData), NewProp_bForceOriginalBoneName_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bGenerateHumanoidRenamedMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh = { "bGenerateHumanoidRenamedMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateHumanoidRenamedMesh_MetaData), NewProp_bGenerateHumanoidRenamedMesh_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bGenerateIKBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone = { "bGenerateIKBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateIKBone_MetaData), NewProp_bGenerateIKBone_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipPhysics_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bSkipPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipPhysics = { "bSkipPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipPhysics_MetaData), NewProp_bSkipPhysics_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipRetargeter_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bSkipRetargeter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipRetargeter = { "bSkipRetargeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipRetargeter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipRetargeter_MetaData), NewProp_bSkipRetargeter_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipMorphTarget_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bSkipMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipMorphTarget = { "bSkipMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipMorphTarget_MetaData), NewProp_bSkipMorphTarget_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bRemoveBlendShapeGroupPrefix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix = { "bRemoveBlendShapeGroupPrefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveBlendShapeGroupPrefix_MetaData), NewProp_bRemoveBlendShapeGroupPrefix_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bForceOpaque = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOpaque_MetaData), NewProp_bForceOpaque_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bForceTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided = { "bForceTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTwoSided_MetaData), NewProp_bForceTwoSided_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bBC7Mode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode = { "bBC7Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBC7Mode_MetaData), NewProp_bBC7Mode_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bMipmapGenerateMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode = { "bMipmapGenerateMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMipmapGenerateMode_MetaData), NewProp_bMipmapGenerateMode_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bUseUE5Material_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bUseUE5Material = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bUseUE5Material = { "bUseUE5Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bUseUE5Material_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUE5Material_MetaData), NewProp_bUseUE5Material_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bGenerateOutlineMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial = { "bGenerateOutlineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOutlineMaterial_MetaData), NewProp_bGenerateOutlineMaterial_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bMergeMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial = { "bMergeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeMaterial_MetaData), NewProp_bMergeMaterial_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bMergePrimitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive = { "bMergePrimitive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergePrimitive_MetaData), NewProp_bMergePrimitive_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bOptimizeVertex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex = { "bOptimizeVertex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeVertex_MetaData), NewProp_bOptimizeVertex_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bRemoveDegenerateTriangles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles = { "bRemoveDegenerateTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDegenerateTriangles_MetaData), NewProp_bRemoveDegenerateTriangles_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bIgnoreVRMValidation_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bIgnoreVRMValidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bIgnoreVRMValidation = { "bIgnoreVRMValidation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bIgnoreVRMValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreVRMValidation_MetaData), NewProp_bIgnoreVRMValidation_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugOneBone_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bDebugOneBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugOneBone = { "bDebugOneBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugOneBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugOneBone_MetaData), NewProp_bDebugOneBone_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugNoMesh_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bDebugNoMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugNoMesh = { "bDebugNoMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugNoMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugNoMesh_MetaData), NewProp_bDebugNoMesh_MetaData) };
void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugNoMaterial_SetBit(void* Obj)
{
	((FImportOptionData*)Obj)->bDebugNoMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugNoMaterial = { "bDebugNoMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugNoMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugNoMaterial_MetaData), NewProp_bDebugNoMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportOptionData, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_AnimationTranslateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_PlayRateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveRootBoneRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveRootBonePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10UseBindToRestPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOriginalBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipRetargeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bSkipMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bUseUE5Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bIgnoreVRMValidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugOneBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugNoMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bDebugNoMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportOptionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"ImportOptionData",
	Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers),
	sizeof(FImportOptionData),
	alignof(FImportOptionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData()
{
	if (!Z_Registration_Info_UScriptStruct_ImportOptionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportOptionData.InnerSingleton, Z_Construct_UScriptStruct_FImportOptionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImportOptionData.InnerSingleton;
}
// End ScriptStruct FImportOptionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRMImportMaterialType_StaticEnum, TEXT("EVRMImportMaterialType"), &Z_Registration_Info_UEnum_EVRMImportMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1422341709U) },
		{ EVRMImportTextureCompressType_StaticEnum, TEXT("EVRMImportTextureCompressType"), &Z_Registration_Info_UEnum_EVRMImportTextureCompressType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1237597166U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FImportOptionData::StaticStruct, Z_Construct_UScriptStruct_FImportOptionData_Statics::NewStructOps, TEXT("ImportOptionData"), &Z_Registration_Info_UScriptStruct_ImportOptionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportOptionData), 1860667208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_422107349(TEXT("/Script/VRM4U"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

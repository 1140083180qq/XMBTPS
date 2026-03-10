// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsSyncBone.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsSyncBone() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin Enum ESyncBoneDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESyncBoneDirection;
static UEnum* ESyncBoneDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESyncBoneDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESyncBoneDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ESyncBoneDirection"));
	}
	return Z_Registration_Info_UEnum_ESyncBoneDirection.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ESyncBoneDirection>()
{
	return ESyncBoneDirection_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Comment", "// \xe4\xb8\xa1\xe6\x96\xb9\xe3\x81\xae\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\n// Apply movement in both directions\n" },
		{ "Both.Name", "ESyncBoneDirection::Both" },
		{ "Both.ToolTip", "\xe4\xb8\xa1\xe6\x96\xb9\xe3\x81\xae\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\nApply movement in both directions" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
		{ "Negative.Comment", "// \xe8\xb2\xa0\xe3\x81\xae\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\xae\xe3\x81\xbf\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\n// Apply movement only in the negative direction\n" },
		{ "Negative.Name", "ESyncBoneDirection::Negative" },
		{ "Negative.ToolTip", "\xe8\xb2\xa0\xe3\x81\xae\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\xae\xe3\x81\xbf\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\nApply movement only in the negative direction" },
		{ "None.Comment", "// \xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\n// Do not apply movement\n" },
		{ "None.Name", "ESyncBoneDirection::None" },
		{ "None.ToolTip", "\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\nDo not apply movement" },
		{ "Positive.Comment", "// \xe6\xad\xa3\xe3\x81\xae\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\xae\xe3\x81\xbf\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\n// Apply movement only in the positive direction\n" },
		{ "Positive.Name", "ESyncBoneDirection::Positive" },
		{ "Positive.ToolTip", "\xe6\xad\xa3\xe3\x81\xae\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\xae\xe3\x81\xbf\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\nApply movement only in the positive direction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESyncBoneDirection::Both", (int64)ESyncBoneDirection::Both },
		{ "ESyncBoneDirection::Positive", (int64)ESyncBoneDirection::Positive },
		{ "ESyncBoneDirection::Negative", (int64)ESyncBoneDirection::Negative },
		{ "ESyncBoneDirection::None", (int64)ESyncBoneDirection::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"ESyncBoneDirection",
	"ESyncBoneDirection",
	Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection()
{
	if (!Z_Registration_Info_UEnum_ESyncBoneDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESyncBoneDirection.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESyncBoneDirection.InnerSingleton;
}
// End Enum ESyncBoneDirection

// Begin ScriptStruct FKawaiiPhysicsSyncTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTarget;
class UScriptStruct* FKawaiiPhysicsSyncTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsSyncTarget"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTarget.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsSyncTarget>()
{
	return FKawaiiPhysicsSyncTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsShowPreviewBone_MetaData[] = {
		{ "Category", "SyncTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\xe7\x94\xa8\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe8\xa1\xa8\xe7\xa4\xba\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\n// Whether to show the preview bone\n" },
#endif
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\xe7\x94\xa8\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe8\xa1\xa8\xe7\xa4\xba\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\nWhether to show the preview bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBone_MetaData[] = {
		{ "Category", "SyncTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe3\x82\xa8\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xbf\xe4\xb8\x8a\xe3\x81\xa7\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\xe7\x94\xa8\n// For preview in the editor\n" },
#endif
		{ "EditCondition", "IsShowPreviewBone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xa8\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xbf\xe4\xb8\x8a\xe3\x81\xa7\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\xe7\x94\xa8\nFor preview in the editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationBySyncBone_MetaData[] = {
		{ "Category", "SyncTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SyncBone\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8a\xe6\x9c\x80\xe7\xb5\x82\xe7\x9a\x84\xe3\x81\xab\xe5\x8f\x97\xe3\x81\x91\xe3\x81\x9f\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\n// Final translation received from SyncBone\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncBone\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8a\xe6\x9c\x80\xe7\xb5\x82\xe7\x9a\x84\xe3\x81\xab\xe5\x8f\x97\xe3\x81\x91\xe3\x81\x9f\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\nFinal translation received from SyncBone" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleByLengthRateCurve_MetaData[] = {
		{ "Category", "SyncTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa6\xe5\x90\x88\xe3\x81\x84\n// Degree to apply translation (how much movement is applied)\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa6\xe5\x90\x88\xe3\x81\x84\nDegree to apply translation (how much movement is applied)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthRateFromSyncTargetRoot_MetaData[] = {
		{ "Category", "SyncTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SyncTargetRoot\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe5\x89\xb2\xe5\x90\x88\n// Length rate from TargetRoot for the target bone\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncTargetRoot\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe5\x89\xb2\xe5\x90\x88\nLength rate from TargetRoot for the target bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyBoneIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x81\xa9\xe5\xbf\x9c\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xaeModifyBone\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bIndex\n// Index in ModifyBone for the target bone\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\xa9\xe5\xbf\x9c\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xaeModifyBone\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bIndex\nIndex in ModifyBone for the target bone" },
#endif
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_IsShowPreviewBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsShowPreviewBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationBySyncBone;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleByLengthRateCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthRateFromSyncTargetRoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModifyBoneIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsSyncTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_IsShowPreviewBone_SetBit(void* Obj)
{
	((FKawaiiPhysicsSyncTarget*)Obj)->IsShowPreviewBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_IsShowPreviewBone = { "IsShowPreviewBone", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysicsSyncTarget), &Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_IsShowPreviewBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsShowPreviewBone_MetaData), NewProp_IsShowPreviewBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_PreviewBone = { "PreviewBone", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncTarget, PreviewBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBone_MetaData), NewProp_PreviewBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_TranslationBySyncBone = { "TranslationBySyncBone", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncTarget, TranslationBySyncBone), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationBySyncBone_MetaData), NewProp_TranslationBySyncBone_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_ScaleByLengthRateCurve = { "ScaleByLengthRateCurve", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncTarget, ScaleByLengthRateCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleByLengthRateCurve_MetaData), NewProp_ScaleByLengthRateCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_LengthRateFromSyncTargetRoot = { "LengthRateFromSyncTargetRoot", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncTarget, LengthRateFromSyncTargetRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthRateFromSyncTargetRoot_MetaData), NewProp_LengthRateFromSyncTargetRoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_ModifyBoneIndex = { "ModifyBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncTarget, ModifyBoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyBoneIndex_MetaData), NewProp_ModifyBoneIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_IsShowPreviewBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_PreviewBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_TranslationBySyncBone,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_ScaleByLengthRateCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_LengthRateFromSyncTargetRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewProp_ModifyBoneIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"KawaiiPhysicsSyncTarget",
	Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::PropPointers),
	sizeof(FKawaiiPhysicsSyncTarget),
	alignof(FKawaiiPhysicsSyncTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTarget.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTarget.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysicsSyncTarget

// Begin ScriptStruct FKawaiiPhysicsSyncTargetRoot
static_assert(std::is_polymorphic<FKawaiiPhysicsSyncTargetRoot>() == std::is_polymorphic<FKawaiiPhysicsSyncTarget>(), "USTRUCT FKawaiiPhysicsSyncTargetRoot cannot be polymorphic unless super FKawaiiPhysicsSyncTarget is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTargetRoot;
class UScriptStruct* FKawaiiPhysicsSyncTargetRoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTargetRoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTargetRoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsSyncTargetRoot"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTargetRoot.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsSyncTargetRoot>()
{
	return FKawaiiPhysicsSyncTargetRoot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "SyncTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x81\xa9\xe7\x94\xa8\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\n// Target bone to apply to\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\xa9\xe7\x94\xa8\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\nTarget bone to apply to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChildBones_MetaData[] = {
		{ "Category", "SyncTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe3\x81\x93\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\xad\x90\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x82\xe3\x81\x99\xe3\x81\xb9\xe3\x81\xa6\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\n// Whether to include all child bones of this bone\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x81\x93\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\xad\x90\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x82\xe3\x81\x99\xe3\x81\xb9\xe3\x81\xa6\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\nWhether to include all child bones of this bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurveByBoneLengthRate_MetaData[] = {
		{ "Category", "SyncBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TargetRoot\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe5\x89\xb2\xe5\x90\x88\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6SyncBone\xe3\x81\xae\xe5\xbd\xb1\xe9\x9f\xbf\xe5\xba\xa6\xe3\x81\xab\xe3\x82\xb9\xe3\x82\xb1\xe3\x83\xbc\xe3\x83\xab\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xef\xbc\x88X: LengthRate\xe3\x80\x81Y: Scale\xef\xbc\x89\n// Curve that scales SyncBone's influence based on length rate from TargetRoot (X: Length, Y: Scale)\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TargetRoot\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe5\x89\xb2\xe5\x90\x88\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6SyncBone\xe3\x81\xae\xe5\xbd\xb1\xe9\x9f\xbf\xe5\xba\xa6\xe3\x81\xab\xe3\x82\xb9\xe3\x82\xb1\xe3\x83\xbc\xe3\x83\xab\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xef\xbc\x88X: LengthRate\xe3\x80\x81Y: Scale\xef\xbc\x89\nCurve that scales SyncBone's influence based on length rate from TargetRoot (X: Length, Y: Scale)" },
#endif
		{ "XAxisName", "LengthRate" },
		{ "YAxisName", "Scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildTargets_MetaData[] = {
		{ "Category", "SyncBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x81\xa9\xe7\x94\xa8\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe5\xad\x90\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\n// Child bones that are targets for application\n" },
#endif
		{ "DisplayName", "ChildTargets(Preview)" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
		{ "TitleProperty", "PreviewBone" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\xa9\xe7\x94\xa8\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe5\xad\x90\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\nChild bones that are targets for application" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static void NewProp_bIncludeChildBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleCurveByBoneLengthRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsSyncTargetRoot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncTargetRoot, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) }; // 4218265988
void Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_bIncludeChildBones_SetBit(void* Obj)
{
	((FKawaiiPhysicsSyncTargetRoot*)Obj)->bIncludeChildBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_bIncludeChildBones = { "bIncludeChildBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysicsSyncTargetRoot), &Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_bIncludeChildBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeChildBones_MetaData), NewProp_bIncludeChildBones_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_ScaleCurveByBoneLengthRate = { "ScaleCurveByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncTargetRoot, ScaleCurveByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCurveByBoneLengthRate_MetaData), NewProp_ScaleCurveByBoneLengthRate_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_ChildTargets_Inner = { "ChildTargets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget, METADATA_PARAMS(0, nullptr) }; // 670207634
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_ChildTargets = { "ChildTargets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncTargetRoot, ChildTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildTargets_MetaData), NewProp_ChildTargets_MetaData) }; // 670207634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_bIncludeChildBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_ScaleCurveByBoneLengthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_ChildTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewProp_ChildTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget,
	&NewStructOps,
	"KawaiiPhysicsSyncTargetRoot",
	Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::PropPointers),
	sizeof(FKawaiiPhysicsSyncTargetRoot),
	alignof(FKawaiiPhysicsSyncTargetRoot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTargetRoot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTargetRoot.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTargetRoot.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysicsSyncTargetRoot

// Begin ScriptStruct FKawaiiPhysicsSyncBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncBone;
class UScriptStruct* FKawaiiPhysicsSyncBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsSyncBone"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncBone.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsSyncBone>()
{
	return FKawaiiPhysicsSyncBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SyncBone\xef\xbc\x9a\xe5\x90\x8c\xe6\x9c\x9f\xe5\x85\x83\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x83\xbb\xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n// \xe3\x82\xb9\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe8\xb6\xb3\xe3\x81\xaa\xe3\x81\xa9\xe3\x82\x92\xe8\xb2\xab\xe9\x80\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xae\xe3\x82\x92\xe9\x98\xb2\xe3\x81\x90\xe3\x81\xae\xe3\x81\xab\xe5\xbd\xb9\xe7\xab\x8b\xe3\x81\xa1\xe3\x81\xbe\xe3\x81\x99 \n// Applies the movement and rotation of the sync source bone to the bone under physics control. \n// Helps prevent skirts from penetrating legs, etc.\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncBone\xef\xbc\x9a\xe5\x90\x8c\xe6\x9c\x9f\xe5\x85\x83\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x83\xbb\xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x82\xb9\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe8\xb6\xb3\xe3\x81\xaa\xe3\x81\xa9\xe3\x82\x92\xe8\xb2\xab\xe9\x80\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xae\xe3\x82\x92\xe9\x98\xb2\xe3\x81\x90\xe3\x81\xae\xe3\x81\xab\xe5\xbd\xb9\xe7\xab\x8b\xe3\x81\xa1\xe3\x81\xbe\xe3\x81\x99\nApplies the movement and rotation of the sync source bone to the bone under physics control.\nHelps prevent skirts from penetrating legs, etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "SyncBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x90\x8c\xe6\x9c\x9f\xe5\x85\x83\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\n// Source bone to sync from\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x8c\xe6\x9c\x9f\xe5\x85\x83\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\nSource bone to sync from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoots_MetaData[] = {
		{ "Category", "SyncBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x81\xa9\xe7\x94\xa8\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe9\x81\xa9\xe7\x94\xa8\xe5\xba\xa6\n// Target bones and their application alpha\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
		{ "TitleProperty", "{Bone}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\xa9\xe7\x94\xa8\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe9\x81\xa9\xe7\x94\xa8\xe5\xba\xa6\nTarget bones and their application alpha" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalScale_MetaData[] = {
		{ "Category", "SyncBone" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\xa8\xe4\xbd\x93\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\xae\xe5\xba\xa6\xe5\x90\x88\xe3\x81\x84\n// Overall translation application amount\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xa8\xe4\xbd\x93\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\xae\xe5\xba\xa6\xe5\x90\x88\xe3\x81\x84\nOverall translation application amount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurveByDeltaDistance_MetaData[] = {
		{ "Category", "SyncBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SyncBone\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\n// \xe5\x90\x84Target\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe3\x81\xae\xe8\xa3\x9c\xe6\xad\xa3\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xab\xe3\x82\xb9\xe3\x82\xb1\xe3\x83\xbc\xe3\x83\xab\xe3\x82\x92\xe3\x81\x8b\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xef\xbc\x88X: \xe7\xa7\xbb\xe5\x8b\x95\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x80\x81Y: \xe3\x82\xb9\xe3\x82\xb1\xe3\x83\xbc\xe3\x83\xab\xef\xbc\x89\n// Curve that scales correction for each Target based on SyncBone's movement distance (X: Distance, Y: Scale)\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncBone\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\n\xe5\x90\x84Target\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe3\x81\xae\xe8\xa3\x9c\xe6\xad\xa3\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xab\xe3\x82\xb9\xe3\x82\xb1\xe3\x83\xbc\xe3\x83\xab\xe3\x82\x92\xe3\x81\x8b\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xef\xbc\x88X: \xe7\xa7\xbb\xe5\x8b\x95\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x80\x81Y: \xe3\x82\xb9\xe3\x82\xb1\xe3\x83\xbc\xe3\x83\xab\xef\xbc\x89\nCurve that scales correction for each Target based on SyncBone's movement distance (X: Distance, Y: Scale)" },
#endif
		{ "XAxisName", "Distance" },
		{ "YAxisName", "Scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyDirectionX_MetaData[] = {
		{ "Category", "SyncBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X\xe8\xbb\xb8\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe6\x96\xb9\xe5\x90\x91\n// Direction to apply movement on the X axis\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X\xe8\xbb\xb8\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe6\x96\xb9\xe5\x90\x91\nDirection to apply movement on the X axis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyDirectionY_MetaData[] = {
		{ "Category", "SyncBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Y\xe8\xbb\xb8\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe6\x96\xb9\xe5\x90\x91\n// Direction to apply movement on the Y axis\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Y\xe8\xbb\xb8\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe6\x96\xb9\xe5\x90\x91\nDirection to apply movement on the Y axis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyDirectionZ_MetaData[] = {
		{ "Category", "SyncBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Z\xe8\xbb\xb8\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe6\x96\xb9\xe5\x90\x91\n// Direction to apply movement on the Z axis\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Z\xe8\xbb\xb8\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe6\x96\xb9\xe5\x90\x91\nDirection to apply movement on the Z axis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPoseLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SyncBone\xe3\x81\xae\xe5\x88\x9d\xe6\x9c\x9f\xe5\xba\xa7\xe6\xa8\x99\n// Initial pose location of the SyncBone\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncBone\xe3\x81\xae\xe5\x88\x9d\xe6\x9c\x9f\xe5\xba\xa7\xe6\xa8\x99\nInitial pose location of the SyncBone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDistanceAttenuation_MetaData[] = {
		{ "Category", "SyncBone|Distance Attenuation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SyncBone\xe3\x81\xa8\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6Target\xe3\x81\xb8\xe3\x81\xae\xe9\x81\xa9\xe7\x94\xa8\xe9\x87\x8f(Alpha)\xe3\x82\x92\xe6\xb8\x9b\xe8\xa1\xb0\xe3\x81\x95\xe3\x81\x9b\xe3\x82\x8b\xe8\xa8\xad\xe5\xae\x9a\n// Attenuation of application amount(Alpha) based on distance from SyncBone to each Target\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncBone\xe3\x81\xa8\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6Target\xe3\x81\xb8\xe3\x81\xae\xe9\x81\xa9\xe7\x94\xa8\xe9\x87\x8f(Alpha)\xe3\x82\x92\xe6\xb8\x9b\xe8\xa1\xb0\xe3\x81\x95\xe3\x81\x9b\xe3\x82\x8b\xe8\xa8\xad\xe5\xae\x9a\nAttenuation of application amount(Alpha) based on distance from SyncBone to each Target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationInnerRadius_MetaData[] = {
		{ "Category", "SyncBone|Distance Attenuation" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\x85\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x9a\xe3\x81\x93\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe4\xbb\xa5\xe5\x86\x85\xe3\x81\xaf\xe6\xb8\x9b\xe8\xa1\xb0\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\n// Inner radius: no attenuation within this radius\n" },
#endif
		{ "EditCondition", "bEnableDistanceAttenuation" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x85\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x9a\xe3\x81\x93\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe4\xbb\xa5\xe5\x86\x85\xe3\x81\xaf\xe6\xb8\x9b\xe8\xa1\xb0\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\nInner radius: no attenuation within this radius" },
#endif
		{ "UIMin", "0.0" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOuterRadius_MetaData[] = {
		{ "Category", "SyncBone|Distance Attenuation" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\x96\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x9a\xe3\x81\x93\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe4\xbb\xa5\xe4\xb8\x8a\xe3\x81\xaf\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb8\x9b\xe8\xa1\xb0\xe9\x87\x8f\xe3\x81\x8c\xe3\x81\x8b\xe3\x81\x8b\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\n// Outer radius: maximum attenuation is applied outside this radius\n" },
#endif
		{ "EditCondition", "bEnableDistanceAttenuation" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x9a\xe3\x81\x93\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe4\xbb\xa5\xe4\xb8\x8a\xe3\x81\xaf\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb8\x9b\xe8\xa1\xb0\xe9\x87\x8f\xe3\x81\x8c\xe3\x81\x8b\xe3\x81\x8b\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\nOuter radius: maximum attenuation is applied outside this radius" },
#endif
		{ "UIMin", "0.0" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRate_MetaData[] = {
		{ "Category", "SyncBone|Distance Attenuation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe6\xb8\x9b\xe8\xa1\xb0\xe9\x87\x8f(0\xe4\xbb\xa5\xe4\xb8\x8a)\xef\xbc\x9a""0=\xe6\xb8\x9b\xe8\xa1\xb0\xe3\x81\xaa\xe3\x81\x97, 1=\xe6\xb8\x9b\xe8\xa1\xb0MAX\xef\xbc\x88SyncBone\xe3\x81\xae\xe9\x81\xa9\xe7\x94\xa8\xe9\x87\x8f\xe3\x81\x8c""0\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8b\xef\xbc\x89\n// Max attenuation amount (>=0): 0=no attenuation, 1=max attenuation (SyncBone application amount becomes 0)\n" },
#endif
		{ "EditCondition", "bEnableDistanceAttenuation" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb8\x9b\xe8\xa1\xb0\xe9\x87\x8f(0\xe4\xbb\xa5\xe4\xb8\x8a)\xef\xbc\x9a""0=\xe6\xb8\x9b\xe8\xa1\xb0\xe3\x81\xaa\xe3\x81\x97, 1=\xe6\xb8\x9b\xe8\xa1\xb0MAX\xef\xbc\x88SyncBone\xe3\x81\xae\xe9\x81\xa9\xe7\x94\xa8\xe9\x87\x8f\xe3\x81\x8c""0\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8b\xef\xbc\x89\nMax attenuation amount (>=0): 0=no attenuation, 1=max attenuation (SyncBone application amount becomes 0)" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaDistance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SyncBone\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe8\xb7\x9d\xe9\x9b\xa2\n// SyncBone movement distance\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncBone\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe8\xb7\x9d\xe9\x9b\xa2\nSyncBone movement distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaledDeltaDistance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SyncBone\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe8\xb7\x9d\xe9\x9b\xa2(Alpha, Scale\xe8\xa8\x88\xe7\xae\x97\xe5\xbe\x8c)\n// SyncBone movement distance (after Alpha and Scale calculations)\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSyncBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncBone\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe8\xb7\x9d\xe9\x9b\xa2(Alpha, Scale\xe8\xa8\x88\xe7\xae\x97\xe5\xbe\x8c)\nSyncBone movement distance (after Alpha and Scale calculations)" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRoots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetRoots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleCurveByDeltaDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyDirectionX_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyDirectionX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyDirectionY_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyDirectionY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyDirectionZ_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyDirectionZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPoseLocation;
	static void NewProp_bEnableDistanceAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDistanceAttenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationInnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationOuterRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRate;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaledDeltaDistance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsSyncBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_TargetRoots_Inner = { "TargetRoots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot, METADATA_PARAMS(0, nullptr) }; // 273442109
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_TargetRoots = { "TargetRoots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, TargetRoots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoots_MetaData), NewProp_TargetRoots_MetaData) }; // 273442109
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_GlobalScale = { "GlobalScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, GlobalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalScale_MetaData), NewProp_GlobalScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ScaleCurveByDeltaDistance = { "ScaleCurveByDeltaDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, ScaleCurveByDeltaDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCurveByDeltaDistance_MetaData), NewProp_ScaleCurveByDeltaDistance_MetaData) }; // 762678829
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionX = { "ApplyDirectionX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, ApplyDirectionX), Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyDirectionX_MetaData), NewProp_ApplyDirectionX_MetaData) }; // 699207844
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionY = { "ApplyDirectionY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, ApplyDirectionY), Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyDirectionY_MetaData), NewProp_ApplyDirectionY_MetaData) }; // 699207844
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionZ = { "ApplyDirectionZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, ApplyDirectionZ), Z_Construct_UEnum_KawaiiPhysics_ESyncBoneDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyDirectionZ_MetaData), NewProp_ApplyDirectionZ_MetaData) }; // 699207844
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_InitialPoseLocation = { "InitialPoseLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, InitialPoseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPoseLocation_MetaData), NewProp_InitialPoseLocation_MetaData) };
void Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_bEnableDistanceAttenuation_SetBit(void* Obj)
{
	((FKawaiiPhysicsSyncBone*)Obj)->bEnableDistanceAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_bEnableDistanceAttenuation = { "bEnableDistanceAttenuation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysicsSyncBone), &Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_bEnableDistanceAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDistanceAttenuation_MetaData), NewProp_bEnableDistanceAttenuation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_AttenuationInnerRadius = { "AttenuationInnerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, AttenuationInnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationInnerRadius_MetaData), NewProp_AttenuationInnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_AttenuationOuterRadius = { "AttenuationOuterRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, AttenuationOuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationOuterRadius_MetaData), NewProp_AttenuationOuterRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_MaxAttenuationRate = { "MaxAttenuationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, MaxAttenuationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttenuationRate_MetaData), NewProp_MaxAttenuationRate_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_DeltaDistance = { "DeltaDistance", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, DeltaDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaDistance_MetaData), NewProp_DeltaDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ScaledDeltaDistance = { "ScaledDeltaDistance", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSyncBone, ScaledDeltaDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaledDeltaDistance_MetaData), NewProp_ScaledDeltaDistance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_TargetRoots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_TargetRoots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_GlobalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ScaleCurveByDeltaDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionX_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionY_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionZ_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ApplyDirectionZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_InitialPoseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_bEnableDistanceAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_AttenuationInnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_AttenuationOuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_MaxAttenuationRate,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_DeltaDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewProp_ScaledDeltaDistance,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"KawaiiPhysicsSyncBone",
	Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::PropPointers),
	sizeof(FKawaiiPhysicsSyncBone),
	alignof(FKawaiiPhysicsSyncBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncBone.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncBone.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysicsSyncBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESyncBoneDirection_StaticEnum, TEXT("ESyncBoneDirection"), &Z_Registration_Info_UEnum_ESyncBoneDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 699207844U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKawaiiPhysicsSyncTarget::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics::NewStructOps, TEXT("KawaiiPhysicsSyncTarget"), &Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsSyncTarget), 670207634U) },
		{ FKawaiiPhysicsSyncTargetRoot::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics::NewStructOps, TEXT("KawaiiPhysicsSyncTargetRoot"), &Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncTargetRoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsSyncTargetRoot), 273442109U) },
		{ FKawaiiPhysicsSyncBone::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics::NewStructOps, TEXT("KawaiiPhysicsSyncBone"), &Z_Registration_Info_UScriptStruct_KawaiiPhysicsSyncBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsSyncBone), 672611600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_4085741919(TEXT("/Script/KawaiiPhysics"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

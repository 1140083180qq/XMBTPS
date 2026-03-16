// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsBoneConstraintsDataAsset.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsBoneConstraintsDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_NoRegister();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FModifyBoneConstraintData();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FRegexPatternBoneSet();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin ScriptStruct FModifyBoneConstraintData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyBoneConstraintData;
class UScriptStruct* FModifyBoneConstraintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyBoneConstraintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyBoneConstraintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyBoneConstraintData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ModifyBoneConstraintData"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyBoneConstraintData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FModifyBoneConstraintData>()
{
	return FModifyBoneConstraintData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct representing the data for modifying bone constraints in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing the data for modifying bone constraints in KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the first bone (deprecated) */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the first bone (deprecated)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName2_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the second bone (deprecated) */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the second bone (deprecated)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneReference1_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the first bone */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the first bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneReference2_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the second bone */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the second bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCompliance_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to override the compliance type */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to override the compliance type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComplianceType_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The compliance type to use if overriding */" },
#endif
		{ "EditCondition", "bOverrideCompliance" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The compliance type to use if overriding" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName1;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReference1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReference2;
	static void NewProp_bOverrideCompliance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCompliance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComplianceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComplianceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyBoneConstraintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_BoneName1 = { "BoneName1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraintData, BoneName1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName1_MetaData), NewProp_BoneName1_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_BoneName2 = { "BoneName2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraintData, BoneName2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName2_MetaData), NewProp_BoneName2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_BoneReference1 = { "BoneReference1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraintData, BoneReference1), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneReference1_MetaData), NewProp_BoneReference1_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_BoneReference2 = { "BoneReference2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraintData, BoneReference2), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneReference2_MetaData), NewProp_BoneReference2_MetaData) }; // 4218265988
void Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_bOverrideCompliance_SetBit(void* Obj)
{
	((FModifyBoneConstraintData*)Obj)->bOverrideCompliance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_bOverrideCompliance = { "bOverrideCompliance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModifyBoneConstraintData), &Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_bOverrideCompliance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCompliance_MetaData), NewProp_bOverrideCompliance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_ComplianceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_ComplianceType = { "ComplianceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraintData, ComplianceType), Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComplianceType_MetaData), NewProp_ComplianceType_MetaData) }; // 3801623715
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_BoneName1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_BoneName2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_BoneReference1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_BoneReference2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_bOverrideCompliance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_ComplianceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_ComplianceType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"ModifyBoneConstraintData",
	Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::PropPointers),
	sizeof(FModifyBoneConstraintData),
	alignof(FModifyBoneConstraintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifyBoneConstraintData()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyBoneConstraintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyBoneConstraintData.InnerSingleton, Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModifyBoneConstraintData.InnerSingleton;
}
// End ScriptStruct FModifyBoneConstraintData

// Begin ScriptStruct FRegexPatternBoneSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegexPatternBoneSet;
class UScriptStruct* FRegexPatternBoneSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegexPatternBoneSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegexPatternBoneSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegexPatternBoneSet, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("RegexPatternBoneSet"));
	}
	return Z_Registration_Info_UScriptStruct_RegexPatternBoneSet.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FRegexPatternBoneSet>()
{
	return FRegexPatternBoneSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct representing a set of regex patterns for bones in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing a set of regex patterns for bones in KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegexPatternBone1_MetaData[] = {
		{ "Category", "Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Regex pattern for the first bone */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regex pattern for the first bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegexPatternBone2_MetaData[] = {
		{ "Category", "Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Regex pattern for the second bone */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regex pattern for the second bone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RegexPatternBone1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RegexPatternBone2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegexPatternBoneSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::NewProp_RegexPatternBone1 = { "RegexPatternBone1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegexPatternBoneSet, RegexPatternBone1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegexPatternBone1_MetaData), NewProp_RegexPatternBone1_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::NewProp_RegexPatternBone2 = { "RegexPatternBone2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegexPatternBoneSet, RegexPatternBone2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegexPatternBone2_MetaData), NewProp_RegexPatternBone2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::NewProp_RegexPatternBone1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::NewProp_RegexPatternBone2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"RegexPatternBoneSet",
	Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::PropPointers),
	sizeof(FRegexPatternBoneSet),
	alignof(FRegexPatternBoneSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegexPatternBoneSet()
{
	if (!Z_Registration_Info_UScriptStruct_RegexPatternBoneSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegexPatternBoneSet.InnerSingleton, Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RegexPatternBoneSet.InnerSingleton;
}
// End ScriptStruct FRegexPatternBoneSet

// Begin Class UKawaiiPhysicsBoneConstraintsDataAsset Function ApplyRegex
#if WITH_EDITOR
struct Z_Construct_UFunction_UKawaiiPhysicsBoneConstraintsDataAsset_ApplyRegex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies regex patterns to the bone constraints */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies regex patterns to the bone constraints" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsBoneConstraintsDataAsset_ApplyRegex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset, nullptr, "ApplyRegex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsBoneConstraintsDataAsset_ApplyRegex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsBoneConstraintsDataAsset_ApplyRegex_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UKawaiiPhysicsBoneConstraintsDataAsset_ApplyRegex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsBoneConstraintsDataAsset_ApplyRegex_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UKawaiiPhysicsBoneConstraintsDataAsset::execApplyRegex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyRegex();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UKawaiiPhysicsBoneConstraintsDataAsset Function ApplyRegex

// Begin Class UKawaiiPhysicsBoneConstraintsDataAsset
void UKawaiiPhysicsBoneConstraintsDataAsset::StaticRegisterNativesUKawaiiPhysicsBoneConstraintsDataAsset()
{
#if WITH_EDITOR
	UClass* Class = UKawaiiPhysicsBoneConstraintsDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRegex", &UKawaiiPhysicsBoneConstraintsDataAsset::execApplyRegex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKawaiiPhysicsBoneConstraintsDataAsset);
UClass* Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_NoRegister()
{
	return UKawaiiPhysicsBoneConstraintsDataAsset::StaticClass();
}
struct Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data asset for managing bone constraints in KawaiiPhysics.\n */" },
#endif
		{ "IncludePath", "KawaiiPhysicsBoneConstraintsDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data asset for managing bone constraints in KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneConstraintsData_MetaData[] = {
		{ "Category", "Bone Constraint (Experimental)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of bone constraint data */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
		{ "TitleProperty", "{BoneReference1} - {BoneReference2}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of bone constraint data" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegexPatternList_MetaData[] = {
		{ "Category", "Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of regex patterns for bones */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of regex patterns for bones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeleton_MetaData[] = {
		{ "Category", "Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Preview skeleton for editor */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Preview skeleton for editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBoneList_MetaData[] = {
		{ "Category", "Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of preview bones */" },
#endif
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of preview bones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBoneListString_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** String representation of the preview bone list */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsBoneConstraintsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String representation of the preview bone list" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneConstraintsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneConstraintsData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegexPatternList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegexPatternList;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewBoneList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewBoneList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewBoneListString;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKawaiiPhysicsBoneConstraintsDataAsset_ApplyRegex, "ApplyRegex" }, // 1171597463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysicsBoneConstraintsDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_BoneConstraintsData_Inner = { "BoneConstraintsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifyBoneConstraintData, METADATA_PARAMS(0, nullptr) }; // 1927629253
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_BoneConstraintsData = { "BoneConstraintsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsBoneConstraintsDataAsset, BoneConstraintsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneConstraintsData_MetaData), NewProp_BoneConstraintsData_MetaData) }; // 1927629253
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_RegexPatternList_Inner = { "RegexPatternList", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRegexPatternBoneSet, METADATA_PARAMS(0, nullptr) }; // 1507721919
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_RegexPatternList = { "RegexPatternList", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsBoneConstraintsDataAsset, RegexPatternList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegexPatternList_MetaData), NewProp_RegexPatternList_MetaData) }; // 1507721919
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_PreviewSkeleton = { "PreviewSkeleton", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsBoneConstraintsDataAsset, PreviewSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSkeleton_MetaData), NewProp_PreviewSkeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_PreviewBoneList_Inner = { "PreviewBoneList", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_PreviewBoneList = { "PreviewBoneList", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsBoneConstraintsDataAsset, PreviewBoneList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBoneList_MetaData), NewProp_PreviewBoneList_MetaData) }; // 4218265988
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_PreviewBoneListString = { "PreviewBoneListString", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsBoneConstraintsDataAsset, PreviewBoneListString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBoneListString_MetaData), NewProp_PreviewBoneListString_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_BoneConstraintsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_BoneConstraintsData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_RegexPatternList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_RegexPatternList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_PreviewSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_PreviewBoneList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_PreviewBoneList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::NewProp_PreviewBoneListString,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UKawaiiPhysicsBoneConstraintsDataAsset, IBoneReferenceSkeletonProvider), false },  // 2882411204
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::ClassParams = {
	&UKawaiiPhysicsBoneConstraintsDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset()
{
	if (!Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.OuterSingleton, Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UClass* StaticClass<UKawaiiPhysicsBoneConstraintsDataAsset>()
{
	return UKawaiiPhysicsBoneConstraintsDataAsset::StaticClass();
}
UKawaiiPhysicsBoneConstraintsDataAsset::UKawaiiPhysicsBoneConstraintsDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKawaiiPhysicsBoneConstraintsDataAsset);
UKawaiiPhysicsBoneConstraintsDataAsset::~UKawaiiPhysicsBoneConstraintsDataAsset() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UKawaiiPhysicsBoneConstraintsDataAsset)
// End Class UKawaiiPhysicsBoneConstraintsDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModifyBoneConstraintData::StaticStruct, Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewStructOps, TEXT("ModifyBoneConstraintData"), &Z_Registration_Info_UScriptStruct_ModifyBoneConstraintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyBoneConstraintData), 1927629253U) },
		{ FRegexPatternBoneSet::StaticStruct, Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::NewStructOps, TEXT("RegexPatternBoneSet"), &Z_Registration_Info_UScriptStruct_RegexPatternBoneSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegexPatternBoneSet), 1507721919U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset, UKawaiiPhysicsBoneConstraintsDataAsset::StaticClass, TEXT("UKawaiiPhysicsBoneConstraintsDataAsset"), &Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKawaiiPhysicsBoneConstraintsDataAsset), 923102339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h_2196294898(TEXT("/Script/KawaiiPhysics"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

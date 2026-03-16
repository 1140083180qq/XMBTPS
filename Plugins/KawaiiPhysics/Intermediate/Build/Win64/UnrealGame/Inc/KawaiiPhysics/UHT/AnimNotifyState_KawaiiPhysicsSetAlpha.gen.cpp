// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_KawaiiPhysicsSetAlpha() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_NoRegister();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin Enum EKawaiiPhysicsSetAlphaSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKawaiiPhysicsSetAlphaSource;
static UEnum* EKawaiiPhysicsSetAlphaSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKawaiiPhysicsSetAlphaSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKawaiiPhysicsSetAlphaSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EKawaiiPhysicsSetAlphaSource"));
	}
	return Z_Registration_Info_UEnum_EKawaiiPhysicsSetAlphaSource.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EKawaiiPhysicsSetAlphaSource>()
{
	return EKawaiiPhysicsSetAlphaSource_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Constant.Comment", "/** Use a constant value. */" },
		{ "Constant.Name", "EKawaiiPhysicsSetAlphaSource::Constant" },
		{ "Constant.ToolTip", "Use a constant value." },
		{ "Curve.Comment", "/** Use a float curve from the playing animation. */" },
		{ "Curve.Name", "EKawaiiPhysicsSetAlphaSource::Curve" },
		{ "Curve.ToolTip", "Use a float curve from the playing animation." },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKawaiiPhysicsSetAlphaSource::Curve", (int64)EKawaiiPhysicsSetAlphaSource::Curve },
		{ "EKawaiiPhysicsSetAlphaSource::Constant", (int64)EKawaiiPhysicsSetAlphaSource::Constant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"EKawaiiPhysicsSetAlphaSource",
	"EKawaiiPhysicsSetAlphaSource",
	Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource()
{
	if (!Z_Registration_Info_UEnum_EKawaiiPhysicsSetAlphaSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKawaiiPhysicsSetAlphaSource.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKawaiiPhysicsSetAlphaSource.InnerSingleton;
}
// End Enum EKawaiiPhysicsSetAlphaSource

// Begin Class UAnimNotifyState_KawaiiPhysicsSetAlpha
void UAnimNotifyState_KawaiiPhysicsSetAlpha::StaticRegisterNativesUAnimNotifyState_KawaiiPhysicsSetAlpha()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_KawaiiPhysicsSetAlpha);
UClass* Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_NoRegister()
{
	return UAnimNotifyState_KawaiiPhysicsSetAlpha::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ABP\xe3\x81\xab\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9fKawaiiPhysics\xe3\x83\x8e\xe3\x83\xbc\xe3\x83\x89\xe3\x81\xae""Alpha\xe3\x82\x92NotifyState\xe5\x8c\xba\xe9\x96\x93\xe4\xb8\xad\xe3\x81\xa0\xe3\x81\x91\xe4\xb8\x8a\xe6\x9b\xb8\xe3\x81\x8d\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n * \xe7\x9b\xae\xe7\x9a\x84: \xe3\x82\xa2\xe3\x83\x8b\xe3\x83\xa1\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xa7KawaiiPhysics\xe3\x81\xae\xe3\x81\x8b\xe3\x81\x8b\xe3\x82\x8a\xe5\x85\xb7\xe5\x90\x88\xe3\x82\x92\xe3\x82\xa2\xe3\x83\x8b\xe3\x83\xa1\xe4\xb8\xad\xe3\x81\xab\xe8\xaa\xbf\xe6\x95\xb4\xe3\x81\x99\xe3\x82\x8b\n */" },
#endif
		{ "DisplayName", "KawaiiPhyiscs: Set Alpha (Override)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ABP\xe3\x81\xab\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9fKawaiiPhysics\xe3\x83\x8e\xe3\x83\xbc\xe3\x83\x89\xe3\x81\xae""Alpha\xe3\x82\x92NotifyState\xe5\x8c\xba\xe9\x96\x93\xe4\xb8\xad\xe3\x81\xa0\xe3\x81\x91\xe4\xb8\x8a\xe6\x9b\xb8\xe3\x81\x8d\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe7\x9b\xae\xe7\x9a\x84: \xe3\x82\xa2\xe3\x83\x8b\xe3\x83\xa1\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xa7KawaiiPhysics\xe3\x81\xae\xe3\x81\x8b\xe3\x81\x8b\xe3\x82\x8a\xe5\x85\xb7\xe5\x90\x88\xe3\x82\x92\xe3\x82\xa2\xe3\x83\x8b\xe3\x83\xa1\xe4\xb8\xad\xe3\x81\xab\xe8\xaa\xbf\xe6\x95\xb4\xe3\x81\x99\xe3\x82\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Alpha" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Alpha\xe3\x81\xae\xe5\x8f\x96\xe5\xbe\x97\xe5\x85\x83 */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alpha\xe3\x81\xae\xe5\x8f\x96\xe5\xbe\x97\xe5\x85\x83" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
		{ "Category", "Alpha" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source=Curve\xe3\x81\xae\xe6\x99\x82\xe3\x81\xab\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe5\x90\x8d */" },
#endif
		{ "EditCondition", "Source == EKawaiiPhysicsSetAlphaSource::Curve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source=Curve\xe3\x81\xae\xe6\x99\x82\xe3\x81\xab\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe5\x90\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAlphaIfNoCurve_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\x8c\xe7\x84\xa1\xe3\x81\x84/\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xaa\xe3\x81\x84\xe6\x99\x82\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x90\xe3\x83\x83\xe3\x82\xaf\xe5\x80\xa4 */" },
#endif
		{ "EditCondition", "Source == EKawaiiPhysicsSetAlphaSource::Curve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\x8c\xe7\x84\xa1\xe3\x81\x84/\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xaa\xe3\x81\x84\xe6\x99\x82\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x90\xe3\x83\x83\xe3\x82\xaf\xe5\x80\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source=Constant\xe3\x81\xae\xe6\x99\x82\xe3\x81\xab\xe4\xbd\xbf\xe3\x81\x86\xe5\x9b\xba\xe5\xae\x9a\xe5\x80\xa4 */" },
#endif
		{ "EditCondition", "Source == EKawaiiPhysicsSetAlphaSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source=Constant\xe3\x81\xae\xe6\x99\x82\xe3\x81\xab\xe4\xbd\xbf\xe3\x81\x86\xe5\x9b\xba\xe5\xae\x9a\xe5\x80\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterTags_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x8e\xe3\x83\xbc\xe3\x83\x89\xe3\x82\x92Tag\xe3\x81\xa7\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xab\xe3\x82\xbf\xef\xbc\x88\xe7\xa9\xba\xe3\x81\xaa\xe3\x82\x89\xe5\x85\xa8\xe3\x83\x8e\xe3\x83\xbc\xe3\x83\x89\xe5\xaf\xbe\xe8\xb1\xa1\xef\xbc\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x8e\xe3\x83\xbc\xe3\x83\x89\xe3\x82\x92Tag\xe3\x81\xa7\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xab\xe3\x82\xbf\xef\xbc\x88\xe7\xa9\xba\xe3\x81\xaa\xe3\x82\x89\xe5\x85\xa8\xe3\x83\x8e\xe3\x83\xbc\xe3\x83\x89\xe5\xaf\xbe\xe8\xb1\xa1\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterExactMatch_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag\xe3\x81\xae\xe5\xae\x8c\xe5\x85\xa8\xe4\xb8\x80\xe8\x87\xb4\xe3\x81\xa7\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xab\xe3\x82\xbf\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xef\xbc\x88""false\xe3\x81\xaa\xe3\x82\x89\xe8\xa6\xaaTag\xe3\x82\x82\xe8\xa8\xb1\xe5\xae\xb9\xef\xbc\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag\xe3\x81\xae\xe5\xae\x8c\xe5\x85\xa8\xe4\xb8\x80\xe8\x87\xb4\xe3\x81\xa7\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xab\xe3\x82\xbf\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xef\xbc\x88""false\xe3\x81\xaa\xe3\x82\x89\xe8\xa6\xaaTag\xe3\x82\x82\xe8\xa8\xb1\xe5\xae\xb9\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedAlpha_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Saved alpha value at NotifyBegin for restoration.\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saved alpha value at NotifyBegin for restoration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSavedAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAlphaIfNoCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTags;
	static void NewProp_bFilterExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterExactMatch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedAlpha;
	static void NewProp_bHasSavedAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSavedAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_KawaiiPhysicsSetAlpha>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_KawaiiPhysicsSetAlpha, Source), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSetAlphaSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 643853342
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_KawaiiPhysicsSetAlpha, CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_MetaData), NewProp_CurveName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_DefaultAlphaIfNoCurve = { "DefaultAlphaIfNoCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_KawaiiPhysicsSetAlpha, DefaultAlphaIfNoCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAlphaIfNoCurve_MetaData), NewProp_DefaultAlphaIfNoCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_ConstantAlpha = { "ConstantAlpha", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_KawaiiPhysicsSetAlpha, ConstantAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantAlpha_MetaData), NewProp_ConstantAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_FilterTags = { "FilterTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_KawaiiPhysicsSetAlpha, FilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterTags_MetaData), NewProp_FilterTags_MetaData) }; // 3352185621
void Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_bFilterExactMatch_SetBit(void* Obj)
{
	((UAnimNotifyState_KawaiiPhysicsSetAlpha*)Obj)->bFilterExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_bFilterExactMatch = { "bFilterExactMatch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_KawaiiPhysicsSetAlpha), &Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_bFilterExactMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterExactMatch_MetaData), NewProp_bFilterExactMatch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_SavedAlpha = { "SavedAlpha", nullptr, (EPropertyFlags)0x0040000000002010, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_KawaiiPhysicsSetAlpha, SavedAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedAlpha_MetaData), NewProp_SavedAlpha_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_bHasSavedAlpha_SetBit(void* Obj)
{
	((UAnimNotifyState_KawaiiPhysicsSetAlpha*)Obj)->bHasSavedAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_bHasSavedAlpha = { "bHasSavedAlpha", nullptr, (EPropertyFlags)0x0040000000002010, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_KawaiiPhysicsSetAlpha), &Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_bHasSavedAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSavedAlpha_MetaData), NewProp_bHasSavedAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_DefaultAlphaIfNoCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_ConstantAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_FilterTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_bFilterExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_SavedAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::NewProp_bHasSavedAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::ClassParams = {
	&UAnimNotifyState_KawaiiPhysicsSetAlpha::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UClass* StaticClass<UAnimNotifyState_KawaiiPhysicsSetAlpha>()
{
	return UAnimNotifyState_KawaiiPhysicsSetAlpha::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_KawaiiPhysicsSetAlpha);
UAnimNotifyState_KawaiiPhysicsSetAlpha::~UAnimNotifyState_KawaiiPhysicsSetAlpha() {}
// End Class UAnimNotifyState_KawaiiPhysicsSetAlpha

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKawaiiPhysicsSetAlphaSource_StaticEnum, TEXT("EKawaiiPhysicsSetAlphaSource"), &Z_Registration_Info_UEnum_EKawaiiPhysicsSetAlphaSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 643853342U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha, UAnimNotifyState_KawaiiPhysicsSetAlpha::StaticClass, TEXT("UAnimNotifyState_KawaiiPhysicsSetAlpha"), &Z_Registration_Info_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_KawaiiPhysicsSetAlpha), 3921476967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_2559706919(TEXT("/Script/KawaiiPhysics"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

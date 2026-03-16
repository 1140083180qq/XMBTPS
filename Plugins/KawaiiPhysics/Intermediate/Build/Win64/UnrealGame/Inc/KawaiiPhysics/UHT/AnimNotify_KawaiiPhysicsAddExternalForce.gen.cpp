// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/AnimNotifies/AnimNotify_KawaiiPhysicsAddExternalForce.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_KawaiiPhysicsAddExternalForce() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_NoRegister();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin Class UAnimNotify_KawaiiPhysicsAddExternalForce
void UAnimNotify_KawaiiPhysicsAddExternalForce::StaticRegisterNativesUAnimNotify_KawaiiPhysicsAddExternalForce()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_KawaiiPhysicsAddExternalForce);
UClass* Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_NoRegister()
{
	return UAnimNotify_KawaiiPhysicsAddExternalForce::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAnimNotify_KawaiiPhysicsAddExternalForce\n *\n * This class represents an animation notify that adds external forces to a skeletal mesh component\n * during an animation sequence. It inherits from UAnimNotify and provides functionality to add and remove\n * external forces when the notify is triggered.\n */" },
#endif
		{ "DisplayName", "KawaiiPhyiscs: Add ExternalForce" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/AnimNotify_KawaiiPhysicsAddExternalForce.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_KawaiiPhysicsAddExternalForce.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAnimNotify_KawaiiPhysicsAddExternalForce\n\nThis class represents an animation notify that adds external forces to a skeletal mesh component\nduring an animation sequence. It inherits from UAnimNotify and provides functionality to add and remove\nexternal forces when the notify is triggered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalExternalForces_MetaData[] = {
		{ "BaseStruct", "/Script/KawaiiPhysics.KawaiiPhysics_ExternalForce" },
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Additional external forces to be applied to the skeletal mesh component.\n\x09 */" },
#endif
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_KawaiiPhysicsAddExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional external forces to be applied to the skeletal mesh component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterTags_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tags used to filter which external forces are applied.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_KawaiiPhysicsAddExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags used to filter which external forces are applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterExactMatch_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether to filter tags to exact matches (if False, parent tags will also be included).\n\x09 * Tag\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xab\xe3\x82\xbf\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe3\x81\xab\xe3\x81\xa6\xe5\xae\x8c\xe5\x85\xa8\xe4\xb8\x80\xe8\x87\xb4\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe5\x90\xa6\xe3\x81\x8b\xef\xbc\x88""False\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe8\xa6\xaaTag\xe3\x82\x82\xe5\x90\xab\xe3\x82\x81\xe3\x81\xbe\xe3\x81\x99\xef\xbc\x89\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_KawaiiPhysicsAddExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to filter tags to exact matches (if False, parent tags will also be included).\nTag\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xab\xe3\x82\xbf\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe3\x81\xab\xe3\x81\xa6\xe5\xae\x8c\xe5\x85\xa8\xe4\xb8\x80\xe8\x87\xb4\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe5\x90\xa6\xe3\x81\x8b\xef\xbc\x88""False\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe8\xa6\xaaTag\xe3\x82\x82\xe5\x90\xab\xe3\x82\x81\xe3\x81\xbe\xe3\x81\x99\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalExternalForces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalExternalForces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTags;
	static void NewProp_bFilterExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterExactMatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_KawaiiPhysicsAddExternalForce>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_AdditionalExternalForces_Inner = { "AdditionalExternalForces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_AdditionalExternalForces = { "AdditionalExternalForces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_KawaiiPhysicsAddExternalForce, AdditionalExternalForces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalExternalForces_MetaData), NewProp_AdditionalExternalForces_MetaData) }; // 174410355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_FilterTags = { "FilterTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_KawaiiPhysicsAddExternalForce, FilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterTags_MetaData), NewProp_FilterTags_MetaData) }; // 3352185621
void Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_bFilterExactMatch_SetBit(void* Obj)
{
	((UAnimNotify_KawaiiPhysicsAddExternalForce*)Obj)->bFilterExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_bFilterExactMatch = { "bFilterExactMatch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_KawaiiPhysicsAddExternalForce), &Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_bFilterExactMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterExactMatch_MetaData), NewProp_bFilterExactMatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_AdditionalExternalForces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_AdditionalExternalForces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_FilterTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::NewProp_bFilterExactMatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::ClassParams = {
	&UAnimNotify_KawaiiPhysicsAddExternalForce::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce.OuterSingleton, Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UClass* StaticClass<UAnimNotify_KawaiiPhysicsAddExternalForce>()
{
	return UAnimNotify_KawaiiPhysicsAddExternalForce::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_KawaiiPhysicsAddExternalForce);
UAnimNotify_KawaiiPhysicsAddExternalForce::~UAnimNotify_KawaiiPhysicsAddExternalForce() {}
// End Class UAnimNotify_KawaiiPhysicsAddExternalForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotify_KawaiiPhysicsAddExternalForce_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce, UAnimNotify_KawaiiPhysicsAddExternalForce::StaticClass, TEXT("UAnimNotify_KawaiiPhysicsAddExternalForce"), &Z_Registration_Info_UClass_UAnimNotify_KawaiiPhysicsAddExternalForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_KawaiiPhysicsAddExternalForce), 633244841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotify_KawaiiPhysicsAddExternalForce_h_122550222(TEXT("/Script/KawaiiPhysics"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotify_KawaiiPhysicsAddExternalForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotify_KawaiiPhysicsAddExternalForce_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmImportMaterialSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmImportMaterialSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmImportMaterialSet();
VRM4U_API UClass* Z_Construct_UClass_UVrmImportMaterialSet_NoRegister();
// End Cross Module References

// Begin Class UVrmImportMaterialSet
void UVrmImportMaterialSet::StaticRegisterNativesUVrmImportMaterialSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmImportMaterialSet);
UClass* Z_Construct_UClass_UVrmImportMaterialSet_NoRegister()
{
	return UVrmImportMaterialSet::StaticClass();
}
struct Z_Construct_UClass_UVrmImportMaterialSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmImportMaterialSet.h" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opaque_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpaqueTwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translucent_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentTwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Opaque;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpaqueTwoSided;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Translucent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslucentTwoSided;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmImportMaterialSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque = { "Opaque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportMaterialSet, Opaque), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opaque_MetaData), NewProp_Opaque_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided = { "OpaqueTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportMaterialSet, OpaqueTwoSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpaqueTwoSided_MetaData), NewProp_OpaqueTwoSided_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent = { "Translucent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportMaterialSet, Translucent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translucent_MetaData), NewProp_Translucent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided = { "TranslucentTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmImportMaterialSet, TranslucentTwoSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentTwoSided_MetaData), NewProp_TranslucentTwoSided_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmImportMaterialSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::ClassParams = {
	&UVrmImportMaterialSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmImportMaterialSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmImportMaterialSet()
{
	if (!Z_Registration_Info_UClass_UVrmImportMaterialSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmImportMaterialSet.OuterSingleton, Z_Construct_UClass_UVrmImportMaterialSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmImportMaterialSet.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmImportMaterialSet>()
{
	return UVrmImportMaterialSet::StaticClass();
}
UVrmImportMaterialSet::UVrmImportMaterialSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmImportMaterialSet);
UVrmImportMaterialSet::~UVrmImportMaterialSet() {}
// End Class UVrmImportMaterialSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmImportMaterialSet, UVrmImportMaterialSet::StaticClass, TEXT("UVrmImportMaterialSet"), &Z_Registration_Info_UClass_UVrmImportMaterialSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmImportMaterialSet), 2542909503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_4090297579(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

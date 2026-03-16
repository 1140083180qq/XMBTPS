// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AssetTypeActions/AssetDefinition_VRMMeta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_VRMMeta() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMAssetList();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMMeta();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMMeta_NoRegister();
// End Cross Module References

// Begin Class UAssetDefinition_VRMMeta
void UAssetDefinition_VRMMeta::StaticRegisterNativesUAssetDefinition_VRMMeta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_VRMMeta);
UClass* Z_Construct_UClass_UAssetDefinition_VRMMeta_NoRegister()
{
	return UAssetDefinition_VRMMeta::StaticClass();
}
struct Z_Construct_UClass_UAssetDefinition_VRMMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_VRMMeta.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_VRMMeta.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_VRMMeta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetDefinition_VRMMeta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetDefinition_VRMAssetList,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VRMMeta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_VRMMeta_Statics::ClassParams = {
	&UAssetDefinition_VRMMeta::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VRMMeta_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_VRMMeta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetDefinition_VRMMeta()
{
	if (!Z_Registration_Info_UClass_UAssetDefinition_VRMMeta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_VRMMeta.OuterSingleton, Z_Construct_UClass_UAssetDefinition_VRMMeta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetDefinition_VRMMeta.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UAssetDefinition_VRMMeta>()
{
	return UAssetDefinition_VRMMeta::StaticClass();
}
UAssetDefinition_VRMMeta::UAssetDefinition_VRMMeta() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_VRMMeta);
UAssetDefinition_VRMMeta::~UAssetDefinition_VRMMeta() {}
// End Class UAssetDefinition_VRMMeta

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMMeta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_VRMMeta, UAssetDefinition_VRMMeta::StaticClass, TEXT("UAssetDefinition_VRMMeta"), &Z_Registration_Info_UClass_UAssetDefinition_VRMMeta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_VRMMeta), 2233166178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMMeta_h_4293365345(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMMeta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMMeta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

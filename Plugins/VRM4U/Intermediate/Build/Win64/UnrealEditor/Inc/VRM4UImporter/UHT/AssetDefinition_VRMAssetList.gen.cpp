// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AssetTypeActions/AssetDefinition_VRMAssetList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_VRMAssetList() {}

// Begin Cross Module References
UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMAssetList();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMAssetList_NoRegister();
// End Cross Module References

// Begin Class UAssetDefinition_VRMAssetList
void UAssetDefinition_VRMAssetList::StaticRegisterNativesUAssetDefinition_VRMAssetList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_VRMAssetList);
UClass* Z_Construct_UClass_UAssetDefinition_VRMAssetList_NoRegister()
{
	return UAssetDefinition_VRMAssetList::StaticClass();
}
struct Z_Construct_UClass_UAssetDefinition_VRMAssetList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_VRMAssetList.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_VRMAssetList.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_VRMAssetList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetDefinition_VRMAssetList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VRMAssetList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_VRMAssetList_Statics::ClassParams = {
	&UAssetDefinition_VRMAssetList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VRMAssetList_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_VRMAssetList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetDefinition_VRMAssetList()
{
	if (!Z_Registration_Info_UClass_UAssetDefinition_VRMAssetList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_VRMAssetList.OuterSingleton, Z_Construct_UClass_UAssetDefinition_VRMAssetList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetDefinition_VRMAssetList.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UAssetDefinition_VRMAssetList>()
{
	return UAssetDefinition_VRMAssetList::StaticClass();
}
UAssetDefinition_VRMAssetList::UAssetDefinition_VRMAssetList() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_VRMAssetList);
UAssetDefinition_VRMAssetList::~UAssetDefinition_VRMAssetList() {}
// End Class UAssetDefinition_VRMAssetList

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMAssetList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_VRMAssetList, UAssetDefinition_VRMAssetList::StaticClass, TEXT("UAssetDefinition_VRMAssetList"), &Z_Registration_Info_UClass_UAssetDefinition_VRMAssetList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_VRMAssetList), 4253998273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMAssetList_h_937574754(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMAssetList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMAssetList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/VRM4UImporterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4UImporterFactory() {}

// Begin Cross Module References
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVRM4UImporterFactory();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVRM4UImporterFactory_NoRegister();
// End Cross Module References

// Begin Class UVRM4UImporterFactory
void UVRM4UImporterFactory::StaticRegisterNativesUVRM4UImporterFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRM4UImporterFactory);
UClass* Z_Construct_UClass_UVRM4UImporterFactory_NoRegister()
{
	return UVRM4UImporterFactory::StaticClass();
}
struct Z_Construct_UClass_UVRM4UImporterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4UImporterFactory.h" },
		{ "ModuleRelativePath", "Private/VRM4UImporterFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4UImporterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVRM4UImporterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4UImporterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRM4UImporterFactory_Statics::ClassParams = {
	&UVRM4UImporterFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4UImporterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRM4UImporterFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRM4UImporterFactory()
{
	if (!Z_Registration_Info_UClass_UVRM4UImporterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRM4UImporterFactory.OuterSingleton, Z_Construct_UClass_UVRM4UImporterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRM4UImporterFactory.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UVRM4UImporterFactory>()
{
	return UVRM4UImporterFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4UImporterFactory);
UVRM4UImporterFactory::~UVRM4UImporterFactory() {}
// End Class UVRM4UImporterFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VRM4UImporterFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRM4UImporterFactory, UVRM4UImporterFactory::StaticClass, TEXT("UVRM4UImporterFactory"), &Z_Registration_Info_UClass_UVRM4UImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRM4UImporterFactory), 3909526290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VRM4UImporterFactory_h_3207708219(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VRM4UImporterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VRM4UImporterFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

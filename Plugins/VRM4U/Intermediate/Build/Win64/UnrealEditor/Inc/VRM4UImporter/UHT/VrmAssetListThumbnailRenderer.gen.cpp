// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/VrmAssetListThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAssetListThumbnailRenderer() {}

// Begin Cross Module References
UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer_NoRegister();
// End Cross Module References

// Begin Class UVrmAssetListThumbnailRenderer
void UVrmAssetListThumbnailRenderer::StaticRegisterNativesUVrmAssetListThumbnailRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmAssetListThumbnailRenderer);
UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer_NoRegister()
{
	return UVrmAssetListThumbnailRenderer::StaticClass();
}
struct Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VrmAssetListThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/VrmAssetListThumbnailRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_meshThumbnail_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void DrawGrid(int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas);\n" },
#endif
		{ "ModuleRelativePath", "Private/VrmAssetListThumbnailRenderer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void DrawGrid(int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_meshThumbnail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAssetListThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail = { "meshThumbnail", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetListThumbnailRenderer, meshThumbnail), Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_meshThumbnail_MetaData), NewProp_meshThumbnail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::ClassParams = {
	&UVrmAssetListThumbnailRenderer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UVrmAssetListThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmAssetListThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmAssetListThumbnailRenderer.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UVrmAssetListThumbnailRenderer>()
{
	return UVrmAssetListThumbnailRenderer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAssetListThumbnailRenderer);
UVrmAssetListThumbnailRenderer::~UVrmAssetListThumbnailRenderer() {}
// End Class UVrmAssetListThumbnailRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmAssetListThumbnailRenderer, UVrmAssetListThumbnailRenderer::StaticClass, TEXT("UVrmAssetListThumbnailRenderer"), &Z_Registration_Info_UClass_UVrmAssetListThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmAssetListThumbnailRenderer), 1659243638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_899014729(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4URender/Public/VrmSceneCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmSceneCaptureComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4URender();
VRM4URENDER_API UClass* Z_Construct_UClass_UVrmSceneCaptureComponent2D();
VRM4URENDER_API UClass* Z_Construct_UClass_UVrmSceneCaptureComponent2D_NoRegister();
// End Cross Module References

// Begin Class UVrmSceneCaptureComponent2D
void UVrmSceneCaptureComponent2D::StaticRegisterNativesUVrmSceneCaptureComponent2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmSceneCaptureComponent2D);
UClass* Z_Construct_UClass_UVrmSceneCaptureComponent2D_NoRegister()
{
	return UVrmSceneCaptureComponent2D::StaticClass();
}
struct Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Cine Capture Component extends Scene Capture to allow users to render Cine Camera Component into a render target. \n* Cine Capture has a few modifiable properties, but most of the properties are controlled by Cine Camera Component.\n* Cine Capture Component is required to be parented to Cine Camera Component or a class that extends it.\n* \n*/" },
#endif
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "VrmSceneCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/VrmSceneCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cine Capture Component extends Scene Capture to allow users to render Cine Camera Component into a render target.\nCine Capture has a few modifiable properties, but most of the properties are controlled by Cine Camera Component.\nCine Capture Component is required to be parented to Cine Camera Component or a class that extends it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetA_MetaData[] = {
		{ "Category", "Capture Settings" },
		{ "ModuleRelativePath", "Public/VrmSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetB_MetaData[] = {
		{ "Category", "Capture Settings" },
		{ "ModuleRelativePath", "Public/VrmSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmSceneCaptureComponent2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetA = { "RenderTargetA", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmSceneCaptureComponent2D, RenderTargetA), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetA_MetaData), NewProp_RenderTargetA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetB = { "RenderTargetB", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmSceneCaptureComponent2D, RenderTargetB), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetB_MetaData), NewProp_RenderTargetB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4URender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::ClassParams = {
	&UVrmSceneCaptureComponent2D::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmSceneCaptureComponent2D()
{
	if (!Z_Registration_Info_UClass_UVrmSceneCaptureComponent2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmSceneCaptureComponent2D.OuterSingleton, Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmSceneCaptureComponent2D.OuterSingleton;
}
template<> VRM4URENDER_API UClass* StaticClass<UVrmSceneCaptureComponent2D>()
{
	return UVrmSceneCaptureComponent2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmSceneCaptureComponent2D);
UVrmSceneCaptureComponent2D::~UVrmSceneCaptureComponent2D() {}
// End Class UVrmSceneCaptureComponent2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmSceneCaptureComponent2D, UVrmSceneCaptureComponent2D::StaticClass, TEXT("UVrmSceneCaptureComponent2D"), &Z_Registration_Info_UClass_UVrmSceneCaptureComponent2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmSceneCaptureComponent2D), 1268057582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_359604950(TEXT("/Script/VRM4URender"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

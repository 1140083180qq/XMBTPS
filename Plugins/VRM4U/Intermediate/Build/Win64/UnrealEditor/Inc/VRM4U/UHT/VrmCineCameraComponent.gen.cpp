// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCineCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCineCameraComponent() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmCineCameraComponent();
VRM4U_API UClass* Z_Construct_UClass_UVrmCineCameraComponent_NoRegister();
// End Cross Module References

// Begin Class UVrmCineCameraComponent
void UVrmCineCameraComponent::StaticRegisterNativesUVrmCineCameraComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmCineCameraComponent);
UClass* Z_Construct_UClass_UVrmCineCameraComponent_NoRegister()
{
	return UVrmCineCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UVrmCineCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "VrmCineCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmCineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffCenterProjectionOffset_MetaData[] = {
		{ "Category", "Vrm Camera Settings" },
		{ "ModuleRelativePath", "Public/VrmCineCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffCenterProjectionOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmCineCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset = { "OffCenterProjectionOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmCineCameraComponent, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffCenterProjectionOffset_MetaData), NewProp_OffCenterProjectionOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmCineCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCineCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmCineCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCineCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCineCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmCineCameraComponent_Statics::ClassParams = {
	&UVrmCineCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVrmCineCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCineCameraComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCineCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmCineCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmCineCameraComponent()
{
	if (!Z_Registration_Info_UClass_UVrmCineCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmCineCameraComponent.OuterSingleton, Z_Construct_UClass_UVrmCineCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmCineCameraComponent.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmCineCameraComponent>()
{
	return UVrmCineCameraComponent::StaticClass();
}
UVrmCineCameraComponent::UVrmCineCameraComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmCineCameraComponent);
UVrmCineCameraComponent::~UVrmCineCameraComponent() {}
// End Class UVrmCineCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmCineCameraComponent, UVrmCineCameraComponent::StaticClass, TEXT("UVrmCineCameraComponent"), &Z_Registration_Info_UClass_UVrmCineCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmCineCameraComponent), 519811936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_2384046268(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

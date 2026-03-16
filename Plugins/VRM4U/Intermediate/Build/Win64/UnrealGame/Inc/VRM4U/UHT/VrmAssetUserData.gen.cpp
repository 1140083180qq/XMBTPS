// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAssetUserData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
VRM4U_API UClass* Z_Construct_UClass_UVrmAssetUserData();
VRM4U_API UClass* Z_Construct_UClass_UVrmAssetUserData_NoRegister();
// End Cross Module References

// Begin Class UVrmAssetUserData
void UVrmAssetUserData::StaticRegisterNativesUVrmAssetUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmAssetUserData);
UClass* Z_Construct_UClass_UVrmAssetUserData_NoRegister()
{
	return UVrmAssetUserData::StaticClass();
}
struct Z_Construct_UClass_UVrmAssetUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmAssetUserData.h" },
		{ "ModuleRelativePath", "Public/VrmAssetUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmAssetListObject_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAssetUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmAssetListObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAssetUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetUserData_Statics::NewProp_VrmAssetListObject = { "VrmAssetListObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAssetUserData, VrmAssetListObject), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmAssetListObject_MetaData), NewProp_VrmAssetListObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAssetUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetUserData_Statics::NewProp_VrmAssetListObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmAssetUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmAssetUserData_Statics::ClassParams = {
	&UVrmAssetUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVrmAssetUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetUserData_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmAssetUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmAssetUserData()
{
	if (!Z_Registration_Info_UClass_UVrmAssetUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmAssetUserData.OuterSingleton, Z_Construct_UClass_UVrmAssetUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmAssetUserData.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmAssetUserData>()
{
	return UVrmAssetUserData::StaticClass();
}
UVrmAssetUserData::UVrmAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAssetUserData);
UVrmAssetUserData::~UVrmAssetUserData() {}
// End Class UVrmAssetUserData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmAssetUserData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmAssetUserData, UVrmAssetUserData::StaticClass, TEXT("UVrmAssetUserData"), &Z_Registration_Info_UClass_UVrmAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmAssetUserData), 1544357987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmAssetUserData_h_671093401(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmAssetUserData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

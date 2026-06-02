// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4ULoader/Public/VrmSkeletalMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmSkeletalMesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh();
UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeletalMesh();
VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeletalMesh_NoRegister();
// End Cross Module References

// Begin Class UVrmSkeletalMesh
void UVrmSkeletalMesh::StaticRegisterNativesUVrmSkeletalMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmSkeletalMesh);
UClass* Z_Construct_UClass_UVrmSkeletalMesh_NoRegister()
{
	return UVrmSkeletalMesh::StaticClass();
}
struct Z_Construct_UClass_UVrmSkeletalMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VrmSkeletalMesh.h" },
		{ "ModuleRelativePath", "Public/VrmSkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmSkeletalMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVrmSkeletalMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMesh,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSkeletalMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmSkeletalMesh_Statics::ClassParams = {
	&UVrmSkeletalMesh::StaticClass,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSkeletalMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmSkeletalMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmSkeletalMesh()
{
	if (!Z_Registration_Info_UClass_UVrmSkeletalMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmSkeletalMesh.OuterSingleton, Z_Construct_UClass_UVrmSkeletalMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmSkeletalMesh.OuterSingleton;
}
template<> VRM4ULOADER_API UClass* StaticClass<UVrmSkeletalMesh>()
{
	return UVrmSkeletalMesh::StaticClass();
}
UVrmSkeletalMesh::UVrmSkeletalMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmSkeletalMesh);
UVrmSkeletalMesh::~UVrmSkeletalMesh() {}
// End Class UVrmSkeletalMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmSkeletalMesh, UVrmSkeletalMesh::StaticClass, TEXT("UVrmSkeletalMesh"), &Z_Registration_Info_UClass_UVrmSkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmSkeletalMesh), 288436416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMesh_h_3719815905(TEXT("/Script/VRM4ULoader"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

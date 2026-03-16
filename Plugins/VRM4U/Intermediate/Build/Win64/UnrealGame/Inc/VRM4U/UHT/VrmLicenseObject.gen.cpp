// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmLicenseObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmLicenseObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmLicenseObject();
VRM4U_API UClass* Z_Construct_UClass_UVrmLicenseObject_NoRegister();
// End Cross Module References

// Begin Class UVrmLicenseObject
void UVrmLicenseObject::StaticRegisterNativesUVrmLicenseObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmLicenseObject);
UClass* Z_Construct_UClass_UVrmLicenseObject_NoRegister()
{
	return UVrmLicenseObject::StaticClass();
}
struct Z_Construct_UClass_UVrmLicenseObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VrmLicenseObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[] = {
		{ "Category", "Information" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[] = {
		{ "Category", "Information" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_author_MetaData[] = {
		{ "Category", "Information" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_contactInformation_MetaData[] = {
		{ "Category", "Information" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reference_MetaData[] = {
		{ "Category", "Information" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thumbnail_MetaData[] = {
		{ "Category", "Information" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_allowedUserName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_violentUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sexualUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commercialUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherPermissionUrl_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_licenseName_MetaData[] = {
		{ "Category", "License_Redistribution/ModificationsLicense" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherLicenseUrl_MetaData[] = {
		{ "Category", "License_Redistribution/ModificationsLicense" },
		{ "ModuleRelativePath", "Public/VrmLicenseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_author;
	static const UECodeGen_Private::FStrPropertyParams NewProp_contactInformation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_reference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_thumbnail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_allowedUserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_violentUsageName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_sexualUsageName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_commercialUsageName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_otherPermissionUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_licenseName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_otherLicenseUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmLicenseObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_title_MetaData), NewProp_title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_version_MetaData), NewProp_version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_author = { "author", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_author_MetaData), NewProp_author_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_contactInformation = { "contactInformation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, contactInformation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_contactInformation_MetaData), NewProp_contactInformation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_reference = { "reference", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, reference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reference_MetaData), NewProp_reference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_thumbnail = { "thumbnail", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thumbnail_MetaData), NewProp_thumbnail_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_allowedUserName = { "allowedUserName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, allowedUserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_allowedUserName_MetaData), NewProp_allowedUserName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_violentUsageName = { "violentUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, violentUsageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_violentUsageName_MetaData), NewProp_violentUsageName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_sexualUsageName = { "sexualUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, sexualUsageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sexualUsageName_MetaData), NewProp_sexualUsageName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_commercialUsageName = { "commercialUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, commercialUsageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commercialUsageName_MetaData), NewProp_commercialUsageName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_otherPermissionUrl = { "otherPermissionUrl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, otherPermissionUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherPermissionUrl_MetaData), NewProp_otherPermissionUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_licenseName = { "licenseName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, licenseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_licenseName_MetaData), NewProp_licenseName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_otherLicenseUrl = { "otherLicenseUrl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLicenseObject, otherLicenseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherLicenseUrl_MetaData), NewProp_otherLicenseUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmLicenseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_contactInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_reference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_allowedUserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_violentUsageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_sexualUsageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_commercialUsageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_otherPermissionUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_licenseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLicenseObject_Statics::NewProp_otherLicenseUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLicenseObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmLicenseObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLicenseObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmLicenseObject_Statics::ClassParams = {
	&UVrmLicenseObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVrmLicenseObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLicenseObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLicenseObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmLicenseObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmLicenseObject()
{
	if (!Z_Registration_Info_UClass_UVrmLicenseObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmLicenseObject.OuterSingleton, Z_Construct_UClass_UVrmLicenseObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmLicenseObject.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmLicenseObject>()
{
	return UVrmLicenseObject::StaticClass();
}
UVrmLicenseObject::UVrmLicenseObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmLicenseObject);
UVrmLicenseObject::~UVrmLicenseObject() {}
// End Class UVrmLicenseObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmLicenseObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmLicenseObject, UVrmLicenseObject::StaticClass, TEXT("UVrmLicenseObject"), &Z_Registration_Info_UClass_UVrmLicenseObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmLicenseObject), 2205525469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmLicenseObject_h_2906640659(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmLicenseObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmLicenseObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UCapture/Public/VrmVMCObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmVMCObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VRM4UCapture();
VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmVMCObject();
VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmVMCObject_NoRegister();
// End Cross Module References

// Begin Class UVrmVMCObject
void UVrmVMCObject::StaticRegisterNativesUVrmVMCObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmVMCObject);
UClass* Z_Construct_UClass_UVrmVMCObject_NoRegister()
{
	return UVrmVMCObject::StaticClass();
}
struct Z_Construct_UClass_UVrmVMCObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VrmVMCObject.h" },
		{ "ModuleRelativePath", "Public/VrmVMCObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmVMCObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVrmVMCObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmVMCObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmVMCObject_Statics::ClassParams = {
	&UVrmVMCObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmVMCObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmVMCObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmVMCObject()
{
	if (!Z_Registration_Info_UClass_UVrmVMCObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmVMCObject.OuterSingleton, Z_Construct_UClass_UVrmVMCObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmVMCObject.OuterSingleton;
}
template<> VRM4UCAPTURE_API UClass* StaticClass<UVrmVMCObject>()
{
	return UVrmVMCObject::StaticClass();
}
UVrmVMCObject::UVrmVMCObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmVMCObject);
UVrmVMCObject::~UVrmVMCObject() {}
// End Class UVrmVMCObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmVMCObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmVMCObject, UVrmVMCObject::StaticClass, TEXT("UVrmVMCObject"), &Z_Registration_Info_UClass_UVrmVMCObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmVMCObject), 2537438618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmVMCObject_h_3343199994(TEXT("/Script/VRM4UCapture"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmVMCObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmVMCObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmNetworkBPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmNetworkBPFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary();
VRM4U_API UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_NoRegister();
// End Cross Module References

// Begin Class UVrmNetworkBPFunctionLibrary Function VRMGetIPAddressTable
struct Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics
{
	struct VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms
	{
		TArray<FString> AddressTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmNetworkBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AddressTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddressTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable_Inner = { "AddressTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable = { "AddressTable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms, AddressTable), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmNetworkBPFunctionLibrary, nullptr, "VRMGetIPAddressTable", nullptr, nullptr, Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmNetworkBPFunctionLibrary::execVRMGetIPAddressTable)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_AddressTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVrmNetworkBPFunctionLibrary::VRMGetIPAddressTable(Z_Param_Out_AddressTable);
	P_NATIVE_END;
}
// End Class UVrmNetworkBPFunctionLibrary Function VRMGetIPAddressTable

// Begin Class UVrmNetworkBPFunctionLibrary
void UVrmNetworkBPFunctionLibrary::StaticRegisterNativesUVrmNetworkBPFunctionLibrary()
{
	UClass* Class = UVrmNetworkBPFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "VRMGetIPAddressTable", &UVrmNetworkBPFunctionLibrary::execVRMGetIPAddressTable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmNetworkBPFunctionLibrary);
UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_NoRegister()
{
	return UVrmNetworkBPFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VrmNetworkBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VrmNetworkBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable, "VRMGetIPAddressTable" }, // 2985443168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmNetworkBPFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::ClassParams = {
	&UVrmNetworkBPFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UVrmNetworkBPFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmNetworkBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmNetworkBPFunctionLibrary.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmNetworkBPFunctionLibrary>()
{
	return UVrmNetworkBPFunctionLibrary::StaticClass();
}
UVrmNetworkBPFunctionLibrary::UVrmNetworkBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmNetworkBPFunctionLibrary);
UVrmNetworkBPFunctionLibrary::~UVrmNetworkBPFunctionLibrary() {}
// End Class UVrmNetworkBPFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmNetworkBPFunctionLibrary, UVrmNetworkBPFunctionLibrary::StaticClass, TEXT("UVrmNetworkBPFunctionLibrary"), &Z_Registration_Info_UClass_UVrmNetworkBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmNetworkBPFunctionLibrary), 1858074151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_910931230(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

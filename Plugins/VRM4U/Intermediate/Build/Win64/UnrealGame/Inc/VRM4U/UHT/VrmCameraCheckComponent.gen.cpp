// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCameraCheckComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCameraCheckComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmCameraCheckComponent();
VRM4U_API UClass* Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister();
VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature();
// End Cross Module References

// Begin Delegate FVrmCameraCheckDelegate
struct Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmCameraCheckComponent, nullptr, "VrmCameraCheckDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVrmCameraCheckComponent::FVrmCameraCheckDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmCameraCheckDelegate)
{
	VrmCameraCheckDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FVrmCameraCheckDelegate

// Begin Class UVrmCameraCheckComponent Function SetCameraCheck
struct Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics
{
	struct VrmCameraCheckComponent_eventSetCameraCheck_Parms
	{
		bool bCheckOn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCheckOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn_SetBit(void* Obj)
{
	((VrmCameraCheckComponent_eventSetCameraCheck_Parms*)Obj)->bCheckOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn = { "bCheckOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmCameraCheckComponent_eventSetCameraCheck_Parms), &Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmCameraCheckComponent, nullptr, "SetCameraCheck", nullptr, nullptr, Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::VrmCameraCheckComponent_eventSetCameraCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::VrmCameraCheckComponent_eventSetCameraCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmCameraCheckComponent::execSetCameraCheck)
{
	P_GET_UBOOL(Z_Param_bCheckOn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraCheck(Z_Param_bCheckOn);
	P_NATIVE_END;
}
// End Class UVrmCameraCheckComponent Function SetCameraCheck

// Begin Class UVrmCameraCheckComponent
void UVrmCameraCheckComponent::StaticRegisterNativesUVrmCameraCheckComponent()
{
	UClass* Class = UVrmCameraCheckComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCameraCheck", &UVrmCameraCheckComponent::execSetCameraCheck },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmCameraCheckComponent);
UClass* Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister()
{
	return UVrmCameraCheckComponent::StaticClass();
}
struct Z_Construct_UClass_UVrmCameraCheckComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VrmCameraCheckComponent.h" },
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck, "SetCameraCheck" }, // 501447036
		{ &Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature, "VrmCameraCheckDelegate__DelegateSignature" }, // 3829468118
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmCameraCheckComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove = { "OnCameraMove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmCameraCheckComponent, OnCameraMove), Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCameraMove_MetaData), NewProp_OnCameraMove_MetaData) }; // 3829468118
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmCameraCheckComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmCameraCheckComponent_Statics::ClassParams = {
	&UVrmCameraCheckComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmCameraCheckComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmCameraCheckComponent()
{
	if (!Z_Registration_Info_UClass_UVrmCameraCheckComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmCameraCheckComponent.OuterSingleton, Z_Construct_UClass_UVrmCameraCheckComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmCameraCheckComponent.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrmCameraCheckComponent>()
{
	return UVrmCameraCheckComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmCameraCheckComponent);
UVrmCameraCheckComponent::~UVrmCameraCheckComponent() {}
// End Class UVrmCameraCheckComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmCameraCheckComponent, UVrmCameraCheckComponent::StaticClass, TEXT("UVrmCameraCheckComponent"), &Z_Registration_Info_UClass_UVrmCameraCheckComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmCameraCheckComponent), 947538804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_1425961276(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

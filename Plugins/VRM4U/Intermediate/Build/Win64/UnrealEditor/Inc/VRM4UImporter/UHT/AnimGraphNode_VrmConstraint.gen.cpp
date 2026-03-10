// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmConstraint.h"
#include "VRM4U/Public/AnimNode_VrmConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmConstraint() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmConstraint();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmConstraint();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmConstraint_NoRegister();
// End Cross Module References

// Begin Class UAnimGraphNode_VrmConstraint
void UAnimGraphNode_VrmConstraint::StaticRegisterNativesUAnimGraphNode_VrmConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmConstraint);
UClass* Z_Construct_UClass_UAnimGraphNode_VrmConstraint_NoRegister()
{
	return UAnimGraphNode_VrmConstraint::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmConstraint.h" },
		{ "Keywords", "VRM4U" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLive_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewForeground_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_bPreviewLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLive;
	static void NewProp_bPreviewForeground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewForeground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_VrmConstraint, Node), Z_Construct_UScriptStruct_FAnimNode_VrmConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3954380586
void Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_bPreviewLive_SetBit(void* Obj)
{
	((UAnimGraphNode_VrmConstraint*)Obj)->bPreviewLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_bPreviewLive = { "bPreviewLive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmConstraint), &Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_bPreviewLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewLive_MetaData), NewProp_bPreviewLive_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_bPreviewForeground_SetBit(void* Obj)
{
	((UAnimGraphNode_VrmConstraint*)Obj)->bPreviewForeground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_bPreviewForeground = { "bPreviewForeground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmConstraint), &Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_bPreviewForeground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewForeground_MetaData), NewProp_bPreviewForeground_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_bPreviewLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::NewProp_bPreviewForeground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::ClassParams = {
	&UAnimGraphNode_VrmConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_VrmConstraint()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmConstraint.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_VrmConstraint.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmConstraint>()
{
	return UAnimGraphNode_VrmConstraint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmConstraint);
UAnimGraphNode_VrmConstraint::~UAnimGraphNode_VrmConstraint() {}
// End Class UAnimGraphNode_VrmConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmConstraint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmConstraint, UAnimGraphNode_VrmConstraint::StaticClass, TEXT("UAnimGraphNode_VrmConstraint"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmConstraint), 1563457275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmConstraint_h_3583895254(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmConstraint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

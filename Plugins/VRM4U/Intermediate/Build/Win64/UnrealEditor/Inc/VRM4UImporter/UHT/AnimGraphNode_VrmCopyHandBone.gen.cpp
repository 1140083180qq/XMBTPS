// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmCopyHandBone.h"
#include "VRM4U/Public/AnimNode_VrmCopyHandBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmCopyHandBone() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_NoRegister();
// End Cross Module References

// Begin Class UAnimGraphNode_VrmCopyHandBone
void UAnimGraphNode_VrmCopyHandBone::StaticRegisterNativesUAnimGraphNode_VrmCopyHandBone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmCopyHandBone);
UClass* Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_NoRegister()
{
	return UAnimGraphNode_VrmCopyHandBone::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmCopyHandBone.h" },
		{ "Keywords", "VRM4U" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmCopyHandBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmCopyHandBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmCopyHandBone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_VrmCopyHandBone, Node), Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 1200578320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::ClassParams = {
	&UAnimGraphNode_VrmCopyHandBone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmCopyHandBone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmCopyHandBone.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_VrmCopyHandBone.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmCopyHandBone>()
{
	return UAnimGraphNode_VrmCopyHandBone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmCopyHandBone);
UAnimGraphNode_VrmCopyHandBone::~UAnimGraphNode_VrmCopyHandBone() {}
// End Class UAnimGraphNode_VrmCopyHandBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmCopyHandBone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmCopyHandBone, UAnimGraphNode_VrmCopyHandBone::StaticClass, TEXT("UAnimGraphNode_VrmCopyHandBone"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmCopyHandBone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmCopyHandBone), 2729052156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmCopyHandBone_h_2131175639(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmCopyHandBone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmCopyHandBone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

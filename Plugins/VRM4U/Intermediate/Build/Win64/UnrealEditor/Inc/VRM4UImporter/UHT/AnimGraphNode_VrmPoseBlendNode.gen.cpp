// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmPoseBlendNode.h"
#include "VRM4U/Public/AnimNode_VrmPoseBlendNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmPoseBlendNode() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_NoRegister();
// End Cross Module References

// Begin Class UAnimGraphNode_VrmPoseBlendNode
void UAnimGraphNode_VrmPoseBlendNode::StaticRegisterNativesUAnimGraphNode_VrmPoseBlendNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmPoseBlendNode);
UClass* Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_NoRegister()
{
	return UAnimGraphNode_VrmPoseBlendNode::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmPoseBlendNode.h" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmPoseBlendNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmPoseBlendNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmPoseBlendNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_VrmPoseBlendNode, Node), Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2707608698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_PoseHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::ClassParams = {
	&UAnimGraphNode_VrmPoseBlendNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmPoseBlendNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmPoseBlendNode.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_VrmPoseBlendNode.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmPoseBlendNode>()
{
	return UAnimGraphNode_VrmPoseBlendNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmPoseBlendNode);
UAnimGraphNode_VrmPoseBlendNode::~UAnimGraphNode_VrmPoseBlendNode() {}
// End Class UAnimGraphNode_VrmPoseBlendNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode, UAnimGraphNode_VrmPoseBlendNode::StaticClass, TEXT("UAnimGraphNode_VrmPoseBlendNode"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmPoseBlendNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmPoseBlendNode), 1674565843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_1980742494(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

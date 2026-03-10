// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmSpringBone.h"
#include "VRM4U/Public/AnimNode_VrmSpringBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmSpringBone() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_NoRegister();
// End Cross Module References

// Begin Class UAnimGraphNode_VrmSpringBone
void UAnimGraphNode_VrmSpringBone::StaticRegisterNativesUAnimGraphNode_VrmSpringBone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmSpringBone);
UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_NoRegister()
{
	return UAnimGraphNode_VrmSpringBone::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nclass FVrmSpringBoneEditMode : public FAnimNodeEditMode\n{\npublic:\n\x09//IAnimNodeEditMode interface\n\x09virtual void EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode) override;\n\x09virtual void ExitMode() override;\n\x09virtual FVector GetWidgetLocation() const override;\n\x09virtual FWidget::EWidgetMode GetWidgetMode() const override;\n\x09virtual void DoTranslation(FVector& InTranslation) override;\n\n\x09static const FEditorModeID VrmSpringBone;\n\nprivate:\n\x09struct FAnimNode_VrmSpringBone* RuntimeNode;\n\x09""class UAnimGraphNode_VrmSpringBone* GraphNode;\n};\n*/" },
#endif
		{ "IncludePath", "AnimGraphNode_VrmSpringBone.h" },
		{ "Keywords", "VRM4U" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class FVrmSpringBoneEditMode : public FAnimNodeEditMode\n{\npublic:\n       //IAnimNodeEditMode interface\n       virtual void EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode) override;\n       virtual void ExitMode() override;\n       virtual FVector GetWidgetLocation() const override;\n       virtual FWidget::EWidgetMode GetWidgetMode() const override;\n       virtual void DoTranslation(FVector& InTranslation) override;\n\n       static const FEditorModeID VrmSpringBone;\n\nprivate:\n       struct FAnimNode_VrmSpringBone* RuntimeNode;\n       class UAnimGraphNode_VrmSpringBone* GraphNode;\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLive_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewForeground_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
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
		TCppClassTypeTraits<UAnimGraphNode_VrmSpringBone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_VrmSpringBone, Node), Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 1074986415
void Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive_SetBit(void* Obj)
{
	((UAnimGraphNode_VrmSpringBone*)Obj)->bPreviewLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive = { "bPreviewLive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmSpringBone), &Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewLive_MetaData), NewProp_bPreviewLive_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground_SetBit(void* Obj)
{
	((UAnimGraphNode_VrmSpringBone*)Obj)->bPreviewForeground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground = { "bPreviewForeground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmSpringBone), &Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewForeground_MetaData), NewProp_bPreviewForeground_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::ClassParams = {
	&UAnimGraphNode_VrmSpringBone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmSpringBone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmSpringBone.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_VrmSpringBone.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmSpringBone>()
{
	return UAnimGraphNode_VrmSpringBone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmSpringBone);
UAnimGraphNode_VrmSpringBone::~UAnimGraphNode_VrmSpringBone() {}
// End Class UAnimGraphNode_VrmSpringBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmSpringBone, UAnimGraphNode_VrmSpringBone::StaticClass, TEXT("UAnimGraphNode_VrmSpringBone"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmSpringBone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmSpringBone), 2992910229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_2689570159(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

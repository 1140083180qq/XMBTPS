// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysicsEd/Public/AnimGraphNode_KawaiiPhysics.h"
#include "KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_KawaiiPhysics() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics();
KAWAIIPHYSICSED_API UClass* Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics();
KAWAIIPHYSICSED_API UClass* Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_NoRegister();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysicsEd();
// End Cross Module References

// Begin Class UAnimGraphNode_KawaiiPhysics
void UAnimGraphNode_KawaiiPhysics::StaticRegisterNativesUAnimGraphNode_KawaiiPhysics()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_KawaiiPhysics);
UClass* Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_NoRegister()
{
	return UAnimGraphNode_KawaiiPhysics::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_KawaiiPhysics.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawBone_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for bones. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for bones." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugBoneLengthRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for bone length rate. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for bone length rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawLimitAngle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for limit angles. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for limit angles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawSyncBone_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for sync bones. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for sync bones." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawSphereLimit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for spherical limits. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for spherical limits." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawCapsuleLimit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for capsule limits. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for capsule limits." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawBoxLimit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for box limits. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for box limits." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawPlanerLimit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for planar limits. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for planar limits." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawBoneConstraint_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for bone constraints. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for bone constraints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawExternalForce_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables debug drawing for external forces. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimGraphNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables debug drawing for external forces." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_bEnableDebugDrawBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawBone;
	static void NewProp_bEnableDebugBoneLengthRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugBoneLengthRate;
	static void NewProp_bEnableDebugDrawLimitAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawLimitAngle;
	static void NewProp_bEnableDebugDrawSyncBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawSyncBone;
	static void NewProp_bEnableDebugDrawSphereLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawSphereLimit;
	static void NewProp_bEnableDebugDrawCapsuleLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawCapsuleLimit;
	static void NewProp_bEnableDebugDrawBoxLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawBoxLimit;
	static void NewProp_bEnableDebugDrawPlanerLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawPlanerLimit;
	static void NewProp_bEnableDebugDrawBoneConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawBoneConstraint;
	static void NewProp_bEnableDebugDrawExternalForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawExternalForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_KawaiiPhysics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_KawaiiPhysics, Node), Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2085289797
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBone_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBone = { "bEnableDebugDrawBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawBone_MetaData), NewProp_bEnableDebugDrawBone_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugBoneLengthRate_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugBoneLengthRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugBoneLengthRate = { "bEnableDebugBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugBoneLengthRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugBoneLengthRate_MetaData), NewProp_bEnableDebugBoneLengthRate_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawLimitAngle_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawLimitAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawLimitAngle = { "bEnableDebugDrawLimitAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawLimitAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawLimitAngle_MetaData), NewProp_bEnableDebugDrawLimitAngle_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawSyncBone_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawSyncBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawSyncBone = { "bEnableDebugDrawSyncBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawSyncBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawSyncBone_MetaData), NewProp_bEnableDebugDrawSyncBone_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawSphereLimit_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawSphereLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawSphereLimit = { "bEnableDebugDrawSphereLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawSphereLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawSphereLimit_MetaData), NewProp_bEnableDebugDrawSphereLimit_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawCapsuleLimit_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawCapsuleLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawCapsuleLimit = { "bEnableDebugDrawCapsuleLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawCapsuleLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawCapsuleLimit_MetaData), NewProp_bEnableDebugDrawCapsuleLimit_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBoxLimit_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawBoxLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBoxLimit = { "bEnableDebugDrawBoxLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBoxLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawBoxLimit_MetaData), NewProp_bEnableDebugDrawBoxLimit_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawPlanerLimit_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawPlanerLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawPlanerLimit = { "bEnableDebugDrawPlanerLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawPlanerLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawPlanerLimit_MetaData), NewProp_bEnableDebugDrawPlanerLimit_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBoneConstraint_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawBoneConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBoneConstraint = { "bEnableDebugDrawBoneConstraint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBoneConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawBoneConstraint_MetaData), NewProp_bEnableDebugDrawBoneConstraint_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawExternalForce_SetBit(void* Obj)
{
	((UAnimGraphNode_KawaiiPhysics*)Obj)->bEnableDebugDrawExternalForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawExternalForce = { "bEnableDebugDrawExternalForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_KawaiiPhysics), &Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawExternalForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDrawExternalForce_MetaData), NewProp_bEnableDebugDrawExternalForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugBoneLengthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawLimitAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawSyncBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawSphereLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawCapsuleLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBoxLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawPlanerLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawBoneConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::NewProp_bEnableDebugDrawExternalForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysicsEd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::ClassParams = {
	&UAnimGraphNode_KawaiiPhysics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_KawaiiPhysics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_KawaiiPhysics.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_KawaiiPhysics.OuterSingleton;
}
template<> KAWAIIPHYSICSED_API UClass* StaticClass<UAnimGraphNode_KawaiiPhysics>()
{
	return UAnimGraphNode_KawaiiPhysics::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_KawaiiPhysics);
UAnimGraphNode_KawaiiPhysics::~UAnimGraphNode_KawaiiPhysics() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_KawaiiPhysics)
// End Class UAnimGraphNode_KawaiiPhysics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysicsEd_Public_AnimGraphNode_KawaiiPhysics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_KawaiiPhysics, UAnimGraphNode_KawaiiPhysics::StaticClass, TEXT("UAnimGraphNode_KawaiiPhysics"), &Z_Registration_Info_UClass_UAnimGraphNode_KawaiiPhysics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_KawaiiPhysics), 1926384509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysicsEd_Public_AnimGraphNode_KawaiiPhysics_h_1021470800(TEXT("/Script/KawaiiPhysicsEd"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysicsEd_Public_AnimGraphNode_KawaiiPhysics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysicsEd_Public_AnimGraphNode_KawaiiPhysics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

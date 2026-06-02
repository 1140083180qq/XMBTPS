// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsSyncBone.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KawaiiPhysics() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_NoRegister();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_NoRegister();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FBoxLimit();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitBase();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FModifyBoneConstraint();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin Enum EKawaiiPhysicsSimulationSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKawaiiPhysicsSimulationSpace;
static UEnum* EKawaiiPhysicsSimulationSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKawaiiPhysicsSimulationSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKawaiiPhysicsSimulationSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EKawaiiPhysicsSimulationSpace"));
	}
	return Z_Registration_Info_UEnum_EKawaiiPhysicsSimulationSpace.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EKawaiiPhysicsSimulationSpace>()
{
	return EKawaiiPhysicsSimulationSpace_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BaseBoneSpace.Comment", "/** Simulate in another bone space */" },
		{ "BaseBoneSpace.Name", "EKawaiiPhysicsSimulationSpace::BaseBoneSpace" },
		{ "BaseBoneSpace.ToolTip", "Simulate in another bone space" },
		{ "BlueprintType", "true" },
		{ "ComponentSpace.Comment", "/** Simulate in component space */" },
		{ "ComponentSpace.Name", "EKawaiiPhysicsSimulationSpace::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Simulate in component space" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "WorldSpace.Comment", "/** Simulate in world space. This fixes the issues of root bones moving suddenly */" },
		{ "WorldSpace.Name", "EKawaiiPhysicsSimulationSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "Simulate in world space. This fixes the issues of root bones moving suddenly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKawaiiPhysicsSimulationSpace::ComponentSpace", (int64)EKawaiiPhysicsSimulationSpace::ComponentSpace },
		{ "EKawaiiPhysicsSimulationSpace::WorldSpace", (int64)EKawaiiPhysicsSimulationSpace::WorldSpace },
		{ "EKawaiiPhysicsSimulationSpace::BaseBoneSpace", (int64)EKawaiiPhysicsSimulationSpace::BaseBoneSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"EKawaiiPhysicsSimulationSpace",
	"EKawaiiPhysicsSimulationSpace",
	Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace()
{
	if (!Z_Registration_Info_UEnum_EKawaiiPhysicsSimulationSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKawaiiPhysicsSimulationSpace.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKawaiiPhysicsSimulationSpace.InnerSingleton;
}
// End Enum EKawaiiPhysicsSimulationSpace

// Begin Enum EPlanarConstraint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlanarConstraint;
static UEnum* EPlanarConstraint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EPlanarConstraint"));
	}
	return Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EPlanarConstraint>()
{
	return EPlanarConstraint_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the planar constraint axis in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "None.Comment", "/** No planar constraint */" },
		{ "None.Name", "EPlanarConstraint::None" },
		{ "None.ToolTip", "No planar constraint" },
		{ "ScriptName", "KP_PlanarConstraint" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the planar constraint axis in KawaiiPhysics." },
#endif
		{ "X.Comment", "/** Constrain to the X axis */" },
		{ "X.Name", "EPlanarConstraint::X" },
		{ "X.ToolTip", "Constrain to the X axis" },
		{ "Y.Comment", "/** Constrain to the Y axis */" },
		{ "Y.Name", "EPlanarConstraint::Y" },
		{ "Y.ToolTip", "Constrain to the Y axis" },
		{ "Z.Comment", "/** Constrain to the Z axis */" },
		{ "Z.Name", "EPlanarConstraint::Z" },
		{ "Z.ToolTip", "Constrain to the Z axis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlanarConstraint::None", (int64)EPlanarConstraint::None },
		{ "EPlanarConstraint::X", (int64)EPlanarConstraint::X },
		{ "EPlanarConstraint::Y", (int64)EPlanarConstraint::Y },
		{ "EPlanarConstraint::Z", (int64)EPlanarConstraint::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"EPlanarConstraint",
	"EPlanarConstraint",
	Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint()
{
	if (!Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton;
}
// End Enum EPlanarConstraint

// Begin Enum EBoneForwardAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneForwardAxis;
static UEnum* EBoneForwardAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EBoneForwardAxis"));
	}
	return Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EBoneForwardAxis>()
{
	return EBoneForwardAxis_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the forward axis of a bone in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the forward axis of a bone in KawaiiPhysics." },
#endif
		{ "X_Negative.Name", "EBoneForwardAxis::X_Negative" },
		{ "X_Positive.Name", "EBoneForwardAxis::X_Positive" },
		{ "Y_Negative.Name", "EBoneForwardAxis::Y_Negative" },
		{ "Y_Positive.Name", "EBoneForwardAxis::Y_Positive" },
		{ "Z_Negative.Name", "EBoneForwardAxis::Z_Negative" },
		{ "Z_Positive.Name", "EBoneForwardAxis::Z_Positive" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBoneForwardAxis::X_Positive", (int64)EBoneForwardAxis::X_Positive },
		{ "EBoneForwardAxis::X_Negative", (int64)EBoneForwardAxis::X_Negative },
		{ "EBoneForwardAxis::Y_Positive", (int64)EBoneForwardAxis::Y_Positive },
		{ "EBoneForwardAxis::Y_Negative", (int64)EBoneForwardAxis::Y_Negative },
		{ "EBoneForwardAxis::Z_Positive", (int64)EBoneForwardAxis::Z_Positive },
		{ "EBoneForwardAxis::Z_Negative", (int64)EBoneForwardAxis::Z_Negative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"EBoneForwardAxis",
	"EBoneForwardAxis",
	Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis()
{
	if (!Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton;
}
// End Enum EBoneForwardAxis

// Begin Enum ECollisionLimitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionLimitType;
static UEnum* ECollisionLimitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ECollisionLimitType"));
	}
	return Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionLimitType>()
{
	return ECollisionLimitType_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Name", "ECollisionLimitType::Box" },
		{ "Capsule.Name", "ECollisionLimitType::Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the type of collision limit in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "None.Name", "ECollisionLimitType::None" },
		{ "Planar.Name", "ECollisionLimitType::Planar" },
		{ "Spherical.Name", "ECollisionLimitType::Spherical" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the type of collision limit in KawaiiPhysics." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionLimitType::None", (int64)ECollisionLimitType::None },
		{ "ECollisionLimitType::Spherical", (int64)ECollisionLimitType::Spherical },
		{ "ECollisionLimitType::Capsule", (int64)ECollisionLimitType::Capsule },
		{ "ECollisionLimitType::Box", (int64)ECollisionLimitType::Box },
		{ "ECollisionLimitType::Planar", (int64)ECollisionLimitType::Planar },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"ECollisionLimitType",
	"ECollisionLimitType",
	Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType()
{
	if (!Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton;
}
// End Enum ECollisionLimitType

// Begin Enum ECollisionSourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionSourceType;
static UEnum* ECollisionSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ECollisionSourceType"));
	}
	return Z_Registration_Info_UEnum_ECollisionSourceType.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionSourceType>()
{
	return ECollisionSourceType_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimNode.Comment", "/** Use the value set in the AnimNode */" },
		{ "AnimNode.Name", "ECollisionSourceType::AnimNode" },
		{ "AnimNode.ToolTip", "Use the value set in the AnimNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the source type of the collision limit in KawaiiPhysics.\n */" },
#endif
		{ "DataAsset.Comment", "/** Use the value set in the DataAsset */" },
		{ "DataAsset.Name", "ECollisionSourceType::DataAsset" },
		{ "DataAsset.ToolTip", "Use the value set in the DataAsset" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PhysicsAsset.Comment", "/** Use the value set in the PhysicsAsset */" },
		{ "PhysicsAsset.Name", "ECollisionSourceType::PhysicsAsset" },
		{ "PhysicsAsset.ToolTip", "Use the value set in the PhysicsAsset" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the source type of the collision limit in KawaiiPhysics." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionSourceType::AnimNode", (int64)ECollisionSourceType::AnimNode },
		{ "ECollisionSourceType::DataAsset", (int64)ECollisionSourceType::DataAsset },
		{ "ECollisionSourceType::PhysicsAsset", (int64)ECollisionSourceType::PhysicsAsset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"ECollisionSourceType",
	"ECollisionSourceType",
	Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType()
{
	if (!Z_Registration_Info_UEnum_ECollisionSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionSourceType.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionSourceType.InnerSingleton;
}
// End Enum ECollisionSourceType

// Begin ScriptStruct FCollisionLimitBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionLimitBase;
class UScriptStruct* FCollisionLimitBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionLimitBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionLimitBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionLimitBase, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CollisionLimitBase"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionLimitBase.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCollisionLimitBase>()
{
	return FCollisionLimitBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionLimitBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base structure for defining collision limits in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base structure for defining collision limits in KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bone to attach the sphere to */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone to attach the sphere to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetLocation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset location from the driving bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset location from the driving bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset rotation from the driving bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset rotation from the driving bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Location of the collision limit */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location of the collision limit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotation of the collision limit */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation of the collision limit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the collision limit is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the collision limit is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source type of the collision limit */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source type of the collision limit" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unique identifier for the collision limit (editor only) */" },
#endif
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique identifier for the collision limit (editor only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the collision limit (editor only) */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the collision limit (editor only)" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionLimitBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone = { "DrivingBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitBase, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingBone_MetaData), NewProp_DrivingBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitBase, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetLocation_MetaData), NewProp_OffsetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitBase, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetRotation_MetaData), NewProp_OffsetRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitBase, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitBase, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((FCollisionLimitBase*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCollisionLimitBase), &Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitBase, SourceType), Z_Construct_UEnum_KawaiiPhysics_ECollisionSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) }; // 216402010
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitBase, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitBase, Type), Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2246379926
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_SourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_SourceType,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"CollisionLimitBase",
	Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers),
	sizeof(FCollisionLimitBase),
	alignof(FCollisionLimitBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitBase()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionLimitBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionLimitBase.InnerSingleton, Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionLimitBase.InnerSingleton;
}
// End ScriptStruct FCollisionLimitBase

// Begin ScriptStruct FSphericalLimit
static_assert(std::is_polymorphic<FSphericalLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FSphericalLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalLimit;
class UScriptStruct* FSphericalLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimit, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimit"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimit>()
{
	return FSphericalLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSphericalLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing a spherical limit for collision in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing a spherical limit for collision in KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius of the sphere */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the sphere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[] = {
		{ "Category", "SphericalLimit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalLimit, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalLimit, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitType_MetaData), NewProp_LimitType_MetaData) }; // 1450718878
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FCollisionLimitBase,
	&NewStructOps,
	"SphericalLimit",
	Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers),
	sizeof(FSphericalLimit),
	alignof(FSphericalLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton, Z_Construct_UScriptStruct_FSphericalLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton;
}
// End ScriptStruct FSphericalLimit

// Begin ScriptStruct FCapsuleLimit
static_assert(std::is_polymorphic<FCapsuleLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FCapsuleLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapsuleLimit;
class UScriptStruct* FCapsuleLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapsuleLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimit, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimit"));
	}
	return Z_Registration_Info_UScriptStruct_CapsuleLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimit>()
{
	return FCapsuleLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCapsuleLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing a capsule limit for collision in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing a capsule limit for collision in KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius of the capsule */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the capsule" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Length of the capsule */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the capsule" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapsuleLimit, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapsuleLimit, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FCollisionLimitBase,
	&NewStructOps,
	"CapsuleLimit",
	Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers),
	sizeof(FCapsuleLimit),
	alignof(FCapsuleLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCapsuleLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapsuleLimit.InnerSingleton, Z_Construct_UScriptStruct_FCapsuleLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CapsuleLimit.InnerSingleton;
}
// End ScriptStruct FCapsuleLimit

// Begin ScriptStruct FBoxLimit
static_assert(std::is_polymorphic<FBoxLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FBoxLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxLimit;
class UScriptStruct* FBoxLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxLimit, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("BoxLimit"));
	}
	return Z_Registration_Info_UScriptStruct_BoxLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FBoxLimit>()
{
	return FBoxLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoxLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing a box limit for collision in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing a box limit for collision in KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "BoxLimit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The extent of the box defining the box limit */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The extent of the box defining the box limit" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxLimit_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxLimit, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxLimit_Statics::NewProp_Extent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FCollisionLimitBase,
	&NewStructOps,
	"BoxLimit",
	Z_Construct_UScriptStruct_FBoxLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimit_Statics::PropPointers),
	sizeof(FBoxLimit),
	alignof(FBoxLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoxLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoxLimit()
{
	if (!Z_Registration_Info_UScriptStruct_BoxLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxLimit.InnerSingleton, Z_Construct_UScriptStruct_FBoxLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoxLimit.InnerSingleton;
}
// End ScriptStruct FBoxLimit

// Begin ScriptStruct FPlanarLimit
static_assert(std::is_polymorphic<FPlanarLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FPlanarLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlanarLimit;
class UScriptStruct* FPlanarLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimit, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimit"));
	}
	return Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimit>()
{
	return FPlanarLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlanarLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing a planar limit for collision in KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing a planar limit for collision in KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The plane defining the planar limit */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The plane defining the planar limit" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlanarLimit, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plane_MetaData), NewProp_Plane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FCollisionLimitBase,
	&NewStructOps,
	"PlanarLimit",
	Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers),
	sizeof(FPlanarLimit),
	alignof(FPlanarLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit()
{
	if (!Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton, Z_Construct_UScriptStruct_FPlanarLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton;
}
// End ScriptStruct FPlanarLimit

// Begin ScriptStruct FKawaiiPhysicsRootBoneSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysicsRootBoneSetting;
class UScriptStruct* FKawaiiPhysicsRootBoneSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsRootBoneSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysicsRootBoneSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsRootBoneSetting"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsRootBoneSetting.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsRootBoneSetting>()
{
	return FKawaiiPhysicsRootBoneSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing the root bone settings for KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing the root bone settings for KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[] = {
		{ "Category", "Bones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\x8c\x87\xe5\xae\x9a\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\n\x09* Control the specified bone and the bones below it\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\nControl the specified bone and the bones below it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideExcludeBones_MetaData[] = {
		{ "Category", "Bones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\x8b\xe3\x82\x89\xe9\x99\xa4\xe5\x8e\xbb\n\x09* Do NOT control the specified bone and the bones below it\n\x09*/" },
#endif
		{ "EditCondition", "bUseOverrideExcludeBones" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\x8b\xe3\x82\x89\xe9\x99\xa4\xe5\x8e\xbb\nDo NOT control the specified bone and the bones below it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideExcludeBones_MetaData[] = {
		{ "Category", "Bones" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideExcludeBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideExcludeBones;
	static void NewProp_bUseOverrideExcludeBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideExcludeBones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsRootBoneSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsRootBoneSetting, RootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBone_MetaData), NewProp_RootBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_OverrideExcludeBones_Inner = { "OverrideExcludeBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_OverrideExcludeBones = { "OverrideExcludeBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsRootBoneSetting, OverrideExcludeBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideExcludeBones_MetaData), NewProp_OverrideExcludeBones_MetaData) }; // 4218265988
void Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_bUseOverrideExcludeBones_SetBit(void* Obj)
{
	((FKawaiiPhysicsRootBoneSetting*)Obj)->bUseOverrideExcludeBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_bUseOverrideExcludeBones = { "bUseOverrideExcludeBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysicsRootBoneSetting), &Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_bUseOverrideExcludeBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOverrideExcludeBones_MetaData), NewProp_bUseOverrideExcludeBones_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_RootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_OverrideExcludeBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_OverrideExcludeBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewProp_bUseOverrideExcludeBones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"KawaiiPhysicsRootBoneSetting",
	Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::PropPointers),
	sizeof(FKawaiiPhysicsRootBoneSetting),
	alignof(FKawaiiPhysicsRootBoneSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsRootBoneSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysicsRootBoneSetting.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsRootBoneSetting.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysicsRootBoneSetting

// Begin ScriptStruct FKawaiiPhysicsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings;
class UScriptStruct* FKawaiiPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsSettings>()
{
	return FKawaiiPhysicsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing the settings for KawaiiPhysics.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing the settings for KawaiiPhysics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\xb8\x9b\xe8\xa1\xb0\xe5\xba\xa6\xef\xbc\x9a\xe6\x8f\xba\xe3\x82\x8c\xe3\x81\xae\xe5\xbc\xb7\xe3\x81\x95\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe3\x80\x82\xe5\x80\xa4\xe3\x81\x8c\xe5\xb0\x8f\xe3\x81\x95\xe3\x81\x84\xe3\x81\xbb\xe3\x81\xa9\xe3\x80\x81\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe6\x8c\x99\xe5\x8b\x95\xe3\x81\xab\xe5\x8f\x8d\xe6\x98\xa0\n\x09* Damping physical behavior. As the value is smaller, the acceleration is more reflected to the physical behavior\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\x9b\xe8\xa1\xb0\xe5\xba\xa6\xef\xbc\x9a\xe6\x8f\xba\xe3\x82\x8c\xe3\x81\xae\xe5\xbc\xb7\xe3\x81\x95\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe3\x80\x82\xe5\x80\xa4\xe3\x81\x8c\xe5\xb0\x8f\xe3\x81\x95\xe3\x81\x84\xe3\x81\xbb\xe3\x81\xa9\xe3\x80\x81\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe6\x8c\x99\xe5\x8b\x95\xe3\x81\xab\xe5\x8f\x8d\xe6\x98\xa0\nDamping physical behavior. As the value is smaller, the acceleration is more reflected to the physical behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x89\x9b\xe6\x80\xa7\xe5\xba\xa6\xef\xbc\x9a\xe5\x80\xa4\xe3\x81\x8c\xe5\xa4\xa7\xe3\x81\x8d\xe3\x81\x84\xe3\x81\xbb\xe3\x81\xa9\xe3\x80\x81\xe5\x85\x83\xe3\x81\xae\xe5\xbd\xa2\xe7\x8a\xb6\xe3\x82\x92\xe7\xb6\xad\xe6\x8c\x81\n\x09* Stiffness of physical behavior.As the value is larger, pre-physics shape is more respected\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x89\x9b\xe6\x80\xa7\xe5\xba\xa6\xef\xbc\x9a\xe5\x80\xa4\xe3\x81\x8c\xe5\xa4\xa7\xe3\x81\x8d\xe3\x81\x84\xe3\x81\xbb\xe3\x81\xa9\xe3\x80\x81\xe5\x85\x83\xe3\x81\xae\xe5\xbd\xa2\xe7\x8a\xb6\xe3\x82\x92\xe7\xb6\xad\xe6\x8c\x81\nStiffness of physical behavior.As the value is larger, pre-physics shape is more respected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocation_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x83\xaf\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bSkeletal Mesh Component\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\xe3\x81\xae\xe5\x8f\x8d\xe6\x98\xa0\xe5\xba\xa6\n\x09* Influence from movement in world coordinate system of Skeletal Mesh Component\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x83\xaf\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bSkeletal Mesh Component\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\xe3\x81\xae\xe5\x8f\x8d\xe6\x98\xa0\xe5\xba\xa6\nInfluence from movement in world coordinate system of Skeletal Mesh Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotation_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x83\xaf\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bSkeletal Mesh Component\xe3\x81\xae\xe5\x9b\x9e\xe8\xbb\xa2\xe9\x87\x8f\xe3\x81\xae\xe5\x8f\x8d\xe6\x98\xa0\xe5\xba\xa6\n\x09* Influence from rotation in world coordinate system of Skeletal Mesh Component\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x83\xaf\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bSkeletal Mesh Component\xe3\x81\xae\xe5\x9b\x9e\xe8\xbb\xa2\xe9\x87\x8f\xe3\x81\xae\xe5\x8f\x8d\xe6\x98\xa0\xe5\xba\xa6\nInfluence from rotation in world coordinate system of Skeletal Mesh Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe5\x8d\x8a\xe5\xbe\x84\n\x09* Radius of bone's collision\n\x09*/" },
#endif
		{ "DisplayName", "Collision Radius" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe5\x8d\x8a\xe5\xbe\x84\nRadius of bone's collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitAngle_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe7\x89\xa9\xe7\x90\x86\xe6\x8c\x99\xe5\x8b\x95\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe5\x9b\x9e\xe8\xbb\xa2\xe5\x88\xb6\xe9\x99\x90\xe3\x80\x82\xe9\x81\xa9\xe5\x88\x87\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe8\x8d\x92\xe3\x81\xb6\xe3\x82\x8a\xe3\x82\x92\xe6\x8a\x91\xe5\x88\xb6\n\x09* Rotational limitations in physical behavior. Setting the value properly can prevent rampage\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe7\x90\x86\xe6\x8c\x99\xe5\x8b\x95\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe5\x9b\x9e\xe8\xbb\xa2\xe5\x88\xb6\xe9\x99\x90\xe3\x80\x82\xe9\x81\xa9\xe5\x88\x87\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe8\x8d\x92\xe3\x81\xb6\xe3\x82\x8a\xe3\x82\x92\xe6\x8a\x91\xe5\x88\xb6\nRotational limitations in physical behavior. Setting the value properly can prevent rampage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldDampingLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldDampingRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation = { "WorldDampingLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, WorldDampingLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDampingLocation_MetaData), NewProp_WorldDampingLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation = { "WorldDampingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, WorldDampingRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDampingRotation_MetaData), NewProp_WorldDampingRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle = { "LimitAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, LimitAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitAngle_MetaData), NewProp_LimitAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"KawaiiPhysicsSettings",
	Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers),
	sizeof(FKawaiiPhysicsSettings),
	alignof(FKawaiiPhysicsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysicsSettings

// Begin ScriptStruct FKawaiiPhysicsModifyBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone;
class UScriptStruct* FKawaiiPhysicsModifyBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsModifyBone"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsModifyBone>()
{
	return FKawaiiPhysicsModifyBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing a bone that can be modified by the KawaiiPhysics system.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing a bone that can be modified by the KawaiiPhysics system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneRef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the parent bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the parent bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildIndices_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indices of the child bones */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indices of the child bones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Physics settings for the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics settings for the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current location of the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current location of the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevLocation_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Previous location of the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous location of the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevRotation_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Previous rotation of the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous rotation of the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseLocation_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pose location of the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pose location of the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseRotation_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pose rotation of the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pose rotation of the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseScale_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pose scale of the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pose scale of the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneLength_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Length of the bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthFromRoot_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Length from the root bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length from the root bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthRateFromRoot_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Length rate from the root bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length rate from the root bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDummy_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag indicating if this is a dummy bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag indicating if this is a dummy bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipSimulate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ModifyBone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag indicating if simulation should be skipped for this bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag indicating if simulation should be skipped for this bone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneRef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChildIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthFromRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthRateFromRoot;
	static void NewProp_bDummy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDummy;
	static void NewProp_bSkipSimulate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipSimulate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsModifyBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef = { "BoneRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, BoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneRef_MetaData), NewProp_BoneRef_MetaData) }; // 4218265988
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, ParentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndex_MetaData), NewProp_ParentIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndices_Inner = { "ChildIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndices = { "ChildIndices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, ChildIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildIndices_MetaData), NewProp_ChildIndices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PhysicsSettings), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsSettings_MetaData), NewProp_PhysicsSettings_MetaData) }; // 1986350718
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation = { "PrevLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PrevLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevLocation_MetaData), NewProp_PrevLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation = { "PrevRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PrevRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevRotation_MetaData), NewProp_PrevRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation = { "PoseLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseLocation_MetaData), NewProp_PoseLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation = { "PoseRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseRotation_MetaData), NewProp_PoseRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale = { "PoseScale", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseScale_MetaData), NewProp_PoseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneLength = { "BoneLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, BoneLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneLength_MetaData), NewProp_BoneLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot = { "LengthFromRoot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, LengthFromRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthFromRoot_MetaData), NewProp_LengthFromRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthRateFromRoot = { "LengthRateFromRoot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, LengthRateFromRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthRateFromRoot_MetaData), NewProp_LengthRateFromRoot_MetaData) };
void Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_SetBit(void* Obj)
{
	((FKawaiiPhysicsModifyBone*)Obj)->bDummy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy = { "bDummy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysicsModifyBone), &Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDummy_MetaData), NewProp_bDummy_MetaData) };
void Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bSkipSimulate_SetBit(void* Obj)
{
	((FKawaiiPhysicsModifyBone*)Obj)->bSkipSimulate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bSkipSimulate = { "bSkipSimulate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysicsModifyBone), &Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bSkipSimulate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipSimulate_MetaData), NewProp_bSkipSimulate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthRateFromRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bSkipSimulate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"KawaiiPhysicsModifyBone",
	Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers),
	sizeof(FKawaiiPhysicsModifyBone),
	alignof(FKawaiiPhysicsModifyBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysicsModifyBone

// Begin Enum EXPBDComplianceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXPBDComplianceType;
static UEnum* EXPBDComplianceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EXPBDComplianceType"));
	}
	return Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EXPBDComplianceType>()
{
	return EXPBDComplianceType_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Concrete.DisplayName", "Concrete" },
		{ "Concrete.Name", "EXPBDComplianceType::Concrete" },
		{ "Fat.DisplayName", "Fat" },
		{ "Fat.Name", "EXPBDComplianceType::Fat" },
		{ "Leather.DisplayName", "Leather" },
		{ "Leather.Name", "EXPBDComplianceType::Leather" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "Muscle.DisplayName", "Muscle" },
		{ "Muscle.Name", "EXPBDComplianceType::Muscle" },
		{ "Rubber.DisplayName", "Rubber" },
		{ "Rubber.Name", "EXPBDComplianceType::Rubber" },
		{ "Tendon.DisplayName", "Tendon" },
		{ "Tendon.Name", "EXPBDComplianceType::Tendon" },
		{ "Wood.DisplayName", "Wood" },
		{ "Wood.Name", "EXPBDComplianceType::Wood" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXPBDComplianceType::Concrete", (int64)EXPBDComplianceType::Concrete },
		{ "EXPBDComplianceType::Wood", (int64)EXPBDComplianceType::Wood },
		{ "EXPBDComplianceType::Leather", (int64)EXPBDComplianceType::Leather },
		{ "EXPBDComplianceType::Tendon", (int64)EXPBDComplianceType::Tendon },
		{ "EXPBDComplianceType::Rubber", (int64)EXPBDComplianceType::Rubber },
		{ "EXPBDComplianceType::Muscle", (int64)EXPBDComplianceType::Muscle },
		{ "EXPBDComplianceType::Fat", (int64)EXPBDComplianceType::Fat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"EXPBDComplianceType",
	"EXPBDComplianceType",
	Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType()
{
	if (!Z_Registration_Info_UEnum_EXPBDComplianceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXPBDComplianceType.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXPBDComplianceType.InnerSingleton;
}
// End Enum EXPBDComplianceType

// Begin ScriptStruct FModifyBoneConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyBoneConstraint;
class UScriptStruct* FModifyBoneConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyBoneConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyBoneConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyBoneConstraint, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ModifyBoneConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyBoneConstraint.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FModifyBoneConstraint>()
{
	return FModifyBoneConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing a constraint between two bones for the KawaiiPhysics system.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing a constraint between two bones for the KawaiiPhysics system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone1_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The first bone reference in the constraint */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The first bone reference in the constraint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone2_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The second bone reference in the constraint */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The second bone reference in the constraint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCompliance_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag to override the compliance type */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to override the compliance type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComplianceType_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The compliance type to use if overridden */" },
#endif
		{ "EditCondition", "bOverrideCompliance" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The compliance type to use if overridden" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyBoneIndex1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the first modify bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the first modify bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyBoneIndex2_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the second modify bone */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the second modify bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Length of the constraint */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the constraint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDummy_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag indicating if this is a dummy constraint */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag indicating if this is a dummy constraint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lambda_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lambda value for the constraint */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lambda value for the constraint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone2;
	static void NewProp_bOverrideCompliance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCompliance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComplianceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComplianceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModifyBoneIndex1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModifyBoneIndex2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static void NewProp_bIsDummy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDummy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lambda;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyBoneConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_Bone1 = { "Bone1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraint, Bone1), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone1_MetaData), NewProp_Bone1_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_Bone2 = { "Bone2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraint, Bone2), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone2_MetaData), NewProp_Bone2_MetaData) }; // 4218265988
void Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bOverrideCompliance_SetBit(void* Obj)
{
	((FModifyBoneConstraint*)Obj)->bOverrideCompliance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bOverrideCompliance = { "bOverrideCompliance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModifyBoneConstraint), &Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bOverrideCompliance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCompliance_MetaData), NewProp_bOverrideCompliance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_ComplianceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_ComplianceType = { "ComplianceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraint, ComplianceType), Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComplianceType_MetaData), NewProp_ComplianceType_MetaData) }; // 3801623715
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_ModifyBoneIndex1 = { "ModifyBoneIndex1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraint, ModifyBoneIndex1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyBoneIndex1_MetaData), NewProp_ModifyBoneIndex1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_ModifyBoneIndex2 = { "ModifyBoneIndex2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraint, ModifyBoneIndex2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyBoneIndex2_MetaData), NewProp_ModifyBoneIndex2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraint, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
void Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bIsDummy_SetBit(void* Obj)
{
	((FModifyBoneConstraint*)Obj)->bIsDummy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bIsDummy = { "bIsDummy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModifyBoneConstraint), &Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bIsDummy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDummy_MetaData), NewProp_bIsDummy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_Lambda = { "Lambda", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyBoneConstraint, Lambda), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lambda_MetaData), NewProp_Lambda_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_Bone1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_Bone2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bOverrideCompliance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_ComplianceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_ComplianceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_ModifyBoneIndex1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_ModifyBoneIndex2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bIsDummy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_Lambda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"ModifyBoneConstraint",
	Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::PropPointers),
	sizeof(FModifyBoneConstraint),
	alignof(FModifyBoneConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifyBoneConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyBoneConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyBoneConstraint.InnerSingleton, Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModifyBoneConstraint.InnerSingleton;
}
// End ScriptStruct FModifyBoneConstraint

// Begin ScriptStruct FAnimNode_KawaiiPhysics
static_assert(std::is_polymorphic<FAnimNode_KawaiiPhysics>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_KawaiiPhysics cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics;
class UScriptStruct* FAnimNode_KawaiiPhysics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("AnimNode_KawaiiPhysics"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FAnimNode_KawaiiPhysics>()
{
	return FAnimNode_KawaiiPhysics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[] = {
		{ "Category", "Bones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\x8c\x87\xe5\xae\x9a\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\n\x09* Control the specified bone and the bones below it\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\nControl the specified bone and the bones below it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeBones_MetaData[] = {
		{ "Category", "Bones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\x8b\xe3\x82\x89\xe9\x99\xa4\xe5\x8e\xbb\n\x09* Do NOT control the specified bone and the bones below it\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\x8b\xe3\x82\x89\xe9\x99\xa4\xe5\x8e\xbb\nDo NOT control the specified bone and the bones below it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRootBones_MetaData[] = {
		{ "Category", "Bones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\x8c\x87\xe5\xae\x9a\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab(\xe8\xbf\xbd\xe5\x8a\xa0\xe7\x94\xa8)\n\x09* Control the specified bone and the bones below it (For Addition)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "TitleProperty", "RootBone" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab(\xe8\xbf\xbd\xe5\x8a\xa0\xe7\x94\xa8)\nControl the specified bone and the bones below it (For Addition)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DummyBoneLength_MetaData[] = {
		{ "Category", "Bones" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* 0\xe3\x82\x88\xe3\x82\x8a\xe5\xa4\xa7\xe3\x81\x8d\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x80\x81\xe5\x88\xb6\xe5\xbe\xa1\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xab\xe3\x83\x80\xe3\x83\x9f\xe3\x83\xbc\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x80\x82\xe3\x83\x80\xe3\x83\x9f\xe3\x83\xbc\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x82\x92\xe6\x94\xb9\xe5\x96\x84\n\x09* Add a dummy bone to the end bone if it's above 0. It affects end bone rotation. \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0\xe3\x82\x88\xe3\x82\x8a\xe5\xa4\xa7\xe3\x81\x8d\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x80\x81\xe5\x88\xb6\xe5\xbe\xa1\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xab\xe3\x83\x80\xe3\x83\x9f\xe3\x83\xbc\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x80\x82\xe3\x83\x80\xe3\x83\x9f\xe3\x83\xbc\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x82\x92\xe6\x94\xb9\xe5\x96\x84\nAdd a dummy bone to the end bone if it's above 0. It affects end bone rotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneForwardAxis_MetaData[] = {
		{ "Category", "Bones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x89\x8d\xe6\x96\xb9\xe3\x80\x82\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x82\x84\xe3\x83\x80\xe3\x83\x9f\xe3\x83\xbc\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe9\x85\x8d\xe7\xbd\xae\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe5\xbd\xb1\xe9\x9f\xbf\n\x09* Bone forward direction. Affects the placement of physical controls and dummy bones\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x89\x8d\xe6\x96\xb9\xe3\x80\x82\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x82\x84\xe3\x83\x80\xe3\x83\x9f\xe3\x83\xbc\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe9\x85\x8d\xe7\xbd\xae\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe5\xbd\xb1\xe9\x9f\xbf\nBone forward direction. Affects the placement of physical controls and dummy bones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x81\xae\xe5\x9f\xba\xe6\x9c\xac\xe8\xa8\xad\xe5\xae\x9a\n\x09* Basic physics settings\n\x09*/" },
#endif
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x81\xae\xe5\x9f\xba\xe6\x9c\xac\xe8\xa8\xad\xe5\xae\x9a\nBasic physics settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xef\xbc\x88""Component\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe5\xbe\xae\xe5\xb0\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x83\x9e\xe3\x83\xb3\xe3\x82\xb9\xe4\xbd\x8e\xe4\xb8\x8b\xe3\x81\x8c\xe7\x99\xba\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x81\x8c\xe3\x80\x81\xe6\x80\xa5\xe6\xbf\x80\xe3\x81\xaaRoot\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x83\xbb\xe5\x9b\x9e\xe8\xbb\xa2\xe3\x81\xae\xe5\xbd\xb1\xe9\x9f\xbf\xe3\x82\x92\xe5\x9b\x9e\xe9\x81\xbf\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xef\xbc\x89\n\x09* Simulation space for physics control (Using anything other than ComponentSpace may cause a slight performance drop, but it can avoid the impact of sudden Root bone movement and rotation)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xef\xbc\x88""Component\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe5\xbe\xae\xe5\xb0\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x83\x9e\xe3\x83\xb3\xe3\x82\xb9\xe4\xbd\x8e\xe4\xb8\x8b\xe3\x81\x8c\xe7\x99\xba\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x81\x8c\xe3\x80\x81\xe6\x80\xa5\xe6\xbf\x80\xe3\x81\xaaRoot\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x83\xbb\xe5\x9b\x9e\xe8\xbb\xa2\xe3\x81\xae\xe5\xbd\xb1\xe9\x9f\xbf\xe3\x82\x92\xe5\x9b\x9e\xe9\x81\xbf\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xef\xbc\x89\nSimulation space for physics control (Using anything other than ComponentSpace may cause a slight performance drop, but it can avoid the impact of sudden Root bone movement and rotation)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationBaseBone_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* BaseBone\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe6\x99\x82\xe3\x81\xae\xe5\x9f\xba\xe6\xba\x96\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\n\x09* BaseBone coordinate system reference bone\n\x09*/" },
#endif
		{ "EditCondition", "SimulationSpace == EKawaiiPhysicsSimulationSpace::BaseBoneSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BaseBone\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe6\x99\x82\xe3\x81\xae\xe5\x9f\xba\xe6\xba\x96\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\nBaseBone coordinate system reference bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFramerate_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xbf\xe3\x83\xbc\xe3\x82\xb2\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x83\xac\xe3\x83\xbc\xe3\x83\x88\n\x09* Target Frame Rate\n\x09*/" },
#endif
		{ "EditCondition", "OverrideTargetFramerate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\xb2\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x83\xac\xe3\x83\xbc\xe3\x83\x88\nTarget Frame Rate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideTargetFramerate_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmUpFrames_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe7\x89\xa9\xe7\x90\x86\xe3\x81\xae\xe7\xa9\xba\xe5\x9b\x9e\xe3\x81\x97\xe5\x9b\x9e\xe6\x95\xb0\xe3\x80\x82\xe7\x89\xa9\xe7\x90\x86\xe5\x87\xa6\xe7\x90\x86\xe3\x81\x8c\xe8\x90\xbd\xe3\x81\xa1\xe7\x9d\x80\xe3\x81\x84\xe3\x81\xa6\xe3\x81\x8b\xe3\x82\x89\xe9\x96\x8b\xe5\xa7\x8b\xe3\x83\xbb\xe8\xa1\xa8\xe7\xa4\xba\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe9\x9a\x9b\xe3\x81\xab\xe4\xbd\xbf\xe7\x94\xa8\n\x09* Number of times physics has been idle. Used when you want to start/display after physics processing has settled down\n\x09*/" },
#endif
		{ "EditCondition", "bNeedWarmUp" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe7\x90\x86\xe3\x81\xae\xe7\xa9\xba\xe5\x9b\x9e\xe3\x81\x97\xe5\x9b\x9e\xe6\x95\xb0\xe3\x80\x82\xe7\x89\xa9\xe7\x90\x86\xe5\x87\xa6\xe7\x90\x86\xe3\x81\x8c\xe8\x90\xbd\xe3\x81\xa1\xe7\x9d\x80\xe3\x81\x84\xe3\x81\xa6\xe3\x81\x8b\xe3\x82\x89\xe9\x96\x8b\xe5\xa7\x8b\xe3\x83\xbb\xe8\xa1\xa8\xe7\xa4\xba\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe9\x9a\x9b\xe3\x81\xab\xe4\xbd\xbf\xe7\x94\xa8\nNumber of times physics has been idle. Used when you want to start/display after physics processing has settled down" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWarmUpWhenResetDynamics_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* ResetDynamics\xe6\x99\x82\xe3\x81\xab\xe7\x89\xa9\xe7\x90\x86\xe3\x81\xae\xe7\xa9\xba\xe5\x9b\x9e\xe3\x81\x97\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n\x09* Flags to use warmup physics when ResetDynamics\n\x09*/" },
#endif
		{ "EditCondition", "bNeedWarmUp" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ResetDynamics\xe6\x99\x82\xe3\x81\xab\xe7\x89\xa9\xe7\x90\x86\xe3\x81\xae\xe7\xa9\xba\xe5\x9b\x9e\xe3\x81\x97\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nFlags to use warmup physics when ResetDynamics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedWarmUp_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistanceThreshold_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* 1\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bSkeletalMeshComponent\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\xe3\x81\x8c\xe8\xa8\xad\xe5\xae\x9a\xe5\x80\xa4\xe3\x82\x92\xe8\xb6\x85\xe3\x81\x88\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe3\x81\x9d\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x81\xab\xe5\x8f\x8d\xe6\x98\xa0\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\n\x09* If the amount of movement of a SkeletalMeshComponent in one frame exceeds the set value, that amount of movement will not be reflected in the physics control.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bSkeletalMeshComponent\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\xe3\x81\x8c\xe8\xa8\xad\xe5\xae\x9a\xe5\x80\xa4\xe3\x82\x92\xe8\xb6\x85\xe3\x81\x88\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe3\x81\x9d\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x81\xab\xe5\x8f\x8d\xe6\x98\xa0\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\nIf the amount of movement of a SkeletalMeshComponent in one frame exceeds the set value, that amount of movement will not be reflected in the physics control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportRotationThreshold_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* 1\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bSkeletalMeshComponent\xe3\x81\xae\xe5\x9b\x9e\xe8\xbb\xa2\xe9\x87\x8f\xe3\x81\x8c\xe8\xa8\xad\xe5\xae\x9a\xe5\x80\xa4\xe3\x82\x92\xe8\xb6\x85\xe3\x81\x88\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe3\x81\x9d\xe3\x81\xae\xe5\x9b\x9e\xe8\xbb\xa2\xe9\x87\x8f\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x81\xab\xe5\x8f\x8d\xe6\x98\xa0\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\n\x09* If the rotation amount of SkeletalMeshComponent in one frame exceeds the set value, the rotation amount will not be reflected in the physics control.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8bSkeletalMeshComponent\xe3\x81\xae\xe5\x9b\x9e\xe8\xbb\xa2\xe9\x87\x8f\xe3\x81\x8c\xe8\xa8\xad\xe5\xae\x9a\xe5\x80\xa4\xe3\x82\x92\xe8\xb6\x85\xe3\x81\x88\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe3\x81\x9d\xe3\x81\xae\xe5\x9b\x9e\xe8\xbb\xa2\xe9\x87\x8f\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe3\x81\xab\xe5\x8f\x8d\xe6\x98\xa0\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\nIf the rotation amount of SkeletalMeshComponent in one frame exceeds the set value, the rotation amount will not be reflected in the physics control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarConstraint_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe8\xbb\xb8\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\x9f\xe5\xb9\xb3\xe9\x9d\xa2\xe4\xb8\x8a\xe3\x81\xab\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x9b\xba\xe5\xae\x9a\n\x09* Fix the bone on the specified plane \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe8\xbb\xb8\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\x9f\xe5\xb9\xb3\xe9\x9d\xa2\xe4\xb8\x8a\xe3\x81\xab\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe5\x9b\xba\xe5\xae\x9a\nFix the bone on the specified plane" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelCompMoveScale_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* SkeletalMeshComponent\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe6\x8c\x99\xe5\x8b\x95\xe3\x81\xab\xe5\x8f\x8d\xe6\x98\xa0\xe3\x81\x99\xe3\x82\x8b\xe9\x9a\x9b\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe3\x82\xb9\xe3\x82\xb1\xe3\x83\xbc\xe3\x83\xab\xe3\x80\x82\n\x09* Scale to apply when reflecting the movement of the SkeletalMeshComponent in physical behavior.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SkeletalMeshComponent\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x87\x8f\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe6\x8c\x99\xe5\x8b\x95\xe3\x81\xab\xe5\x8f\x8d\xe6\x98\xa0\xe3\x81\x99\xe3\x82\x8b\xe9\x9a\x9b\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe3\x82\xb9\xe3\x82\xb1\xe3\x83\xbc\xe3\x83\xab\xe3\x80\x82\nScale to apply when reflecting the movement of the SkeletalMeshComponent in physical behavior." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePhysicsSettingsInGame_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n \x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\x89\xa9\xe7\x90\x86\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe6\xaf\x8e\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe6\x9b\xb4\xe6\x96\xb0\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x80\x82\n \x09* \xe7\x84\xa1\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x83\x91\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x83\x9e\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe5\x83\x85\xe3\x81\x8b\xe3\x81\xab\xe6\x94\xb9\xe5\x96\x84\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8c\xe3\x80\x81\xe5\xae\x9f\xe8\xa1\x8c\xe4\xb8\xad\xe3\x81\xab\xe7\x89\xa9\xe7\x90\x86\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xab\n\x09* Flag to update the physics parameters of each bone every frame.\n\x09* Disabling this will slightly improve performance, but it will make it impossible to change physics parameters during execution.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\x89\xa9\xe7\x90\x86\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe6\xaf\x8e\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe6\x9b\xb4\xe6\x96\xb0\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x80\x82\n\xe7\x84\xa1\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x83\x91\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x83\x9e\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe5\x83\x85\xe3\x81\x8b\xe3\x81\xab\xe6\x94\xb9\xe5\x96\x84\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8c\xe3\x80\x81\xe5\xae\x9f\xe8\xa1\x8c\xe4\xb8\xad\xe3\x81\xab\xe7\x89\xa9\xe7\x90\x86\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xab\nFlag to update the physics parameters of each bone every frame.\nDisabling this will slightly improve performance, but it will make it impossible to change physics parameters during execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetBoneTransformWhenBoneNotFound_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\x8c\xe8\xa6\x8b\xe3\x81\xa4\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xabTransform\xe3\x82\x92\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x80\x82\xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe3\x81\xab\xe3\x81\xaf\xe7\x84\xa1\xe5\x8a\xb9\xe3\x82\x92\xe6\x8e\xa8\xe5\xa5\xa8\n\x09* Flag to reset Transform when the controlled bone is not found. It is generally recommended to disable this.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xb6\xe5\xbe\xa1\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\x8c\xe8\xa6\x8b\xe3\x81\xa4\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xabTransform\xe3\x82\x92\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x80\x82\xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe3\x81\xab\xe3\x81\xaf\xe7\x84\xa1\xe5\x8a\xb9\xe3\x82\x92\xe6\x8e\xa8\xe5\xa5\xa8\nFlag to reset Transform when the controlled bone is not found. It is generally recommended to disable this." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ Damping \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Physics Settings/Damping parameters applied to each bone.\n\x09* Multiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0).\n\x09*/" },
#endif
		{ "DisplayName", "Damping Rate by Bone Length Rate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ Damping \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Physics Settings/Damping parameters applied to each bone.\nMultiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ Stiffness \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Physics Settings/Stiffness parameters applied to each bone.\n\x09* Multiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0).\n\x09*/" },
#endif
		{ "DisplayName", "Stiffness Rate by Bone Length Rate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ Stiffness \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Physics Settings/Stiffness parameters applied to each bone.\nMultiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocationCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ WorldDampingLocation \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Physics Settings/WorldDampingLocation parameters applied to each bone.\n\x09* Multiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0).\n\x09*/" },
#endif
		{ "DisplayName", "World Damping Location Rate by Bone Length Rate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ WorldDampingLocation \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Physics Settings/WorldDampingLocation parameters applied to each bone.\nMultiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotationCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ WorldDampingRotation \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Physics Settings/WorldDampingRotation parameters applied to each bone.\n\x09* Multiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0).\n\x09*/" },
#endif
		{ "DisplayName", "World Damping Rotation Rate by Bone Length Rate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ WorldDampingRotation \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Physics Settings/WorldDampingRotation parameters applied to each bone.\nMultiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ CollisionRadius \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Physics Settings/CollisionRadius parameters applied to each bone.\n\x09* Multiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0).\n\x09*/" },
#endif
		{ "DisplayName", "Radius Rate by Bone Length Rate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ CollisionRadius \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Physics Settings/CollisionRadius parameters applied to each bone.\nMultiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitAngleCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ LimitAngle \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Physics Settings/LimitAngle parameters applied to each bone.\n\x09* Multiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0).\n\x09*/" },
#endif
		{ "DisplayName", "LimitAngle Rate by Bone Length Rate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8bPhysics Settings/ LimitAngle \xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x90\x84\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Physics Settings/LimitAngle parameters applied to each bone.\nMultiplies each parameter by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xef\xbc\x88\xe7\x90\x83\xef\xbc\x89\n\x09* Spherical Collision\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xef\xbc\x88\xe7\x90\x83\xef\xbc\x89\nSpherical Collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimits_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xef\xbc\x88\xe3\x82\xab\xe3\x83\x97\xe3\x82\xbb\xe3\x83\xab\xef\xbc\x89\n\x09* Capsule Collision\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xef\xbc\x88\xe3\x82\xab\xe3\x83\x97\xe3\x82\xbb\xe3\x83\xab\xef\xbc\x89\nCapsule Collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxLimits_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xef\xbc\x88\xe3\x83\x9c\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xef\xbc\x89\n\x09* Box Collision\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xef\xbc\x88\xe3\x83\x9c\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xef\xbc\x89\nBox Collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xef\xbc\x88\xe5\xb9\xb3\xe9\x9d\xa2\xef\xbc\x89\n\x09* Planar Collision\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xef\xbc\x88\xe5\xb9\xb3\xe9\x9d\xa2\xef\xbc\x89\nPlanar Collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitsDataAsset_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x80\x82\xe5\x88\xa5""AnimNode\xe3\x83\xbb""ABP\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\xb5\x81\xe7\x94\xa8\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x81\x93\xe3\x81\xa1\xe3\x82\x89\xe3\x82\x92\xe6\x8e\xa8\xe5\xa5\xa8\n\x09* Collision settings (DataAsset version). This is recommended if you want to reuse the settings for another AnimNode or ABP.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x80\x82\xe5\x88\xa5""AnimNode\xe3\x83\xbb""ABP\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\xb5\x81\xe7\x94\xa8\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x81\x93\xe3\x81\xa1\xe3\x82\x89\xe3\x82\x92\xe6\x8e\xa8\xe5\xa5\xa8\nCollision settings (DataAsset version). This is recommended if you want to reuse the settings for another AnimNode or ABP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetForLimits_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88PhyiscsAsset\xe7\x89\x88\xef\xbc\x89\xe3\x80\x82\xe5\x88\xa5""AnimNode\xe3\x83\xbb""ABP\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\xb5\x81\xe7\x94\xa8\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x81\x93\xe3\x81\xa1\xe3\x82\x89\xe3\x82\x92\xe6\x8e\xa8\xe5\xa5\xa8\n\x09* Collision settings (PhyiscsAsset\xe7\x89\x88 version). This is recommended if you want to reuse the settings for another AnimNode or ABP.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88PhyiscsAsset\xe7\x89\x88\xef\xbc\x89\xe3\x80\x82\xe5\x88\xa5""AnimNode\xe3\x83\xbb""ABP\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\xb5\x81\xe7\x94\xa8\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x81\x93\xe3\x81\xa1\xe3\x82\x89\xe3\x82\x92\xe6\x8e\xa8\xe5\xa5\xa8\nCollision settings (PhyiscsAsset\xe7\x89\x88 version). This is recommended if you want to reuse the settings for another AnimNode or ABP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimitsData_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe7\x90\x83\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\n\x09* Preview of sphere collision in collision settings (DataAsset version)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe7\x90\x83\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\nPreview of sphere collision in collision settings (DataAsset version)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimitsData_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\x97\xe3\x82\xbb\xe3\x83\xab\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\n\x09* Preview of capsule collision in collision settings (DataAsset version)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\x97\xe3\x82\xbb\xe3\x83\xab\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\nPreview of capsule collision in collision settings (DataAsset version)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxLimitsData_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\n\x09* Preview of box collision in collision settings (DataAsset version)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\nPreview of box collision in collision settings (DataAsset version)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimitsData_MetaData[] = {
		{ "Category", "Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe5\xb9\xb3\xe9\x9d\xa2\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\n\x09* Preview of planar collision in collision settings (DataAsset version)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe5\xb9\xb3\xe9\x9d\xa2\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\nPreview of planar collision in collision settings (DataAsset version)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneConstraintGlobalComplianceType_MetaData[] = {
		{ "Category", "Bone Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Bone Constraint\xe3\x81\xa7\xe7\x94\xa8\xe3\x81\x84\xe3\x82\x8b\xe5\x89\x9b\xe6\x80\xa7\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\n\x09* Stiffness type to use in Bone Constraint\n\x09* http://blog.mmacklin.com/2016/10/12/xpbd-slides-and-stiffness/\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone Constraint\xe3\x81\xa7\xe7\x94\xa8\xe3\x81\x84\xe3\x82\x8b\xe5\x89\x9b\xe6\x80\xa7\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\nStiffness type to use in Bone Constraint\nhttp://blog.mmacklin.com/2016/10/12/xpbd-slides-and-stiffness/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneConstraintIterationCountBeforeCollision_MetaData[] = {
		{ "Category", "Bone Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Bone Constraint\xe3\x81\xae\xe5\x87\xa6\xe7\x90\x86\xe5\x9b\x9e\xe6\x95\xb0\xef\xbc\x88\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe5\x87\xa6\xe7\x90\x86\xe5\x89\x8d\xef\xbc\x89\n\x09* Number of Bone Constraints processed before collision processing\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone Constraint\xe3\x81\xae\xe5\x87\xa6\xe7\x90\x86\xe5\x9b\x9e\xe6\x95\xb0\xef\xbc\x88\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe5\x87\xa6\xe7\x90\x86\xe5\x89\x8d\xef\xbc\x89\nNumber of Bone Constraints processed before collision processing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneConstraintIterationCountAfterCollision_MetaData[] = {
		{ "Category", "Bone Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Bone Constraint\xe3\x81\xae\xe5\x87\xa6\xe7\x90\x86\xe5\x9b\x9e\xe6\x95\xb0\xef\xbc\x88\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe5\x87\xa6\xe7\x90\x86\xe5\xbe\x8c\xef\xbc\x89\n\x09* Number of Bone Constraints processed after collision processing\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone Constraint\xe3\x81\xae\xe5\x87\xa6\xe7\x90\x86\xe5\x9b\x9e\xe6\x95\xb0\xef\xbc\x88\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe5\x87\xa6\xe7\x90\x86\xe5\xbe\x8c\xef\xbc\x89\nNumber of Bone Constraints processed after collision processing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAddChildDummyBoneConstraint_MetaData[] = {
		{ "Category", "Bone Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\x9c\xab\xe7\xab\xaf\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92""BoneConstraint\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x83\x80\xe3\x83\x9f\xe3\x83\xbc\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x82\xe5\x87\xa6\xe7\x90\x86\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n\x09* Flag to automatically processes dummy bones when the end bones are subject to BoneConstraint processing.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\xab\xe7\xab\xaf\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92""BoneConstraint\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x83\x80\xe3\x83\x9f\xe3\x83\xbc\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x82\xe5\x87\xa6\xe7\x90\x86\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nFlag to automatically processes dummy bones when the end bones are subject to BoneConstraint processing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneConstraints_MetaData[] = {
		{ "Category", "Bone Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* BoneConstraint\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x9a\xe3\x82\xa2\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x80\x82\xe3\x82\xb9\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xae\xe3\x82\x88\xe3\x81\x86\xe3\x81\xab\xe3\x80\x81\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe9\x96\x93\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x82\x92\xe7\xb6\xad\xe6\x8c\x81\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xab\xe4\xbd\xbf\xe7\x94\xa8\n\x09* Sets the bone pair to be processed by BoneConstraint. Used when you want to maintain the distance between bones, such as a skirt.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "TitleProperty", "{Bone1} - {Bone2}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BoneConstraint\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x9a\xe3\x82\xa2\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x80\x82\xe3\x82\xb9\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xae\xe3\x82\x88\xe3\x81\x86\xe3\x81\xab\xe3\x80\x81\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe9\x96\x93\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x82\x92\xe7\xb6\xad\xe6\x8c\x81\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xab\xe4\xbd\xbf\xe7\x94\xa8\nSets the bone pair to be processed by BoneConstraint. Used when you want to maintain the distance between bones, such as a skirt." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneConstraintsDataAsset_MetaData[] = {
		{ "Category", "Bone Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* BoneConstraint\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x9a\xe3\x82\xa2\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a (DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x80\x82\xe5\x88\xa5""AnimNode\xe3\x83\xbb""ABP\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\xb5\x81\xe7\x94\xa8\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x81\x93\xe3\x81\xa1\xe3\x82\x89\xe3\x82\x92\xe6\x8e\xa8\xe5\xa5\xa8\n\x09* Set the bone pairs to be processed by BoneConstraint (DataAsset version). If you want to reuse the settings for another AnimNode or another ABP, this is recommended.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BoneConstraint\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x9a\xe3\x82\xa2\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a (DataAsset\xe7\x89\x88\xef\xbc\x89\xe3\x80\x82\xe5\x88\xa5""AnimNode\xe3\x83\xbb""ABP\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\xb5\x81\xe7\x94\xa8\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x81\x93\xe3\x81\xa1\xe3\x82\x89\xe3\x82\x92\xe6\x8e\xa8\xe5\xa5\xa8\nSet the bone pairs to be processed by BoneConstraint (DataAsset version). If you want to reuse the settings for another AnimNode or another ABP, this is recommended." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneConstraintsData_MetaData[] = {
		{ "Category", "Bone Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* BoneConstraint\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x9a\xe3\x82\xa2\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\n\x09* Preview of bone pairs that will be processed by BoneConstraint\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "TitleProperty", "{Bone1} - {Bone2}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BoneConstraint\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe3\x83\x9a\xe3\x82\xa2\xe3\x81\xae\xe3\x83\x97\xe3\x83\xac\xe3\x83\x93\xe3\x83\xa5\xe3\x83\xbc\nPreview of bone pairs that will be processed by BoneConstraint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergedBoneConstraints_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncBones_MetaData[] = {
		{ "Category", "Sync Bone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe5\x90\x8c\xe6\x9c\x9f\xe5\x85\x83\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x83\xbb\xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x82\xb9\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe8\xb6\xb3\xe3\x81\xaa\xe3\x81\xa9\xe3\x82\x92\xe8\xb2\xab\xe9\x80\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xae\xe3\x82\x92\xe9\x98\xb2\xe3\x81\x90\xe3\x81\xae\xe3\x81\xab\xe5\xbd\xb9\xe7\xab\x8b\xe3\x81\xa1\xe3\x81\xbe\xe3\x81\x99\n\x09* Applies the movement and rotation of the sync source bone to the bone under physics control. Helps prevent skirts from penetrating legs, etc.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "TitleProperty", "{Bone}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x8c\xe6\x9c\x9f\xe5\x85\x83\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe3\x83\xbb\xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe7\x89\xa9\xe7\x90\x86\xe5\x88\xb6\xe5\xbe\xa1\xe4\xb8\x8b\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x82\xb9\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe8\xb6\xb3\xe3\x81\xaa\xe3\x81\xa9\xe3\x82\x92\xe8\xb2\xab\xe9\x80\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xae\xe3\x82\x92\xe9\x98\xb2\xe3\x81\x90\xe3\x81\xae\xe3\x81\xab\xe5\xbd\xb9\xe7\xab\x8b\xe3\x81\xa1\xe3\x81\xbe\xe3\x81\x99\nApplies the movement and rotation of the sync source bone to the bone under physics control. Helps prevent skirts from penetrating legs, etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe9\x87\x8d\xe5\x8a\x9b\n\x09* Gravity\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x87\x8d\xe5\x8a\x9b\nGravity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyGravity_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gravity\xe3\x81\xae\xe9\x81\xa9\xe7\x94\xa8\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x88\xe3\x83\xac\xe3\x82\xac\xe3\x82\xb7\xe3\x83\xbc\xe4\xba\x92\xe6\x8f\x9b\xef\xbc\x89\n\x09* true : \xe5\xbe\x93\xe6\x9d\xa5\xe4\xba\x92\xe6\x8f\x9b\xef\xbc\x88\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab 0.5 * Gravity * dt^2 \xe3\x82\x92\xe5\x8a\xa0\xe7\xae\x97\xef\xbc\x89\n\x09* false: AnimDynamics\xe4\xba\x92\xe6\x8f\x9b\xef\xbc\x88\xe9\x80\x9f\xe5\xba\xa6\xe3\x81\xab Gravity * dt \xe3\x82\x92\xe5\x8a\xa0\xe7\xae\x97\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8b\xe3\x82\x89\xe4\xbd\x8d\xe7\xbd\xae\xe6\x9b\xb4\xe6\x96\xb0\xef\xbc\x89\n\x09* Gravity application method (legacy compatibility)\n\x09* true : Legacy compatibility (add 0.5 * Gravity * dt^2 to position)\n\x09* false: AnimDynamics compatibility (add Gravity * dt to velocity before updating position)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gravity\xe3\x81\xae\xe9\x81\xa9\xe7\x94\xa8\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x88\xe3\x83\xac\xe3\x82\xac\xe3\x82\xb7\xe3\x83\xbc\xe4\xba\x92\xe6\x8f\x9b\xef\xbc\x89\ntrue : \xe5\xbe\x93\xe6\x9d\xa5\xe4\xba\x92\xe6\x8f\x9b\xef\xbc\x88\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab 0.5 * Gravity * dt^2 \xe3\x82\x92\xe5\x8a\xa0\xe7\xae\x97\xef\xbc\x89\nfalse: AnimDynamics\xe4\xba\x92\xe6\x8f\x9b\xef\xbc\x88\xe9\x80\x9f\xe5\xba\xa6\xe3\x81\xab Gravity * dt \xe3\x82\x92\xe5\x8a\xa0\xe7\xae\x97\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8b\xe3\x82\x89\xe4\xbd\x8d\xe7\xbd\xae\xe6\x9b\xb4\xe6\x96\xb0\xef\xbc\x89\nGravity application method (legacy compatibility)\ntrue : Legacy compatibility (add 0.5 * Gravity * dt^2 to position)\nfalse: AnimDynamics compatibility (add Gravity * dt to velocity before updating position)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultGravityZProjectSetting_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gravity\xe3\x83\x99\xe3\x82\xaf\xe3\x83\x88\xe3\x83\xab\xe3\x81\xab\xe3\x83\x97\xe3\x83\xad\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\xae DefaultGravityZ\xef\xbc\x88\xe7\xb5\xb6\xe5\xaf\xbe\xe5\x80\xa4\xef\xbc\x89\xe3\x82\x92\xe4\xb9\x97\xe7\xae\x97\xe3\x81\x99\xe3\x82\x8b\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n\x09* Flag to multiply the DefaultGravityZ (absolute value) of the project settings to the Gravity vector\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gravity\xe3\x83\x99\xe3\x82\xaf\xe3\x83\x88\xe3\x83\xab\xe3\x81\xab\xe3\x83\x97\xe3\x83\xad\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\xae DefaultGravityZ\xef\xbc\x88\xe7\xb5\xb6\xe5\xaf\xbe\xe5\x80\xa4\xef\xbc\x89\xe3\x82\x92\xe4\xb9\x97\xe7\xae\x97\xe3\x81\x99\xe3\x82\x8b\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nFlag to multiply the DefaultGravityZ (absolute value) of the project settings to the Gravity vector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpaceGravity_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n// \xe9\x87\x8d\xe5\x8a\x9b\xe3\x82\x92\xe3\x83\xaf\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe3\x81\xa7\xe6\x89\xb1\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xae\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n// Flag to handle gravity in world coordinate system\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x87\x8d\xe5\x8a\x9b\xe3\x82\x92\xe3\x83\xaf\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe3\x81\xa7\xe6\x89\xb1\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xae\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nFlag to handle gravity in world coordinate system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWind_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6WindDirectionalSource\xe3\x81\xae\xe5\xbd\xb1\xe9\x9f\xbf\xe3\x82\x92\xe5\x8f\x97\xe3\x81\x91\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xae\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n// Flag to receive the influence of WindDirectionalSource as an external force\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6WindDirectionalSource\xe3\x81\xae\xe5\xbd\xb1\xe9\x9f\xbf\xe3\x82\x92\xe5\x8f\x97\xe3\x81\x91\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xae\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nFlag to receive the influence of WindDirectionalSource as an external force" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* WindDirectionalSource\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe9\xa2\xa8\xe3\x81\xae\xe5\xbd\xb1\xe9\x9f\xbf\xe5\xba\xa6\xe3\x80\x82""Cloth\xe3\x82\x84SpeedTree\xe3\x81\xa8\xe3\x81\xae\xe4\xbd\xb5\xe7\x94\xa8\xe7\x9b\xae\xe7\x9a\x84\n\x09* Influence of wind by WindDirectionalSource. For use with Cloth and SpeedTree\n\x09*/" },
#endif
		{ "EditCondition", "bEnableWind" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WindDirectionalSource\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe9\xa2\xa8\xe3\x81\xae\xe5\xbd\xb1\xe9\x9f\xbf\xe5\xba\xa6\xe3\x80\x82""Cloth\xe3\x82\x84SpeedTree\xe3\x81\xa8\xe3\x81\xae\xe4\xbd\xb5\xe7\x94\xa8\xe7\x9b\xae\xe7\x9a\x84\nInfluence of wind by WindDirectionalSource. For use with Cloth and SpeedTree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindDirectionNoiseAngle_MetaData[] = {
		{ "Category", "ExternalForce" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n    * WindDirectionalSource\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe9\xa2\xa8\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xab\xe4\xb8\x8e\xe3\x81\x88\xe3\x82\x8b\xe3\x83\x8e\xe3\x82\xa4\xe3\x82\xba\xef\xbc\x88\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x89\n    * Noise(Degree) of wind by WindDirectionalSource. For use with Cloth and SpeedTree\n    */" },
#endif
		{ "EditCondition", "bEnableWind" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WindDirectionalSource\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe9\xa2\xa8\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xab\xe4\xb8\x8e\xe3\x81\x88\xe3\x82\x8b\xe3\x83\x8e\xe3\x82\xa4\xe3\x82\xba\xef\xbc\x88\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x89\nNoise(Degree) of wind by WindDirectionalSource. For use with Cloth and SpeedTree" },
#endif
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleExternalForce_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x98\xe7\xb4\x94\xe3\x81\xaa\xe5\xa4\x96\xe5\x8a\x9b\xe3\x83\x99\xe3\x82\xaf\xe3\x83\x88\xe3\x83\xab\n// Simple external force vector\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x98\xe7\xb4\x94\xe3\x81\xaa\xe5\xa4\x96\xe5\x8a\x9b\xe3\x83\x99\xe3\x82\xaf\xe3\x83\x88\xe3\x83\xab\nSimple external force vector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpaceSimpleExternalForce_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x98\xe7\xb4\x94\xe3\x81\xaa\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe3\x83\xaf\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe3\x81\xa7\xe6\x89\xb1\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xae\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n// Flag to handle simple external forces in world coordinate system\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x98\xe7\xb4\x94\xe3\x81\xaa\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe3\x83\xaf\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\xba\xa7\xe6\xa8\x99\xe7\xb3\xbb\xe3\x81\xa7\xe6\x89\xb1\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x81\xae\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nFlag to handle simple external forces in world coordinate system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForces_MetaData[] = {
		{ "BaseStruct", "/Script/KawaiiPhysics.KawaiiPhysics_ExternalForce" },
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x80\x82""C++\xe3\x81\xa7\xe7\x8b\xac\xe8\x87\xaa\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe5\x8f\xaf\xe8\x83\xbd(Instanced Struct)\n\x09* External force presets. You can add your own presets in C++.\n\x09*/" },
#endif
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x80\x82""C++\xe3\x81\xa7\xe7\x8b\xac\xe8\x87\xaa\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe5\x8f\xaf\xe8\x83\xbd(Instanced Struct)\nExternal force presets. You can add your own presets in C++." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomExternalForces_Inner_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* !!! VERY VERY EXPERIMENTAL !!!\n\x09* \xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x80\x82""BP\xe3\x83\xbb""C++\xe3\x81\xa7\xe7\x8b\xac\xe8\x87\xaa\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe5\x8f\xaf\xe8\x83\xbd(Instanced Property)\n\x09* \xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a""AnimNode\xe3\x82\x92\xe3\x82\xaf\xe3\x83\xaa\xe3\x83\x83\xe3\x82\xaf or ABP\xe3\x82\x92\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x91\xe3\x82\xa4\xe3\x83\xab\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x81\xa8\xe6\xad\xa3\xe5\xb8\xb8\xe3\x81\xab\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\n\x09* External force presets. You can add your own presets in BP or C++\n\x09* Note: If you do not click on AnimNode or compile ABP, it will not work properly.\n\x09*/" },
#endif
		{ "DisplayName", "CustomExternalForces(EXPERIMENTAL)" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!!! VERY VERY EXPERIMENTAL !!!\n\xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x80\x82""BP\xe3\x83\xbb""C++\xe3\x81\xa7\xe7\x8b\xac\xe8\x87\xaa\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe5\x8f\xaf\xe8\x83\xbd(Instanced Property)\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a""AnimNode\xe3\x82\x92\xe3\x82\xaf\xe3\x83\xaa\xe3\x83\x83\xe3\x82\xaf or ABP\xe3\x82\x92\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x91\xe3\x82\xa4\xe3\x83\xab\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x81\xa8\xe6\xad\xa3\xe5\xb8\xb8\xe3\x81\xab\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\nExternal force presets. You can add your own presets in BP or C++\nNote: If you do not click on AnimNode or compile ABP, it will not work properly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomExternalForces_MetaData[] = {
		{ "Category", "ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* !!! VERY VERY EXPERIMENTAL !!!\n\x09* \xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x80\x82""BP\xe3\x83\xbb""C++\xe3\x81\xa7\xe7\x8b\xac\xe8\x87\xaa\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe5\x8f\xaf\xe8\x83\xbd(Instanced Property)\n\x09* \xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a""AnimNode\xe3\x82\x92\xe3\x82\xaf\xe3\x83\xaa\xe3\x83\x83\xe3\x82\xaf or ABP\xe3\x82\x92\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x91\xe3\x82\xa4\xe3\x83\xab\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x81\xa8\xe6\xad\xa3\xe5\xb8\xb8\xe3\x81\xab\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\n\x09* External force presets. You can add your own presets in BP or C++\n\x09* Note: If you do not click on AnimNode or compile ABP, it will not work properly.\n\x09*/" },
#endif
		{ "DisplayName", "CustomExternalForces(EXPERIMENTAL)" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!!! VERY VERY EXPERIMENTAL !!!\n\xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x80\x82""BP\xe3\x83\xbb""C++\xe3\x81\xa7\xe7\x8b\xac\xe8\x87\xaa\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe5\x8f\xaf\xe8\x83\xbd(Instanced Property)\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a""AnimNode\xe3\x82\x92\xe3\x82\xaf\xe3\x83\xaa\xe3\x83\x83\xe3\x82\xaf or ABP\xe3\x82\x92\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x91\xe3\x82\xa4\xe3\x83\xab\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x81\xa8\xe6\xad\xa3\xe5\xb8\xb8\xe3\x81\xab\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\nExternal force presets. You can add your own presets in BP or C++\nNote: If you do not click on AnimNode or compile ABP, it will not work properly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowWorldCollision_MetaData[] = {
		{ "Category", "World Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe4\xb8\x8a\xe3\x81\xae\xe5\x90\x84\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\xae\xe5\x88\xa4\xe5\xae\x9a\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x80\x82\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe7\x89\xa9\xe7\x90\x86\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe8\xb2\xa0\xe8\x8d\xb7\xe3\x81\x8c\xe5\xa4\xa7\xe5\xb9\x85\xe3\x81\xab\xe4\xb8\x8a\xe3\x81\x8c\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\n\x09* Flag for collision detection with each collision on the level. Enabling this will significantly increase the load of physics processing.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe4\xb8\x8a\xe3\x81\xae\xe5\x90\x84\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa8\xe3\x81\xae\xe5\x88\xa4\xe5\xae\x9a\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x80\x82\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe7\x89\xa9\xe7\x90\x86\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xae\xe8\xb2\xa0\xe8\x8d\xb7\xe3\x81\x8c\xe5\xa4\xa7\xe5\xb9\x85\xe3\x81\xab\xe4\xb8\x8a\xe3\x81\x8c\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\nFlag for collision detection with each collision on the level. Enabling this will significantly increase the load of physics processing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionParams_MetaData[] = {
		{ "Category", "World Collision" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelSettings_MetaData[] = {
		{ "Category", "World Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* SkeletalMeshComponent\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\xaf\xe3\x81\xaa\xe3\x81\x8f\xe3\x80\x81\xe7\x8b\xac\xe8\x87\xaa\xe3\x81\xae\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92WorldCollision\xe3\x81\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe9\x9a\x9b\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\n\x09* Use custom collision settings in WorldCollision instead of the collision settings set in SkeletalMeshComponent.\n\x09*/" },
#endif
		{ "DisplayName", "Override SkelComp Collision Params" },
		{ "EditCondition", "bOverrideCollisionParams" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SkeletalMeshComponent\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\xaf\xe3\x81\xaa\xe3\x81\x8f\xe3\x80\x81\xe7\x8b\xac\xe8\x87\xaa\xe3\x81\xae\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92WorldCollision\xe3\x81\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe9\x9a\x9b\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\nUse custom collision settings in WorldCollision instead of the collision settings set in SkeletalMeshComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelfComponent_MetaData[] = {
		{ "Category", "World Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* WorldCollision\xe3\x81\xab\xe3\x81\xa6\xe3\x80\x81SkeletalMeshComponent\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3(PhysicsAsset)\xe3\x82\x92\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n\x09* In WorldCollision, Flag to ignore collisions for SkeletalMeshComponent(PhysicsAsset) in WorldCollision\n\x09*/" },
#endif
		{ "EditCondition", "bAllowWorldCollision" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WorldCollision\xe3\x81\xab\xe3\x81\xa6\xe3\x80\x81SkeletalMeshComponent\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3(PhysicsAsset)\xe3\x82\x92\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nIn WorldCollision, Flag to ignore collisions for SkeletalMeshComponent(PhysicsAsset) in WorldCollision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreBones_MetaData[] = {
		{ "Category", "World Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* WorldCollision\xe3\x81\xab\xe3\x81\xa6\xe3\x80\x81SkeletalMeshComponent\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3(PhysicsAsset)\xe3\x82\x92\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x99\xe3\x82\x8b\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88\xe9\xaa\xa8\xef\xbc\x89\n\x09* In WorldCollision, set to ignore collision (PhysicsAsset) of SkeletalMeshComponent using bone\n\x09*/" },
#endif
		{ "EditCondition", "!bIgnoreSelfComponent" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WorldCollision\xe3\x81\xab\xe3\x81\xa6\xe3\x80\x81SkeletalMeshComponent\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3(PhysicsAsset)\xe3\x82\x92\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x99\xe3\x82\x8b\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88\xe9\xaa\xa8\xef\xbc\x89\nIn WorldCollision, set to ignore collision (PhysicsAsset) of SkeletalMeshComponent using bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreBoneNamePrefix_MetaData[] = {
		{ "Category", "World Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* WorldCollision\xe3\x81\xab\xe3\x81\xa6\xe3\x80\x81SkeletalMeshComponent\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3(PhysicsAsset)\xe3\x82\x92\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x99\xe3\x82\x8b\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88\xe9\xaa\xa8\xe5\x90\x8d\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa3\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xef\xbc\x89\n\x09* In WorldCollision, set to ignore collision (PhysicsAsset) of SkeletalMeshComponent using bone name prefix\n\x09*/" },
#endif
		{ "EditCondition", "!bIgnoreSelfComponent" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WorldCollision\xe3\x81\xab\xe3\x81\xa6\xe3\x80\x81SkeletalMeshComponent\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4\xe3\x82\xb3\xe3\x83\xaa\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3(PhysicsAsset)\xe3\x82\x92\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x99\xe3\x82\x8b\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88\xe9\xaa\xa8\xe5\x90\x8d\xe3\x81\xae\xe3\x83\x97\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa3\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xef\xbc\x89\nIn WorldCollision, set to ignore collision (PhysicsAsset) of SkeletalMeshComponent using bone name prefix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysicsTag_MetaData[] = {
		{ "Category", "Tag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* ExternalForce\xe3\x81\xaa\xe3\x81\xa9\xe3\x81\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xab\xe3\x82\xbf\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe7\x94\xa8\xe3\x82\xbf\xe3\x82\xb0\n\x09* Tag for filtering of ExternalForce etc\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ExternalForce\xe3\x81\xaa\xe3\x81\xa9\xe3\x81\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xab\xe3\x82\xbf\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe7\x94\xa8\xe3\x82\xbf\xe3\x82\xb0\nTag for filtering of ExternalForce etc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyBones_MetaData[] = {
		{ "Category", "Bones" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalRootBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalRootBones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DummyBoneLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneForwardAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneForwardAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationBaseBone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetFramerate;
	static void NewProp_OverrideTargetFramerate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideTargetFramerate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WarmUpFrames;
	static void NewProp_bUseWarmUpWhenResetDynamics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWarmUpWhenResetDynamics;
	static void NewProp_bNeedWarmUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedWarmUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportRotationThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlanarConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlanarConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkelCompMoveScale;
	static void NewProp_bUpdatePhysicsSettingsInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePhysicsSettingsInGame;
	static void NewProp_ResetBoneTransformWhenBoneNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetBoneTransformWhenBoneNotFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DampingCurveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StiffnessCurveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDampingLocationCurveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDampingRotationCurveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusCurveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitAngleCurveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LimitsDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAssetForLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimitsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimitsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimitsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimitsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxLimitsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxLimitsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimitsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimitsData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneConstraintGlobalComplianceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneConstraintGlobalComplianceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneConstraintIterationCountBeforeCollision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneConstraintIterationCountAfterCollision;
	static void NewProp_bAutoAddChildDummyBoneConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAddChildDummyBoneConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneConstraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneConstraints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneConstraintsDataAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneConstraintsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneConstraintsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergedBoneConstraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MergedBoneConstraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SyncBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
	static void NewProp_bUseLegacyGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyGravity;
	static void NewProp_bUseDefaultGravityZProjectSetting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultGravityZProjectSetting;
	static void NewProp_bUseWorldSpaceGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpaceGravity;
	static void NewProp_bEnableWind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWind;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindDirectionNoiseAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleExternalForce;
	static void NewProp_bUseWorldSpaceSimpleExternalForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpaceSimpleExternalForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalForces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomExternalForces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomExternalForces;
	static void NewProp_bAllowWorldCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWorldCollision;
	static void NewProp_bOverrideCollisionParams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionChannelSettings;
	static void NewProp_bIgnoreSelfComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelfComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoreBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreBones;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoreBoneNamePrefix_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreBoneNamePrefix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysicsTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifyBones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KawaiiPhysics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, RootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBone_MetaData), NewProp_RootBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_Inner = { "ExcludeBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones = { "ExcludeBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, ExcludeBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeBones_MetaData), NewProp_ExcludeBones_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_AdditionalRootBones_Inner = { "AdditionalRootBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting, METADATA_PARAMS(0, nullptr) }; // 2711653723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_AdditionalRootBones = { "AdditionalRootBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, AdditionalRootBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalRootBones_MetaData), NewProp_AdditionalRootBones_MetaData) }; // 2711653723
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength = { "DummyBoneLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, DummyBoneLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DummyBoneLength_MetaData), NewProp_DummyBoneLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis = { "BoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneForwardAxis), Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneForwardAxis_MetaData), NewProp_BoneForwardAxis_MetaData) }; // 2430263605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PhysicsSettings), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsSettings_MetaData), NewProp_PhysicsSettings_MetaData) }; // 1986350718
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SimulationSpace), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsSimulationSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationSpace_MetaData), NewProp_SimulationSpace_MetaData) }; // 1206358056
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SimulationBaseBone = { "SimulationBaseBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SimulationBaseBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationBaseBone_MetaData), NewProp_SimulationBaseBone_MetaData) }; // 4218265988
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate = { "TargetFramerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TargetFramerate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFramerate_MetaData), NewProp_TargetFramerate_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->OverrideTargetFramerate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate = { "OverrideTargetFramerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideTargetFramerate_MetaData), NewProp_OverrideTargetFramerate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WarmUpFrames = { "WarmUpFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WarmUpFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmUpFrames_MetaData), NewProp_WarmUpFrames_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWarmUpWhenResetDynamics_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bUseWarmUpWhenResetDynamics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWarmUpWhenResetDynamics = { "bUseWarmUpWhenResetDynamics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWarmUpWhenResetDynamics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWarmUpWhenResetDynamics_MetaData), NewProp_bUseWarmUpWhenResetDynamics_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bNeedWarmUp_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bNeedWarmUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bNeedWarmUp = { "bNeedWarmUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bNeedWarmUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedWarmUp_MetaData), NewProp_bNeedWarmUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold = { "TeleportDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TeleportDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportDistanceThreshold_MetaData), NewProp_TeleportDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold = { "TeleportRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TeleportRotationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportRotationThreshold_MetaData), NewProp_TeleportRotationThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint = { "PlanarConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarConstraint), Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarConstraint_MetaData), NewProp_PlanarConstraint_MetaData) }; // 2058820952
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SkelCompMoveScale = { "SkelCompMoveScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SkelCompMoveScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelCompMoveScale_MetaData), NewProp_SkelCompMoveScale_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bUpdatePhysicsSettingsInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame = { "bUpdatePhysicsSettingsInGame", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatePhysicsSettingsInGame_MetaData), NewProp_bUpdatePhysicsSettingsInGame_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->ResetBoneTransformWhenBoneNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound = { "ResetBoneTransformWhenBoneNotFound", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetBoneTransformWhenBoneNotFound_MetaData), NewProp_ResetBoneTransformWhenBoneNotFound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurveData = { "DampingCurveData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, DampingCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingCurveData_MetaData), NewProp_DampingCurveData_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurveData = { "StiffnessCurveData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, StiffnessCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StiffnessCurveData_MetaData), NewProp_StiffnessCurveData_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurveData = { "WorldDampingLocationCurveData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WorldDampingLocationCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDampingLocationCurveData_MetaData), NewProp_WorldDampingLocationCurveData_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurveData = { "WorldDampingRotationCurveData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WorldDampingRotationCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDampingRotationCurveData_MetaData), NewProp_WorldDampingRotationCurveData_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurveData = { "RadiusCurveData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, RadiusCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusCurveData_MetaData), NewProp_RadiusCurveData_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurveData = { "LimitAngleCurveData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, LimitAngleCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitAngleCurveData_MetaData), NewProp_LimitAngleCurveData_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(0, nullptr) }; // 1124330014
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphericalLimits_MetaData), NewProp_SphericalLimits_MetaData) }; // 1124330014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(0, nullptr) }; // 3293835837
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleLimits_MetaData), NewProp_CapsuleLimits_MetaData) }; // 3293835837
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoxLimits_Inner = { "BoxLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoxLimit, METADATA_PARAMS(0, nullptr) }; // 3454291995
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoxLimits = { "BoxLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoxLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxLimits_MetaData), NewProp_BoxLimits_MetaData) }; // 3454291995
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(0, nullptr) }; // 1692477636
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarLimits_MetaData), NewProp_PlanarLimits_MetaData) }; // 1692477636
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset = { "LimitsDataAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, LimitsDataAsset), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitsDataAsset_MetaData), NewProp_LimitsDataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsAssetForLimits = { "PhysicsAssetForLimits", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PhysicsAssetForLimits), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAssetForLimits_MetaData), NewProp_PhysicsAssetForLimits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_Inner = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(0, nullptr) }; // 1124330014
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SphericalLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphericalLimitsData_MetaData), NewProp_SphericalLimitsData_MetaData) }; // 1124330014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_Inner = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(0, nullptr) }; // 3293835837
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CapsuleLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleLimitsData_MetaData), NewProp_CapsuleLimitsData_MetaData) }; // 3293835837
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoxLimitsData_Inner = { "BoxLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoxLimit, METADATA_PARAMS(0, nullptr) }; // 3454291995
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoxLimitsData = { "BoxLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoxLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxLimitsData_MetaData), NewProp_BoxLimitsData_MetaData) }; // 3454291995
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_Inner = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(0, nullptr) }; // 1692477636
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarLimitsData_MetaData), NewProp_PlanarLimitsData_MetaData) }; // 1692477636
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintGlobalComplianceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintGlobalComplianceType = { "BoneConstraintGlobalComplianceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneConstraintGlobalComplianceType), Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneConstraintGlobalComplianceType_MetaData), NewProp_BoneConstraintGlobalComplianceType_MetaData) }; // 3801623715
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintIterationCountBeforeCollision = { "BoneConstraintIterationCountBeforeCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneConstraintIterationCountBeforeCollision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneConstraintIterationCountBeforeCollision_MetaData), NewProp_BoneConstraintIterationCountBeforeCollision_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintIterationCountAfterCollision = { "BoneConstraintIterationCountAfterCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneConstraintIterationCountAfterCollision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneConstraintIterationCountAfterCollision_MetaData), NewProp_BoneConstraintIterationCountAfterCollision_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAutoAddChildDummyBoneConstraint_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bAutoAddChildDummyBoneConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAutoAddChildDummyBoneConstraint = { "bAutoAddChildDummyBoneConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAutoAddChildDummyBoneConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAddChildDummyBoneConstraint_MetaData), NewProp_bAutoAddChildDummyBoneConstraint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraints_Inner = { "BoneConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifyBoneConstraint, METADATA_PARAMS(0, nullptr) }; // 1050310585
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraints = { "BoneConstraints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneConstraints_MetaData), NewProp_BoneConstraints_MetaData) }; // 1050310585
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintsDataAsset = { "BoneConstraintsDataAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneConstraintsDataAsset), Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneConstraintsDataAsset_MetaData), NewProp_BoneConstraintsDataAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintsData_Inner = { "BoneConstraintsData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifyBoneConstraint, METADATA_PARAMS(0, nullptr) }; // 1050310585
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintsData = { "BoneConstraintsData", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneConstraintsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneConstraintsData_MetaData), NewProp_BoneConstraintsData_MetaData) }; // 1050310585
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_MergedBoneConstraints_Inner = { "MergedBoneConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifyBoneConstraint, METADATA_PARAMS(0, nullptr) }; // 1050310585
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_MergedBoneConstraints = { "MergedBoneConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, MergedBoneConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergedBoneConstraints_MetaData), NewProp_MergedBoneConstraints_MetaData) }; // 1050310585
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SyncBones_Inner = { "SyncBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone, METADATA_PARAMS(0, nullptr) }; // 672611600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SyncBones = { "SyncBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SyncBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncBones_MetaData), NewProp_SyncBones_MetaData) }; // 672611600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseLegacyGravity_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bUseLegacyGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseLegacyGravity = { "bUseLegacyGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseLegacyGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyGravity_MetaData), NewProp_bUseLegacyGravity_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseDefaultGravityZProjectSetting_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bUseDefaultGravityZProjectSetting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseDefaultGravityZProjectSetting = { "bUseDefaultGravityZProjectSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseDefaultGravityZProjectSetting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultGravityZProjectSetting_MetaData), NewProp_bUseDefaultGravityZProjectSetting_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWorldSpaceGravity_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bUseWorldSpaceGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWorldSpaceGravity = { "bUseWorldSpaceGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWorldSpaceGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldSpaceGravity_MetaData), NewProp_bUseWorldSpaceGravity_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bEnableWind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind = { "bEnableWind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWind_MetaData), NewProp_bEnableWind_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WindScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindScale_MetaData), NewProp_WindScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindDirectionNoiseAngle = { "WindDirectionNoiseAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WindDirectionNoiseAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindDirectionNoiseAngle_MetaData), NewProp_WindDirectionNoiseAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SimpleExternalForce = { "SimpleExternalForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SimpleExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleExternalForce_MetaData), NewProp_SimpleExternalForce_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWorldSpaceSimpleExternalForce_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bUseWorldSpaceSimpleExternalForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWorldSpaceSimpleExternalForce = { "bUseWorldSpaceSimpleExternalForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWorldSpaceSimpleExternalForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldSpaceSimpleExternalForce_MetaData), NewProp_bUseWorldSpaceSimpleExternalForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExternalForces_Inner = { "ExternalForces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExternalForces = { "ExternalForces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, ExternalForces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalForces_MetaData), NewProp_ExternalForces_MetaData) }; // 174410355
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CustomExternalForces_Inner = { "CustomExternalForces", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UKawaiiPhysics_CustomExternalForce_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomExternalForces_Inner_MetaData), NewProp_CustomExternalForces_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CustomExternalForces = { "CustomExternalForces", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CustomExternalForces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomExternalForces_MetaData), NewProp_CustomExternalForces_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bAllowWorldCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision = { "bAllowWorldCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowWorldCollision_MetaData), NewProp_bAllowWorldCollision_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bOverrideCollisionParams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams = { "bOverrideCollisionParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCollisionParams_MetaData), NewProp_bOverrideCollisionParams_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CollisionChannelSettings = { "CollisionChannelSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CollisionChannelSettings), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannelSettings_MetaData), NewProp_CollisionChannelSettings_MetaData) }; // 3706165537
void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent_SetBit(void* Obj)
{
	((FAnimNode_KawaiiPhysics*)Obj)->bIgnoreSelfComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent = { "bIgnoreSelfComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelfComponent_MetaData), NewProp_bIgnoreSelfComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones_Inner = { "IgnoreBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones = { "IgnoreBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, IgnoreBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreBones_MetaData), NewProp_IgnoreBones_MetaData) }; // 4218265988
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix_Inner = { "IgnoreBoneNamePrefix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix = { "IgnoreBoneNamePrefix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, IgnoreBoneNamePrefix), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreBoneNamePrefix_MetaData), NewProp_IgnoreBoneNamePrefix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_KawaiiPhysicsTag = { "KawaiiPhysicsTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, KawaiiPhysicsTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysicsTag_MetaData), NewProp_KawaiiPhysicsTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_Inner = { "ModifyBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone, METADATA_PARAMS(0, nullptr) }; // 1162441687
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones = { "ModifyBones", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, ModifyBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyBones_MetaData), NewProp_ModifyBones_MetaData) }; // 1162441687
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_AdditionalRootBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_AdditionalRootBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SimulationSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SimulationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SimulationBaseBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WarmUpFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWarmUpWhenResetDynamics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bNeedWarmUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SkelCompMoveScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoxLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoxLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsAssetForLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoxLimitsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoxLimitsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintGlobalComplianceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintGlobalComplianceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintIterationCountBeforeCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintIterationCountAfterCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAutoAddChildDummyBoneConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintsDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneConstraintsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_MergedBoneConstraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_MergedBoneConstraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SyncBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SyncBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseLegacyGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseDefaultGravityZProjectSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWorldSpaceGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindDirectionNoiseAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SimpleExternalForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUseWorldSpaceSimpleExternalForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExternalForces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExternalForces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CustomExternalForces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CustomExternalForces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CollisionChannelSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_KawaiiPhysicsTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_KawaiiPhysics",
	Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers),
	sizeof(FAnimNode_KawaiiPhysics),
	alignof(FAnimNode_KawaiiPhysics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.InnerSingleton;
}
// End ScriptStruct FAnimNode_KawaiiPhysics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKawaiiPhysicsSimulationSpace_StaticEnum, TEXT("EKawaiiPhysicsSimulationSpace"), &Z_Registration_Info_UEnum_EKawaiiPhysicsSimulationSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1206358056U) },
		{ EPlanarConstraint_StaticEnum, TEXT("EPlanarConstraint"), &Z_Registration_Info_UEnum_EPlanarConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2058820952U) },
		{ EBoneForwardAxis_StaticEnum, TEXT("EBoneForwardAxis"), &Z_Registration_Info_UEnum_EBoneForwardAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2430263605U) },
		{ ECollisionLimitType_StaticEnum, TEXT("ECollisionLimitType"), &Z_Registration_Info_UEnum_ECollisionLimitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2246379926U) },
		{ ECollisionSourceType_StaticEnum, TEXT("ECollisionSourceType"), &Z_Registration_Info_UEnum_ECollisionSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 216402010U) },
		{ EXPBDComplianceType_StaticEnum, TEXT("EXPBDComplianceType"), &Z_Registration_Info_UEnum_EXPBDComplianceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3801623715U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCollisionLimitBase::StaticStruct, Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewStructOps, TEXT("CollisionLimitBase"), &Z_Registration_Info_UScriptStruct_CollisionLimitBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionLimitBase), 1947516879U) },
		{ FSphericalLimit::StaticStruct, Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewStructOps, TEXT("SphericalLimit"), &Z_Registration_Info_UScriptStruct_SphericalLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalLimit), 1124330014U) },
		{ FCapsuleLimit::StaticStruct, Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewStructOps, TEXT("CapsuleLimit"), &Z_Registration_Info_UScriptStruct_CapsuleLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapsuleLimit), 3293835837U) },
		{ FBoxLimit::StaticStruct, Z_Construct_UScriptStruct_FBoxLimit_Statics::NewStructOps, TEXT("BoxLimit"), &Z_Registration_Info_UScriptStruct_BoxLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxLimit), 3454291995U) },
		{ FPlanarLimit::StaticStruct, Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewStructOps, TEXT("PlanarLimit"), &Z_Registration_Info_UScriptStruct_PlanarLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlanarLimit), 1692477636U) },
		{ FKawaiiPhysicsRootBoneSetting::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsRootBoneSetting_Statics::NewStructOps, TEXT("KawaiiPhysicsRootBoneSetting"), &Z_Registration_Info_UScriptStruct_KawaiiPhysicsRootBoneSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsRootBoneSetting), 2711653723U) },
		{ FKawaiiPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewStructOps, TEXT("KawaiiPhysicsSettings"), &Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsSettings), 1986350718U) },
		{ FKawaiiPhysicsModifyBone::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewStructOps, TEXT("KawaiiPhysicsModifyBone"), &Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsModifyBone), 1162441687U) },
		{ FModifyBoneConstraint::StaticStruct, Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewStructOps, TEXT("ModifyBoneConstraint"), &Z_Registration_Info_UScriptStruct_ModifyBoneConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyBoneConstraint), 1050310585U) },
		{ FAnimNode_KawaiiPhysics::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewStructOps, TEXT("AnimNode_KawaiiPhysics"), &Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_KawaiiPhysics), 2085289797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_3031991829(TEXT("/Script/KawaiiPhysics"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

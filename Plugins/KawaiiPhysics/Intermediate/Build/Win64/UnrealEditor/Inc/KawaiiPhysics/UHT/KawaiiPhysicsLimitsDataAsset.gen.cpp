// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsLimitsDataAsset.h"
#include "KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLimitsDataAsset() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FBoxLimit();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FBoxLimitData();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin ScriptStruct FCollisionLimitDataBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionLimitDataBase;
class UScriptStruct* FCollisionLimitDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionLimitDataBase, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CollisionLimitDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCollisionLimitDataBase>()
{
	return FCollisionLimitDataBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBoneReference_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBoneName_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetLocation_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingBoneReference;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DrivingBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionLimitDataBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneReference = { "DrivingBoneReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, DrivingBoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingBoneReference_MetaData), NewProp_DrivingBoneReference_MetaData) }; // 4218265988
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName = { "DrivingBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, DrivingBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingBoneName_MetaData), NewProp_DrivingBoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetLocation_MetaData), NewProp_OffsetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetRotation_MetaData), NewProp_OffsetRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"CollisionLimitDataBase",
	Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers),
	sizeof(FCollisionLimitDataBase),
	alignof(FCollisionLimitDataBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton, Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton;
}
// End ScriptStruct FCollisionLimitDataBase

// Begin ScriptStruct FSphericalLimitData
static_assert(std::is_polymorphic<FSphericalLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FSphericalLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalLimitData;
class UScriptStruct* FSphericalLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimitData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimitData>()
{
	return FSphericalLimitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSphericalLimitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius of the sphere */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the sphere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalLimitData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalLimitData, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitType_MetaData), NewProp_LimitType_MetaData) }; // 1450718878
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FCollisionLimitDataBase,
	&NewStructOps,
	"SphericalLimitData",
	Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers),
	sizeof(FSphericalLimitData),
	alignof(FSphericalLimitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton, Z_Construct_UScriptStruct_FSphericalLimitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton;
}
// End ScriptStruct FSphericalLimitData

// Begin ScriptStruct FCapsuleLimitData
static_assert(std::is_polymorphic<FCapsuleLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FCapsuleLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapsuleLimitData;
class UScriptStruct* FCapsuleLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimitData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimitData>()
{
	return FCapsuleLimitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCapsuleLimitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapsuleLimitData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapsuleLimitData, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FCollisionLimitDataBase,
	&NewStructOps,
	"CapsuleLimitData",
	Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers),
	sizeof(FCapsuleLimitData),
	alignof(FCapsuleLimitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton;
}
// End ScriptStruct FCapsuleLimitData

// Begin ScriptStruct FBoxLimitData
static_assert(std::is_polymorphic<FBoxLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FBoxLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxLimitData;
class UScriptStruct* FBoxLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxLimitData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("BoxLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_BoxLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FBoxLimitData>()
{
	return FBoxLimitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoxLimitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxLimitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxLimitData, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxLimitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewProp_Extent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxLimitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FCollisionLimitDataBase,
	&NewStructOps,
	"BoxLimitData",
	Z_Construct_UScriptStruct_FBoxLimitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimitData_Statics::PropPointers),
	sizeof(FBoxLimitData),
	alignof(FBoxLimitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoxLimitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoxLimitData()
{
	if (!Z_Registration_Info_UScriptStruct_BoxLimitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxLimitData.InnerSingleton, Z_Construct_UScriptStruct_FBoxLimitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoxLimitData.InnerSingleton;
}
// End ScriptStruct FBoxLimitData

// Begin ScriptStruct FPlanarLimitData
static_assert(std::is_polymorphic<FPlanarLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FPlanarLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlanarLimitData;
class UScriptStruct* FPlanarLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimitData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimitData>()
{
	return FPlanarLimitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlanarLimitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlanarLimitData, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plane_MetaData), NewProp_Plane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FCollisionLimitDataBase,
	&NewStructOps,
	"PlanarLimitData",
	Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers),
	sizeof(FPlanarLimitData),
	alignof(FPlanarLimitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData()
{
	if (!Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton, Z_Construct_UScriptStruct_FPlanarLimitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton;
}
// End ScriptStruct FPlanarLimitData

// Begin Class UKawaiiPhysicsLimitsDataAsset
void UKawaiiPhysicsLimitsDataAsset::StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKawaiiPhysicsLimitsDataAsset);
UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister()
{
	return UKawaiiPhysicsLimitsDataAsset::StaticClass();
}
struct Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "KawaiiPhysicsLimitsDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimitsData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimitsData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxLimitsData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimitsData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[] = {
		{ "Category", "Spherical Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimits_MetaData[] = {
		{ "Category", "Capsule Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxLimits_MetaData[] = {
		{ "Category", "Box Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "Planar Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimitsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimitsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimitsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimitsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxLimitsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxLimitsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimitsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimitsData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysicsLimitsDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0114000800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_Inner = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSphericalLimitData, METADATA_PARAMS(0, nullptr) }; // 3310514116
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphericalLimitsData_MetaData), NewProp_SphericalLimitsData_MetaData) }; // 3310514116
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_Inner = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimitData, METADATA_PARAMS(0, nullptr) }; // 1500206002
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleLimitsData_MetaData), NewProp_CapsuleLimitsData_MetaData) }; // 1500206002
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData_Inner = { "BoxLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoxLimitData, METADATA_PARAMS(0, nullptr) }; // 3772982194
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData = { "BoxLimitsData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, BoxLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxLimitsData_MetaData), NewProp_BoxLimitsData_MetaData) }; // 3772982194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_Inner = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlanarLimitData, METADATA_PARAMS(0, nullptr) }; // 396732918
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarLimitsData_MetaData), NewProp_PlanarLimitsData_MetaData) }; // 396732918
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(0, nullptr) }; // 1124330014
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphericalLimits_MetaData), NewProp_SphericalLimits_MetaData) }; // 1124330014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(0, nullptr) }; // 3293835837
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleLimits_MetaData), NewProp_CapsuleLimits_MetaData) }; // 3293835837
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits_Inner = { "BoxLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoxLimit, METADATA_PARAMS(0, nullptr) }; // 3454291995
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits = { "BoxLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, BoxLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxLimits_MetaData), NewProp_BoxLimits_MetaData) }; // 3454291995
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(0, nullptr) }; // 1692477636
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarLimits_MetaData), NewProp_PlanarLimits_MetaData) }; // 1692477636
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UKawaiiPhysicsLimitsDataAsset, IBoneReferenceSkeletonProvider), false },  // 2882411204
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams = {
	&UKawaiiPhysicsLimitsDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset()
{
	if (!Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton, Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UClass* StaticClass<UKawaiiPhysicsLimitsDataAsset>()
{
	return UKawaiiPhysicsLimitsDataAsset::StaticClass();
}
UKawaiiPhysicsLimitsDataAsset::UKawaiiPhysicsLimitsDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKawaiiPhysicsLimitsDataAsset);
UKawaiiPhysicsLimitsDataAsset::~UKawaiiPhysicsLimitsDataAsset() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FARCHIVE_SERIALIZER(UKawaiiPhysicsLimitsDataAsset)
#endif // WITH_EDITORONLY_DATA
// End Class UKawaiiPhysicsLimitsDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCollisionLimitDataBase::StaticStruct, Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewStructOps, TEXT("CollisionLimitDataBase"), &Z_Registration_Info_UScriptStruct_CollisionLimitDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionLimitDataBase), 749386062U) },
		{ FSphericalLimitData::StaticStruct, Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewStructOps, TEXT("SphericalLimitData"), &Z_Registration_Info_UScriptStruct_SphericalLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalLimitData), 3310514116U) },
		{ FCapsuleLimitData::StaticStruct, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps, TEXT("CapsuleLimitData"), &Z_Registration_Info_UScriptStruct_CapsuleLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapsuleLimitData), 1500206002U) },
		{ FBoxLimitData::StaticStruct, Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewStructOps, TEXT("BoxLimitData"), &Z_Registration_Info_UScriptStruct_BoxLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxLimitData), 3772982194U) },
		{ FPlanarLimitData::StaticStruct, Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewStructOps, TEXT("PlanarLimitData"), &Z_Registration_Info_UScriptStruct_PlanarLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlanarLimitData), 396732918U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset, UKawaiiPhysicsLimitsDataAsset::StaticClass, TEXT("UKawaiiPhysicsLimitsDataAsset"), &Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKawaiiPhysicsLimitsDataAsset), 2193485741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_1412664597(TEXT("/Script/KawaiiPhysics"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

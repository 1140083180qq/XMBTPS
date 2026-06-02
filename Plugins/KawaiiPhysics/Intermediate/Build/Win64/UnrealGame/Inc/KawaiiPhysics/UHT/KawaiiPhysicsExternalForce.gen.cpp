// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/ExternalForces/KawaiiPhysicsExternalForce.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsExternalForce() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin Enum EExternalForceSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExternalForceSpace;
static UEnum* EExternalForceSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EExternalForceSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EExternalForceSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EExternalForceSpace"));
	}
	return Z_Registration_Info_UEnum_EExternalForceSpace.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EExternalForceSpace>()
{
	return EExternalForceSpace_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoneSpace.Comment", "/** Simulate in another bone space. Moving the entire skeletal mesh and individually modifying the base bone will have no affect on velocities */" },
		{ "BoneSpace.Name", "EExternalForceSpace::BoneSpace" },
		{ "BoneSpace.ToolTip", "Simulate in another bone space. Moving the entire skeletal mesh and individually modifying the base bone will have no affect on velocities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the space in which external forces are simulated.\n */" },
#endif
		{ "ComponentSpace.Comment", "/** Simulate in component space. Moving the entire skeletal mesh will have no affect on velocities */" },
		{ "ComponentSpace.Name", "EExternalForceSpace::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Simulate in component space. Moving the entire skeletal mesh will have no affect on velocities" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the space in which external forces are simulated." },
#endif
		{ "WorldSpace.Comment", "/** Simulate in world space. Moving the skeletal mesh will generate velocity changes */" },
		{ "WorldSpace.Name", "EExternalForceSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "Simulate in world space. Moving the skeletal mesh will generate velocity changes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EExternalForceSpace::ComponentSpace", (int64)EExternalForceSpace::ComponentSpace },
		{ "EExternalForceSpace::WorldSpace", (int64)EExternalForceSpace::WorldSpace },
		{ "EExternalForceSpace::BoneSpace", (int64)EExternalForceSpace::BoneSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"EExternalForceSpace",
	"EExternalForceSpace",
	Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace()
{
	if (!Z_Registration_Info_UEnum_EExternalForceSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExternalForceSpace.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EExternalForceSpace.InnerSingleton;
}
// End Enum EExternalForceSpace

// Begin Enum EExternalForceCurveEvaluateType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType;
static UEnum* EExternalForceCurveEvaluateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EExternalForceCurveEvaluateType"));
	}
	return Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EExternalForceCurveEvaluateType>()
{
	return EExternalForceCurveEvaluateType_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.Comment", "/** Evaluate the curve by averaging multiple points */" },
		{ "Average.Name", "EExternalForceCurveEvaluateType::Average" },
		{ "Average.ToolTip", "Evaluate the curve by averaging multiple points" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the evaluation type for external force curves.\n */" },
#endif
		{ "Max.Comment", "/** Evaluate the curve by taking the maximum value from multiple points */" },
		{ "Max.Name", "EExternalForceCurveEvaluateType::Max" },
		{ "Max.ToolTip", "Evaluate the curve by taking the maximum value from multiple points" },
		{ "Min.Comment", "/** Evaluate the curve by taking the minimum value from multiple points */" },
		{ "Min.Name", "EExternalForceCurveEvaluateType::Min" },
		{ "Min.ToolTip", "Evaluate the curve by taking the minimum value from multiple points" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
		{ "Single.Comment", "/** Evaluate the curve at a single point */" },
		{ "Single.Name", "EExternalForceCurveEvaluateType::Single" },
		{ "Single.ToolTip", "Evaluate the curve at a single point" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the evaluation type for external force curves." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EExternalForceCurveEvaluateType::Single", (int64)EExternalForceCurveEvaluateType::Single },
		{ "EExternalForceCurveEvaluateType::Average", (int64)EExternalForceCurveEvaluateType::Average },
		{ "EExternalForceCurveEvaluateType::Max", (int64)EExternalForceCurveEvaluateType::Max },
		{ "EExternalForceCurveEvaluateType::Min", (int64)EExternalForceCurveEvaluateType::Min },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"EExternalForceCurveEvaluateType",
	"EExternalForceCurveEvaluateType",
	Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType()
{
	if (!Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.InnerSingleton;
}
// End Enum EExternalForceCurveEvaluateType

// Begin ScriptStruct FKawaiiPhysics_ExternalForce
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce;
class UScriptStruct* FKawaiiPhysics_ExternalForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce>()
{
	return FKawaiiPhysics_ExternalForce::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Base\n///\n" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the external force is enabled */" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the external force is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to draw debug information for the external force */" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to draw debug information for the external force" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyBoneFilter_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xef\xbc\x88\xef\xbc\x9d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x8b\xe3\x81\xa3\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe3\x81\xaf\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xef\xbc\x89\n\x09* \xe7\xa9\xba\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae\xe7\x89\xa9\xe7\x90\x86\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe5\xbf\x9c\n\x09* Specify the bones to which the external force will be applied (= the force will not be applied to bones that are not specified)\n\x09* If empty, it will be applied to all physical target bones\n\x09*/" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xef\xbc\x88\xef\xbc\x9d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x8b\xe3\x81\xa3\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe3\x81\xaf\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xef\xbc\x89\n\xe7\xa9\xba\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae\xe7\x89\xa9\xe7\x90\x86\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe5\xbf\x9c\nSpecify the bones to which the external force will be applied (= the force will not be applied to bones that are not specified)\nIf empty, it will be applied to all physical target bones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreBoneFilter_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\n\x09* Specify the bones to which the external force will be NOT applied\n\x09*/" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\nSpecify the bones to which the external force will be NOT applied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForceSpace_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The space in which the external force is simulated */" },
#endif
		{ "DisplayPriority", "1" },
		{ "EditCondition", "bCanSelectForceSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The space in which the external force is simulated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomForceScaleRange_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Range for randomizing the force scale */" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range for randomizing the force scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOwner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Owner of the external force */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Owner of the external force" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneShot_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the external force is applied only once */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the external force is applied only once" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomizedForceScale_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Randomized scale of the force */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Randomized scale of the force" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The force vector */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The force vector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTransform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transform of the component */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform of the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSelectForceSpace_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the force space can be selected */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the force space can be selected" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyBoneFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplyBoneFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoreBoneFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreBoneFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExternalForceSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExternalForceSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomForceScaleRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalOwner;
	static void NewProp_bIsOneShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomizedForceScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTransform;
	static void NewProp_bCanSelectForceSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSelectForceSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((FKawaiiPhysics_ExternalForce*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((FKawaiiPhysics_ExternalForce*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter_Inner = { "ApplyBoneFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter = { "ApplyBoneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, ApplyBoneFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyBoneFilter_MetaData), NewProp_ApplyBoneFilter_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter_Inner = { "IgnoreBoneFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter = { "IgnoreBoneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, IgnoreBoneFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreBoneFilter_MetaData), NewProp_IgnoreBoneFilter_MetaData) }; // 4218265988
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace = { "ExternalForceSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, ExternalForceSpace), Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalForceSpace_MetaData), NewProp_ExternalForceSpace_MetaData) }; // 1709983579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomForceScaleRange = { "RandomForceScaleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, RandomForceScaleRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomForceScaleRange_MetaData), NewProp_RandomForceScaleRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalOwner = { "ExternalOwner", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, ExternalOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalOwner_MetaData), NewProp_ExternalOwner_MetaData) };
void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot_SetBit(void* Obj)
{
	((FKawaiiPhysics_ExternalForce*)Obj)->bIsOneShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot = { "bIsOneShot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOneShot_MetaData), NewProp_bIsOneShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomizedForceScale = { "RandomizedForceScale", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, RandomizedForceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomizedForceScale_MetaData), NewProp_RandomizedForceScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ComponentTransform = { "ComponentTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, ComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTransform_MetaData), NewProp_ComponentTransform_MetaData) };
void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace_SetBit(void* Obj)
{
	((FKawaiiPhysics_ExternalForce*)Obj)->bCanSelectForceSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace = { "bCanSelectForceSpace", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSelectForceSpace_MetaData), NewProp_bCanSelectForceSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomForceScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomizedForceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ComponentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	&NewStructOps,
	"KawaiiPhysics_ExternalForce",
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::PropPointers),
	sizeof(FKawaiiPhysics_ExternalForce),
	alignof(FKawaiiPhysics_ExternalForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysics_ExternalForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EExternalForceSpace_StaticEnum, TEXT("EExternalForceSpace"), &Z_Registration_Info_UEnum_EExternalForceSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1709983579U) },
		{ EExternalForceCurveEvaluateType_StaticEnum, TEXT("EExternalForceCurveEvaluateType"), &Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3446887715U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKawaiiPhysics_ExternalForce::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce), 2977004081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_h_1760996591(TEXT("/Script/KawaiiPhysics"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsExternalForce_Curve() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVectorCurve();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin ScriptStruct FKawaiiPhysics_ExternalForce_Curve
static_assert(std::is_polymorphic<FKawaiiPhysics_ExternalForce_Curve>() == std::is_polymorphic<FKawaiiPhysics_ExternalForce>(), "USTRUCT FKawaiiPhysics_ExternalForce_Curve cannot be polymorphic unless super FKawaiiPhysics_ExternalForce is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve;
class UScriptStruct* FKawaiiPhysics_ExternalForce_Curve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce_Curve"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce_Curve>()
{
	return FKawaiiPhysics_ExternalForce_Curve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Curve\n///\n" },
#endif
		{ "DisplayName", "Curve" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceCurve_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe6\x99\x82\xe9\x96\x93\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\xe5\xa4\x89\xe5\x8c\x96\xe3\x81\x99\xe3\x82\x8b\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x80\x82X\xe8\xbb\xb8:Time Y\xe8\xbb\xb8:Force\n\x09* Set the external force that changes over time using a curve. X-axis: Time Y-axis: Force\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x99\x82\xe9\x96\x93\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\xe5\xa4\x89\xe5\x8c\x96\xe3\x81\x99\xe3\x82\x8b\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x80\x82X\xe8\xbb\xb8:Time Y\xe8\xbb\xb8:Force\nSet the external force that changes over time using a curve. X-axis: Time Y-axis: Force" },
#endif
		{ "XAxisName", "Time" },
		{ "YAxisName", "Force" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveEvaluateType_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe8\xa9\x95\xe4\xbe\xa1\xe6\x96\xb9\xe5\xbc\x8f\xe3\x80\x82\n\x09* Single\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xef\xbc\x9a\xe5\x89\x8d\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92SubstepCount\xe3\x81\xa7\xe5\x88\x86\xe5\x89\xb2\xe3\x81\x97\xe3\x80\x81\n\x09* \xe5\x88\x86\xe5\x89\xb2\xe5\xbe\x8c\xe3\x81\xae\xe5\x90\x84\xe6\x99\x82\xe9\x96\x93\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xae\xe5\xb9\xb3\xe5\x9d\x87\xe3\x83\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xa4\xe3\x83\xbb\xe6\x9c\x80\xe5\xb0\x8f\xe5\x80\xa4\xe3\x82\x92\xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe4\xbd\xbf\xe7\x94\xa8\n\x09* Curve evaluation method\n\x09* If set to anything other than Single: The time elapsed from the previous frame is divided by SubstepCount,\n\x09* and the Average, Maximum, or Minimum values of the curve at each time point after division are used as external forces.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe8\xa9\x95\xe4\xbe\xa1\xe6\x96\xb9\xe5\xbc\x8f\xe3\x80\x82\nSingle\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xef\xbc\x9a\xe5\x89\x8d\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92SubstepCount\xe3\x81\xa7\xe5\x88\x86\xe5\x89\xb2\xe3\x81\x97\xe3\x80\x81\n\xe5\x88\x86\xe5\x89\xb2\xe5\xbe\x8c\xe3\x81\xae\xe5\x90\x84\xe6\x99\x82\xe9\x96\x93\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xae\xe5\xb9\xb3\xe5\x9d\x87\xe3\x83\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xa4\xe3\x83\xbb\xe6\x9c\x80\xe5\xb0\x8f\xe5\x80\xa4\xe3\x82\x92\xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe4\xbd\xbf\xe7\x94\xa8\nCurve evaluation method\nIf set to anything other than Single: The time elapsed from the previous frame is divided by SubstepCount,\nand the Average, Maximum, or Minimum values of the curve at each time point after division are used as external forces." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubstepCount_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x81\xae\xe5\x88\x86\xe5\x89\xb2\xe6\x95\xb0\n\x09* Number of divisions of elapsed time\n\x09*/" },
#endif
		{ "EditCondition", "CurveEvaluateType != EExternalForceCurveEvaluateType::Single" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x81\xae\xe5\x88\x86\xe5\x89\xb2\xe6\x95\xb0\nNumber of divisions of elapsed time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Scale factor for the time.\n\x09 * This value is used to scale the time for the external force.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale factor for the time.\nThis value is used to scale the time for the external force." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceRateByBoneLengthRate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Force Rate applied to each bone.\n\x09* Multiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Force Rate applied to each bone.\nMultiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCurveTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Curve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForceCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveEvaluateType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveEvaluateType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubstepCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRateByBoneLengthRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCurveTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce_Curve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceCurve = { "ForceCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, ForceCurve), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceCurve_MetaData), NewProp_ForceCurve_MetaData) }; // 3233604077
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType = { "CurveEvaluateType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, CurveEvaluateType), Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveEvaluateType_MetaData), NewProp_CurveEvaluateType_MetaData) }; // 3446887715
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_SubstepCount = { "SubstepCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, SubstepCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubstepCount_MetaData), NewProp_SubstepCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, TimeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceRateByBoneLengthRate = { "ForceRateByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, ForceRateByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceRateByBoneLengthRate_MetaData), NewProp_ForceRateByBoneLengthRate_MetaData) }; // 762678829
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_PrevTime = { "PrevTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, PrevTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevTime_MetaData), NewProp_PrevTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_MaxCurveTime = { "MaxCurveTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, MaxCurveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCurveTime_MetaData), NewProp_MaxCurveTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_SubstepCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceRateByBoneLengthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_PrevTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_MaxCurveTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce,
	&NewStructOps,
	"KawaiiPhysics_ExternalForce_Curve",
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::PropPointers),
	sizeof(FKawaiiPhysics_ExternalForce_Curve),
	alignof(FKawaiiPhysics_ExternalForce_Curve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysics_ExternalForce_Curve

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Curve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKawaiiPhysics_ExternalForce_Curve::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce_Curve"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce_Curve), 2046274549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Curve_h_4283855392(TEXT("/Script/KawaiiPhysics"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Curve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Curve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

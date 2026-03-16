// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/ExternalForces/KawaiiPhysicsExternalForce_Wind.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsExternalForce_Wind() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin ScriptStruct FKawaiiPhysics_ExternalForce_Wind
static_assert(std::is_polymorphic<FKawaiiPhysics_ExternalForce_Wind>() == std::is_polymorphic<FKawaiiPhysics_ExternalForce>(), "USTRUCT FKawaiiPhysics_ExternalForce_Wind cannot be polymorphic unless super FKawaiiPhysics_ExternalForce is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind;
class UScriptStruct* FKawaiiPhysics_ExternalForce_Wind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce_Wind"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce_Wind>()
{
	return FKawaiiPhysics_ExternalForce_Wind::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Wind\n///\n" },
#endif
		{ "DisplayName", "Wind" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Wind.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceRateByBoneLengthRate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Force Rate applied to each bone.\n\x09* Multiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Wind.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Force Rate applied to each bone.\nMultiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindDirectionNoiseAngle_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* WindDirectionalSource\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe9\xa2\xa8\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xab\xe4\xb8\x8e\xe3\x81\x88\xe3\x82\x8b\xe3\x83\x8e\xe3\x82\xa4\xe3\x82\xba\xef\xbc\x88\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x89\n* Noise(Degree) of wind by WindDirectionalSource. For use with Cloth and SpeedTree\n*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Wind.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WindDirectionalSource\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe9\xa2\xa8\xe6\x96\xb9\xe5\x90\x91\xe3\x81\xab\xe4\xb8\x8e\xe3\x81\x88\xe3\x82\x8b\xe3\x83\x8e\xe3\x82\xa4\xe3\x82\xba\xef\xbc\x88\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x89\nNoise(Degree) of wind by WindDirectionalSource. For use with Cloth and SpeedTree" },
#endif
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Wind.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRateByBoneLengthRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindDirectionNoiseAngle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce_Wind>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_ForceRateByBoneLengthRate = { "ForceRateByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Wind, ForceRateByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceRateByBoneLengthRate_MetaData), NewProp_ForceRateByBoneLengthRate_MetaData) }; // 762678829
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_WindDirectionNoiseAngle = { "WindDirectionNoiseAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Wind, WindDirectionNoiseAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindDirectionNoiseAngle_MetaData), NewProp_WindDirectionNoiseAngle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Wind, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_ForceRateByBoneLengthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_WindDirectionNoiseAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce,
	&NewStructOps,
	"KawaiiPhysics_ExternalForce_Wind",
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::PropPointers),
	sizeof(FKawaiiPhysics_ExternalForce_Wind),
	alignof(FKawaiiPhysics_ExternalForce_Wind),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysics_ExternalForce_Wind

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Wind_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKawaiiPhysics_ExternalForce_Wind::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce_Wind"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce_Wind), 1505646322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Wind_h_1360096046(TEXT("/Script/KawaiiPhysics"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Wind_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Wind_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

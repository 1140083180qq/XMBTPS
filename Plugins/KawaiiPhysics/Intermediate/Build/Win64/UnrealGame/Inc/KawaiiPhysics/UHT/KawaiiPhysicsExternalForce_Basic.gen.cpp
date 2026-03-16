// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/ExternalForces/KawaiiPhysicsExternalForce_Basic.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsExternalForce_Basic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin ScriptStruct FKawaiiPhysics_ExternalForce_Basic
static_assert(std::is_polymorphic<FKawaiiPhysics_ExternalForce_Basic>() == std::is_polymorphic<FKawaiiPhysics_ExternalForce>(), "USTRUCT FKawaiiPhysics_ExternalForce_Basic cannot be polymorphic unless super FKawaiiPhysics_ExternalForce is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic;
class UScriptStruct* FKawaiiPhysics_ExternalForce_Basic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce_Basic"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce_Basic>()
{
	return FKawaiiPhysics_ExternalForce_Basic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Basic\n///\n" },
#endif
		{ "DisplayName", "Basic" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Basic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceDir_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direction of the force */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Basic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of the force" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceRateByBoneLengthRate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Force Rate applied to each bone.\n\x09* Multiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Basic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Force Rate applied to each bone.\nMultiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interval for applying the force */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Basic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interval for applying the force" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current time */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Basic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Previous time */" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Basic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForceDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRateByBoneLengthRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce_Basic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceDir = { "ForceDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, ForceDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceDir_MetaData), NewProp_ForceDir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceRateByBoneLengthRate = { "ForceRateByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, ForceRateByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceRateByBoneLengthRate_MetaData), NewProp_ForceRateByBoneLengthRate_MetaData) }; // 762678829
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interval_MetaData), NewProp_Interval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_PrevTime = { "PrevTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, PrevTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevTime_MetaData), NewProp_PrevTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceRateByBoneLengthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_PrevTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce,
	&NewStructOps,
	"KawaiiPhysics_ExternalForce_Basic",
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::PropPointers),
	sizeof(FKawaiiPhysics_ExternalForce_Basic),
	alignof(FKawaiiPhysics_ExternalForce_Basic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysics_ExternalForce_Basic

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Basic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKawaiiPhysics_ExternalForce_Basic::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce_Basic"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce_Basic), 4038887556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Basic_h_3429909757(TEXT("/Script/KawaiiPhysics"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Basic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Basic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/ExternalForces/KawaiiPhysicsExternalForce_Gravity.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsExternalForce_Gravity() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

// Begin ScriptStruct FKawaiiPhysics_ExternalForce_Gravity
static_assert(std::is_polymorphic<FKawaiiPhysics_ExternalForce_Gravity>() == std::is_polymorphic<FKawaiiPhysics_ExternalForce>(), "USTRUCT FKawaiiPhysics_ExternalForce_Gravity cannot be polymorphic unless super FKawaiiPhysics_ExternalForce is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity;
class UScriptStruct* FKawaiiPhysics_ExternalForce_Gravity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce_Gravity"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce_Gravity>()
{
	return FKawaiiPhysics_ExternalForce_Gravity::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Gravity\n///\n" },
#endif
		{ "DisplayName", "Gravity" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Gravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gravity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceRateByBoneLengthRate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Force Rate applied to each bone.\n\x09* Multiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Gravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Force Rate applied to each bone.\nMultiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterGravityDirection_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Character\xe5\x81\xb4\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f""CustomGravityDirection\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0(UE5.4\xe4\xbb\xa5\xe9\x99\x8d)\n\x09* Flag to use CustomGravityDirection set on the Character side (UE5.4 and later)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Gravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character\xe5\x81\xb4\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f""CustomGravityDirection\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0(UE5.4\xe4\xbb\xa5\xe9\x99\x8d)\nFlag to use CustomGravityDirection set on the Character side (UE5.4 and later)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterGravityScale_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Character\xe5\x81\xb4\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9fGravityScale\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n\x09* Flag to use GravityScale set on the Character side\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Gravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character\xe5\x81\xb4\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9fGravityScale\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nFlag to use GravityScale set on the Character side" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGravityDirection_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Direction to override the gravity.\n\x09 * This direction is used when bUseOverrideGravityDirection is true.\n\x09 */" },
#endif
		{ "EditCondition", "bUseOverrideGravityDirection" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Gravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction to override the gravity.\nThis direction is used when bUseOverrideGravityDirection is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideGravityDirection_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Flag to determine whether to use the override gravity direction.\n\x09 * If true, the gravity direction will be overridden by OverrideGravityDirection.\n\x09 */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Gravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to determine whether to use the override gravity direction.\nIf true, the gravity direction will be overridden by OverrideGravityDirection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExternalForces/KawaiiPhysicsExternalForce_Gravity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRateByBoneLengthRate;
	static void NewProp_bUseCharacterGravityDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterGravityDirection;
	static void NewProp_bUseCharacterGravityScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterGravityScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideGravityDirection;
	static void NewProp_bUseOverrideGravityDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideGravityDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce_Gravity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_ForceRateByBoneLengthRate = { "ForceRateByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Gravity, ForceRateByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceRateByBoneLengthRate_MetaData), NewProp_ForceRateByBoneLengthRate_MetaData) }; // 762678829
void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection_SetBit(void* Obj)
{
	((FKawaiiPhysics_ExternalForce_Gravity*)Obj)->bUseCharacterGravityDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection = { "bUseCharacterGravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce_Gravity), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCharacterGravityDirection_MetaData), NewProp_bUseCharacterGravityDirection_MetaData) };
void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale_SetBit(void* Obj)
{
	((FKawaiiPhysics_ExternalForce_Gravity*)Obj)->bUseCharacterGravityScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale = { "bUseCharacterGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce_Gravity), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCharacterGravityScale_MetaData), NewProp_bUseCharacterGravityScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OverrideGravityDirection = { "OverrideGravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Gravity, OverrideGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideGravityDirection_MetaData), NewProp_OverrideGravityDirection_MetaData) };
void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection_SetBit(void* Obj)
{
	((FKawaiiPhysics_ExternalForce_Gravity*)Obj)->bUseOverrideGravityDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection = { "bUseOverrideGravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce_Gravity), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOverrideGravityDirection_MetaData), NewProp_bUseOverrideGravityDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Gravity, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_ForceRateByBoneLengthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OverrideGravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OwnerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce,
	&NewStructOps,
	"KawaiiPhysics_ExternalForce_Gravity",
	Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::PropPointers),
	sizeof(FKawaiiPhysics_ExternalForce_Gravity),
	alignof(FKawaiiPhysics_ExternalForce_Gravity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.InnerSingleton;
}
// End ScriptStruct FKawaiiPhysics_ExternalForce_Gravity

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Gravity_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKawaiiPhysics_ExternalForce_Gravity::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce_Gravity"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce_Gravity), 1005327146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Gravity_h_1088929288(TEXT("/Script/KawaiiPhysics"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Gravity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_Gravity_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

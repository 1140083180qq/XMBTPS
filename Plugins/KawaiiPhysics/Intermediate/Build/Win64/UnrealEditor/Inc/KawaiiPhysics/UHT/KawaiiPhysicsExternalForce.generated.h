// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExternalForces/KawaiiPhysicsExternalForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAWAIIPHYSICS_KawaiiPhysicsExternalForce_generated_h
#error "KawaiiPhysicsExternalForce.generated.h already included, missing '#pragma once' in KawaiiPhysicsExternalForce.h"
#endif
#define KAWAIIPHYSICS_KawaiiPhysicsExternalForce_generated_h

#define FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysics_ExternalForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ExternalForces_KawaiiPhysicsExternalForce_h


#define FOREACH_ENUM_EEXTERNALFORCESPACE(op) \
	op(EExternalForceSpace::ComponentSpace) \
	op(EExternalForceSpace::WorldSpace) \
	op(EExternalForceSpace::BoneSpace) 

enum class EExternalForceSpace : uint8;
template<> struct TIsUEnumClass<EExternalForceSpace> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EExternalForceSpace>();

#define FOREACH_ENUM_EEXTERNALFORCECURVEEVALUATETYPE(op) \
	op(EExternalForceCurveEvaluateType::Single) \
	op(EExternalForceCurveEvaluateType::Average) \
	op(EExternalForceCurveEvaluateType::Max) \
	op(EExternalForceCurveEvaluateType::Min) 

enum class EExternalForceCurveEvaluateType : uint8;
template<> struct TIsUEnumClass<EExternalForceCurveEvaluateType> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EExternalForceCurveEvaluateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

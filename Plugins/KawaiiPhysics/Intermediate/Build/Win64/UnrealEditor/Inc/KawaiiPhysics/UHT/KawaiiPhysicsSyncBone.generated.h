// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KawaiiPhysicsSyncBone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAWAIIPHYSICS_KawaiiPhysicsSyncBone_generated_h
#error "KawaiiPhysicsSyncBone.generated.h already included, missing '#pragma once' in KawaiiPhysicsSyncBone.h"
#endif
#define KAWAIIPHYSICS_KawaiiPhysicsSyncBone_generated_h

#define FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTarget_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysicsSyncTarget>();

#define FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysicsSyncTargetRoot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FKawaiiPhysicsSyncTarget Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysicsSyncTargetRoot>();

#define FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysicsSyncBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysicsSyncBone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsSyncBone_h


#define FOREACH_ENUM_ESYNCBONEDIRECTION(op) \
	op(ESyncBoneDirection::Both) \
	op(ESyncBoneDirection::Positive) \
	op(ESyncBoneDirection::Negative) \
	op(ESyncBoneDirection::None) 

enum class ESyncBoneDirection : uint8;
template<> struct TIsUEnumClass<ESyncBoneDirection> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ESyncBoneDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

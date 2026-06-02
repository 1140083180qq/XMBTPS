// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNotifies/AnimNotifyState_KawaiiPhysicsSetAlpha.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAWAIIPHYSICS_AnimNotifyState_KawaiiPhysicsSetAlpha_generated_h
#error "AnimNotifyState_KawaiiPhysicsSetAlpha.generated.h already included, missing '#pragma once' in AnimNotifyState_KawaiiPhysicsSetAlpha.h"
#endif
#define KAWAIIPHYSICS_AnimNotifyState_KawaiiPhysicsSetAlpha_generated_h

#define FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_KawaiiPhysicsSetAlpha(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_KawaiiPhysicsSetAlpha_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_KawaiiPhysicsSetAlpha, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KawaiiPhysics"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_KawaiiPhysicsSetAlpha)


#define FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNotifyState_KawaiiPhysicsSetAlpha(UAnimNotifyState_KawaiiPhysicsSetAlpha&&); \
	UAnimNotifyState_KawaiiPhysicsSetAlpha(const UAnimNotifyState_KawaiiPhysicsSetAlpha&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_KawaiiPhysicsSetAlpha); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_KawaiiPhysicsSetAlpha); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_KawaiiPhysicsSetAlpha) \
	NO_API virtual ~UAnimNotifyState_KawaiiPhysicsSetAlpha();


#define FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_21_PROLOG
#define FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_24_INCLASS_NO_PURE_DECLS \
	FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAWAIIPHYSICS_API UClass* StaticClass<class UAnimNotifyState_KawaiiPhysicsSetAlpha>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEGAME_5_4_XMBBlaster_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNotifies_AnimNotifyState_KawaiiPhysicsSetAlpha_h


#define FOREACH_ENUM_EKAWAIIPHYSICSSETALPHASOURCE(op) \
	op(EKawaiiPhysicsSetAlphaSource::Curve) \
	op(EKawaiiPhysicsSetAlphaSource::Constant) 

enum class EKawaiiPhysicsSetAlphaSource : uint8;
template<> struct TIsUEnumClass<EKawaiiPhysicsSetAlphaSource> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EKawaiiPhysicsSetAlphaSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KawaiiPhysicsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UKawaiiPhysicsLimitsDataAsset;
class UObject;
class USkeletalMeshComponent;
enum class EAnimNodeReferenceConversionResult : uint8;
enum class EKawaiiPhysicsAccessExternalForceResult : uint8;
struct FAnimNodeReference;
struct FGameplayTagContainer;
struct FInstancedStruct;
struct FKawaiiPhysicsReference;
struct FKawaiiPhysicsSettings;
#ifdef KAWAIIPHYSICS_KawaiiPhysicsLibrary_generated_h
#error "KawaiiPhysicsLibrary.generated.h already included, missing '#pragma once' in KawaiiPhysicsLibrary.h"
#endif
#define KAWAIIPHYSICS_KawaiiPhysicsLibrary_generated_h

#define FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysicsReference>();

#define FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetExternalForceTransformProperty); \
	DECLARE_FUNCTION(execSetExternalForceTransformProperty); \
	DECLARE_FUNCTION(execGetExternalForceRotatorProperty); \
	DECLARE_FUNCTION(execSetExternalForceRotatorProperty); \
	DECLARE_FUNCTION(execGetExternalForceVectorProperty); \
	DECLARE_FUNCTION(execSetExternalForceVectorProperty); \
	DECLARE_FUNCTION(execGetExternalForceFloatProperty); \
	DECLARE_FUNCTION(execSetExternalForceFloatProperty); \
	DECLARE_FUNCTION(execGetExternalForceIntProperty); \
	DECLARE_FUNCTION(execSetExternalForceIntProperty); \
	DECLARE_FUNCTION(execGetExternalForceBoolProperty); \
	DECLARE_FUNCTION(execSetExternalForceBoolProperty); \
	DECLARE_FUNCTION(execGetAlphaFromComponent); \
	DECLARE_FUNCTION(execSetAlphaToComponent); \
	DECLARE_FUNCTION(execRemoveExternalForcesFromComponent); \
	DECLARE_FUNCTION(execAddExternalForcesToComponent); \
	DECLARE_FUNCTION(execAddExternalForce); \
	DECLARE_FUNCTION(execAddExternalForceWithExecResult); \
	DECLARE_FUNCTION(execGetLimitsDataAsset); \
	DECLARE_FUNCTION(execSetLimitsDataAsset); \
	DECLARE_FUNCTION(execGetNeedWarmUp); \
	DECLARE_FUNCTION(execSetNeedWarmUp); \
	DECLARE_FUNCTION(execGetAllowWorldCollision); \
	DECLARE_FUNCTION(execSetAllowWorldCollision); \
	DECLARE_FUNCTION(execGetWindScale); \
	DECLARE_FUNCTION(execSetWindScale); \
	DECLARE_FUNCTION(execGetEnableWind); \
	DECLARE_FUNCTION(execSetEnableWind); \
	DECLARE_FUNCTION(execGetGravity); \
	DECLARE_FUNCTION(execSetGravity); \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execGetDummyBoneLength); \
	DECLARE_FUNCTION(execSetDummyBoneLength); \
	DECLARE_FUNCTION(execGetPhysicsSettings); \
	DECLARE_FUNCTION(execSetPhysicsSettings); \
	DECLARE_FUNCTION(execGetExcludeBoneNames); \
	DECLARE_FUNCTION(execSetExcludeBoneNames); \
	DECLARE_FUNCTION(execGetRootBoneName); \
	DECLARE_FUNCTION(execSetRootBoneName); \
	DECLARE_FUNCTION(execResetDynamics); \
	DECLARE_FUNCTION(execConvertToKawaiiPhysicsPure); \
	DECLARE_FUNCTION(execConvertToKawaiiPhysics);


#define FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKawaiiPhysicsLibrary(); \
	friend struct Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics; \
public: \
	DECLARE_CLASS(UKawaiiPhysicsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KawaiiPhysics"), NO_API) \
	DECLARE_SERIALIZER(UKawaiiPhysicsLibrary)


#define FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKawaiiPhysicsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKawaiiPhysicsLibrary(UKawaiiPhysicsLibrary&&); \
	UKawaiiPhysicsLibrary(const UKawaiiPhysicsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKawaiiPhysicsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKawaiiPhysicsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKawaiiPhysicsLibrary) \
	NO_API virtual ~UKawaiiPhysicsLibrary();


#define FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_51_PROLOG
#define FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_54_INCLASS_NO_PURE_DECLS \
	FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAWAIIPHYSICS_API UClass* StaticClass<class UKawaiiPhysicsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEGAME_5_4_XMBGuns_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h


#define FOREACH_ENUM_EKAWAIIPHYSICSACCESSEXTERNALFORCERESULT(op) \
	op(EKawaiiPhysicsAccessExternalForceResult::Valid) \
	op(EKawaiiPhysicsAccessExternalForceResult::NotValid) 

enum class EKawaiiPhysicsAccessExternalForceResult : uint8;
template<> struct TIsUEnumClass<EKawaiiPhysicsAccessExternalForceResult> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EKawaiiPhysicsAccessExternalForceResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef CMP302_RNADE_ImpactBomb_generated_h
#error "ImpactBomb.generated.h already included, missing '#pragma once' in ImpactBomb.h"
#endif
#define CMP302_RNADE_ImpactBomb_generated_h

#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWhenDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Act); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WhenDestroyed(Z_Param_Act); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWhenDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Act); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WhenDestroyed(Z_Param_Act); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAImpactBomb(); \
	friend struct Z_Construct_UClass_AImpactBomb_Statics; \
public: \
	DECLARE_CLASS(AImpactBomb, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(AImpactBomb)


#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAImpactBomb(); \
	friend struct Z_Construct_UClass_AImpactBomb_Statics; \
public: \
	DECLARE_CLASS(AImpactBomb, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(AImpactBomb)


#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AImpactBomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AImpactBomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImpactBomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImpactBomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AImpactBomb(AImpactBomb&&); \
	NO_API AImpactBomb(const AImpactBomb&); \
public:


#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AImpactBomb(AImpactBomb&&); \
	NO_API AImpactBomb(const AImpactBomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImpactBomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImpactBomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AImpactBomb)


#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AImpactBomb, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AImpactBomb, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__Explosion() { return STRUCT_OFFSET(AImpactBomb, Explosion); }


#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_9_PROLOG
#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_RPC_WRAPPERS \
	CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_INCLASS \
	CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_INCLASS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CMP302_RNADE_API UClass* StaticClass<class AImpactBomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CMP302_RNade_Source_CMP302_RNade_ImpactBomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

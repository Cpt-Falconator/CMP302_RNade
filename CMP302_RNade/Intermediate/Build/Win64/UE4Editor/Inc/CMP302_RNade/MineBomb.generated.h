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
struct FHitResult;
#ifdef CMP302_RNADE_MineBomb_generated_h
#error "MineBomb.generated.h already included, missing '#pragma once' in MineBomb.h"
#endif
#define CMP302_RNADE_MineBomb_generated_h

#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMineBomb(); \
	friend struct Z_Construct_UClass_AMineBomb_Statics; \
public: \
	DECLARE_CLASS(AMineBomb, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(AMineBomb)


#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMineBomb(); \
	friend struct Z_Construct_UClass_AMineBomb_Statics; \
public: \
	DECLARE_CLASS(AMineBomb, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(AMineBomb)


#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMineBomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMineBomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMineBomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMineBomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMineBomb(AMineBomb&&); \
	NO_API AMineBomb(const AMineBomb&); \
public:


#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMineBomb(AMineBomb&&); \
	NO_API AMineBomb(const AMineBomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMineBomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMineBomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMineBomb)


#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__radius() { return STRUCT_OFFSET(AMineBomb, radius); }


#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_9_PROLOG
#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_RPC_WRAPPERS \
	CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_INCLASS \
	CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_INCLASS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_MineBomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CMP302_RNADE_API UClass* StaticClass<class AMineBomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CMP302_RNade_Source_CMP302_RNade_MineBomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CMP302_RNADE_TimerBomb_generated_h
#error "TimerBomb.generated.h already included, missing '#pragma once' in TimerBomb.h"
#endif
#define CMP302_RNADE_TimerBomb_generated_h

#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_RPC_WRAPPERS
#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimerBomb(); \
	friend struct Z_Construct_UClass_ATimerBomb_Statics; \
public: \
	DECLARE_CLASS(ATimerBomb, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(ATimerBomb)


#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATimerBomb(); \
	friend struct Z_Construct_UClass_ATimerBomb_Statics; \
public: \
	DECLARE_CLASS(ATimerBomb, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(ATimerBomb)


#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimerBomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimerBomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimerBomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimerBomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimerBomb(ATimerBomb&&); \
	NO_API ATimerBomb(const ATimerBomb&); \
public:


#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimerBomb(ATimerBomb&&); \
	NO_API ATimerBomb(const ATimerBomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimerBomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimerBomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimerBomb)


#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__timerbombMesh() { return STRUCT_OFFSET(ATimerBomb, timerbombMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATimerBomb, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__countdownTimer() { return STRUCT_OFFSET(ATimerBomb, countdownTimer); }


#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_10_PROLOG
#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_RPC_WRAPPERS \
	CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_INCLASS \
	CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_INCLASS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_TimerBomb_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CMP302_RNADE_API UClass* StaticClass<class ATimerBomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CMP302_RNade_Source_CMP302_RNade_TimerBomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

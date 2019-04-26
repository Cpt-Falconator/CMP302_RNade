// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CMP302_RNADE_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define CMP302_RNADE_Enemy_generated_h

#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_RPC_WRAPPERS
#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_PRIVATE_PROPERTY_OFFSET
#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_9_PROLOG
#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_RPC_WRAPPERS \
	CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_INCLASS \
	CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CMP302_RNADE_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CMP302_RNade_Source_CMP302_RNade_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

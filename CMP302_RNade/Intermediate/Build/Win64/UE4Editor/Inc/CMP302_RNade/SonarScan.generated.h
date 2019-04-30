// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CMP302_RNADE_SonarScan_generated_h
#error "SonarScan.generated.h already included, missing '#pragma once' in SonarScan.h"
#endif
#define CMP302_RNADE_SonarScan_generated_h

#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_RPC_WRAPPERS \
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


#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASonarScan(); \
	friend struct Z_Construct_UClass_ASonarScan_Statics; \
public: \
	DECLARE_CLASS(ASonarScan, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(ASonarScan)


#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASonarScan(); \
	friend struct Z_Construct_UClass_ASonarScan_Statics; \
public: \
	DECLARE_CLASS(ASonarScan, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP302_RNade"), NO_API) \
	DECLARE_SERIALIZER(ASonarScan)


#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASonarScan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASonarScan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASonarScan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASonarScan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASonarScan(ASonarScan&&); \
	NO_API ASonarScan(const ASonarScan&); \
public:


#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASonarScan(ASonarScan&&); \
	NO_API ASonarScan(const ASonarScan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASonarScan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASonarScan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASonarScan)


#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SonarComp() { return STRUCT_OFFSET(ASonarScan, SonarComp); } \
	FORCEINLINE static uint32 __PPO__maxRadius() { return STRUCT_OFFSET(ASonarScan, maxRadius); }


#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_9_PROLOG
#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_RPC_WRAPPERS \
	CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_INCLASS \
	CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_PRIVATE_PROPERTY_OFFSET \
	CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_INCLASS_NO_PURE_DECLS \
	CMP302_RNade_Source_CMP302_RNade_SonarScan_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CMP302_RNADE_API UClass* StaticClass<class ASonarScan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CMP302_RNade_Source_CMP302_RNade_SonarScan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

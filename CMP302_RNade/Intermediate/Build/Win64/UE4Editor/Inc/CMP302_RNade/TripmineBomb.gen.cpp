// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP302_RNade/TripmineBomb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTripmineBomb() {}
// Cross Module References
	CMP302_RNADE_API UClass* Z_Construct_UClass_ATripmineBomb_NoRegister();
	CMP302_RNADE_API UClass* Z_Construct_UClass_ATripmineBomb();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CMP302_RNade();
	CMP302_RNADE_API UFunction* Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CMP302_RNADE_API UFunction* Z_Construct_UFunction_ATripmineBomb_OnOverlap();
	CMP302_RNADE_API UFunction* Z_Construct_UFunction_ATripmineBomb_WhenDestroyed();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CMP302_RNADE_API UClass* Z_Construct_UClass_AExplosionActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATripmineBomb::StaticRegisterNativesATripmineBomb()
	{
		UClass* Class = ATripmineBomb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectionOverlap", &ATripmineBomb::execConnectionOverlap },
			{ "OnOverlap", &ATripmineBomb::execOnOverlap },
			{ "WhenDestroyed", &ATripmineBomb::execWhenDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics
	{
		struct TripmineBomb_eventConnectionOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventConnectionOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TripmineBomb_eventConnectionOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TripmineBomb_eventConnectionOverlap_Parms), &Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventConnectionOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventConnectionOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventConnectionOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventConnectionOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATripmineBomb, nullptr, "ConnectionOverlap", sizeof(TripmineBomb_eventConnectionOverlap_Parms), Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics
	{
		struct TripmineBomb_eventOnOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TripmineBomb_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TripmineBomb_eventOnOverlap_Parms), &Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventOnOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATripmineBomb, nullptr, "OnOverlap", sizeof(TripmineBomb_eventOnOverlap_Parms), Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATripmineBomb_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATripmineBomb_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics
	{
		struct TripmineBomb_eventWhenDestroyed_Parms
		{
			AActor* Act;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Act;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::NewProp_Act = { "Act", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TripmineBomb_eventWhenDestroyed_Parms, Act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::NewProp_Act,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATripmineBomb, nullptr, "WhenDestroyed", sizeof(TripmineBomb_eventWhenDestroyed_Parms), Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATripmineBomb_WhenDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATripmineBomb_WhenDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATripmineBomb_NoRegister()
	{
		return ATripmineBomb::StaticClass();
	}
	struct Z_Construct_UClass_ATripmineBomb_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connectionCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_connectionCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tripLaser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tripLaser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Explosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tripmineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tripmineMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATripmineBomb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CMP302_RNade,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATripmineBomb_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATripmineBomb_ConnectionOverlap, "ConnectionOverlap" }, // 1504671851
		{ &Z_Construct_UFunction_ATripmineBomb_OnOverlap, "OnOverlap" }, // 850082690
		{ &Z_Construct_UFunction_ATripmineBomb_WhenDestroyed, "WhenDestroyed" }, // 534291208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripmineBomb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TripmineBomb.h" },
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripmineBomb_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATripmineBomb_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATripmineBomb, radius), METADATA_PARAMS(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripmineBomb_Statics::NewProp_connectionCheck_MetaData[] = {
		{ "Category", "Bomb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATripmineBomb_Statics::NewProp_connectionCheck = { "connectionCheck", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATripmineBomb, connectionCheck), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_connectionCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_connectionCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripLaser_MetaData[] = {
		{ "Category", "Bomb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripLaser = { "tripLaser", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATripmineBomb, tripLaser), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripLaser_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripLaser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripmineBomb_Statics::NewProp_Explosion_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATripmineBomb_Statics::NewProp_Explosion = { "Explosion", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATripmineBomb, Explosion), Z_Construct_UClass_AExplosionActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_Explosion_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_Explosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripmineBomb_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "ProjectileMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATripmineBomb_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATripmineBomb, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripmineMesh_MetaData[] = {
		{ "Category", "Bomb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TripmineBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripmineMesh = { "tripmineMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATripmineBomb, tripmineMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripmineMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripmineMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATripmineBomb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripmineBomb_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripmineBomb_Statics::NewProp_connectionCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripLaser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripmineBomb_Statics::NewProp_Explosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripmineBomb_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripmineBomb_Statics::NewProp_tripmineMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATripmineBomb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATripmineBomb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATripmineBomb_Statics::ClassParams = {
		&ATripmineBomb::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATripmineBomb_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATripmineBomb_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATripmineBomb_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATripmineBomb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATripmineBomb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATripmineBomb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATripmineBomb, 1383335452);
	template<> CMP302_RNADE_API UClass* StaticClass<ATripmineBomb>()
	{
		return ATripmineBomb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATripmineBomb(Z_Construct_UClass_ATripmineBomb, &ATripmineBomb::StaticClass, TEXT("/Script/CMP302_RNade"), TEXT("ATripmineBomb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATripmineBomb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

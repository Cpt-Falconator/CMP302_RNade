// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP302_RNade/TimerBomb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerBomb() {}
// Cross Module References
	CMP302_RNADE_API UClass* Z_Construct_UClass_ATimerBomb_NoRegister();
	CMP302_RNADE_API UClass* Z_Construct_UClass_ATimerBomb();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CMP302_RNade();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CMP302_RNADE_API UClass* Z_Construct_UClass_AExplosionActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATimerBomb::StaticRegisterNativesATimerBomb()
	{
	}
	UClass* Z_Construct_UClass_ATimerBomb_NoRegister()
	{
		return ATimerBomb::StaticClass();
	}
	struct Z_Construct_UClass_ATimerBomb_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_countdownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_countdownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Explosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timerbombMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_timerbombMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerBomb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CMP302_RNade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerBomb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimerBomb.h" },
		{ "ModuleRelativePath", "TimerBomb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerBomb_Statics::NewProp_countdownTimer_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "TimerBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimerBomb_Statics::NewProp_countdownTimer = { "countdownTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerBomb, countdownTimer), METADATA_PARAMS(Z_Construct_UClass_ATimerBomb_Statics::NewProp_countdownTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimerBomb_Statics::NewProp_countdownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerBomb_Statics::NewProp_Explosion_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "TimerBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimerBomb_Statics::NewProp_Explosion = { "Explosion", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerBomb, Explosion), Z_Construct_UClass_AExplosionActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATimerBomb_Statics::NewProp_Explosion_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimerBomb_Statics::NewProp_Explosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerBomb_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "ProjectileMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TimerBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimerBomb_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerBomb, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimerBomb_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimerBomb_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerBomb_Statics::NewProp_timerbombMesh_MetaData[] = {
		{ "Category", "Bomb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TimerBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimerBomb_Statics::NewProp_timerbombMesh = { "timerbombMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerBomb, timerbombMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimerBomb_Statics::NewProp_timerbombMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimerBomb_Statics::NewProp_timerbombMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimerBomb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerBomb_Statics::NewProp_countdownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerBomb_Statics::NewProp_Explosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerBomb_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerBomb_Statics::NewProp_timerbombMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerBomb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerBomb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerBomb_Statics::ClassParams = {
		&ATimerBomb::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATimerBomb_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATimerBomb_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATimerBomb_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATimerBomb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerBomb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerBomb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerBomb, 2637540281);
	template<> CMP302_RNADE_API UClass* StaticClass<ATimerBomb>()
	{
		return ATimerBomb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerBomb(Z_Construct_UClass_ATimerBomb, &ATimerBomb::StaticClass, TEXT("/Script/CMP302_RNade"), TEXT("ATimerBomb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerBomb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

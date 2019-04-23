// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP302_RNade/CMP302_RNadeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMP302_RNadeGameMode() {}
// Cross Module References
	CMP302_RNADE_API UClass* Z_Construct_UClass_ACMP302_RNadeGameMode_NoRegister();
	CMP302_RNADE_API UClass* Z_Construct_UClass_ACMP302_RNadeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CMP302_RNade();
// End Cross Module References
	void ACMP302_RNadeGameMode::StaticRegisterNativesACMP302_RNadeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACMP302_RNadeGameMode_NoRegister()
	{
		return ACMP302_RNadeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACMP302_RNadeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACMP302_RNadeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CMP302_RNade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMP302_RNadeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CMP302_RNadeGameMode.h" },
		{ "ModuleRelativePath", "CMP302_RNadeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACMP302_RNadeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACMP302_RNadeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACMP302_RNadeGameMode_Statics::ClassParams = {
		&ACMP302_RNadeGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACMP302_RNadeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACMP302_RNadeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACMP302_RNadeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACMP302_RNadeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACMP302_RNadeGameMode, 3286320942);
	template<> CMP302_RNADE_API UClass* StaticClass<ACMP302_RNadeGameMode>()
	{
		return ACMP302_RNadeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACMP302_RNadeGameMode(Z_Construct_UClass_ACMP302_RNadeGameMode, &ACMP302_RNadeGameMode::StaticClass, TEXT("/Script/CMP302_RNade"), TEXT("ACMP302_RNadeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACMP302_RNadeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

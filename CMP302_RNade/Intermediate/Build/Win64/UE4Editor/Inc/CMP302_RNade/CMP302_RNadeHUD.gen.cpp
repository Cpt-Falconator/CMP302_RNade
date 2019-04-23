// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP302_RNade/CMP302_RNadeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMP302_RNadeHUD() {}
// Cross Module References
	CMP302_RNADE_API UClass* Z_Construct_UClass_ACMP302_RNadeHUD_NoRegister();
	CMP302_RNADE_API UClass* Z_Construct_UClass_ACMP302_RNadeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CMP302_RNade();
// End Cross Module References
	void ACMP302_RNadeHUD::StaticRegisterNativesACMP302_RNadeHUD()
	{
	}
	UClass* Z_Construct_UClass_ACMP302_RNadeHUD_NoRegister()
	{
		return ACMP302_RNadeHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACMP302_RNadeHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACMP302_RNadeHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CMP302_RNade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMP302_RNadeHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CMP302_RNadeHUD.h" },
		{ "ModuleRelativePath", "CMP302_RNadeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACMP302_RNadeHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACMP302_RNadeHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACMP302_RNadeHUD_Statics::ClassParams = {
		&ACMP302_RNadeHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACMP302_RNadeHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACMP302_RNadeHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACMP302_RNadeHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACMP302_RNadeHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACMP302_RNadeHUD, 3488301074);
	template<> CMP302_RNADE_API UClass* StaticClass<ACMP302_RNadeHUD>()
	{
		return ACMP302_RNadeHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACMP302_RNadeHUD(Z_Construct_UClass_ACMP302_RNadeHUD, &ACMP302_RNadeHUD::StaticClass, TEXT("/Script/CMP302_RNade"), TEXT("ACMP302_RNadeHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACMP302_RNadeHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

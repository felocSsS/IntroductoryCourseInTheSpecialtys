// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroductoryCourseKP/IntroductoryCourseKPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroductoryCourseKPHUD() {}
// Cross Module References
	INTRODUCTORYCOURSEKP_API UClass* Z_Construct_UClass_AIntroductoryCourseKPHUD_NoRegister();
	INTRODUCTORYCOURSEKP_API UClass* Z_Construct_UClass_AIntroductoryCourseKPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_IntroductoryCourseKP();
// End Cross Module References
	void AIntroductoryCourseKPHUD::StaticRegisterNativesAIntroductoryCourseKPHUD()
	{
	}
	UClass* Z_Construct_UClass_AIntroductoryCourseKPHUD_NoRegister()
	{
		return AIntroductoryCourseKPHUD::StaticClass();
	}
	struct Z_Construct_UClass_AIntroductoryCourseKPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntroductoryCourseKPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroductoryCourseKP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroductoryCourseKPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "IntroductoryCourseKPHUD.h" },
		{ "ModuleRelativePath", "IntroductoryCourseKPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntroductoryCourseKPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroductoryCourseKPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIntroductoryCourseKPHUD_Statics::ClassParams = {
		&AIntroductoryCourseKPHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIntroductoryCourseKPHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIntroductoryCourseKPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntroductoryCourseKPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIntroductoryCourseKPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIntroductoryCourseKPHUD, 1207916090);
	template<> INTRODUCTORYCOURSEKP_API UClass* StaticClass<AIntroductoryCourseKPHUD>()
	{
		return AIntroductoryCourseKPHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIntroductoryCourseKPHUD(Z_Construct_UClass_AIntroductoryCourseKPHUD, &AIntroductoryCourseKPHUD::StaticClass, TEXT("/Script/IntroductoryCourseKP"), TEXT("AIntroductoryCourseKPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroductoryCourseKPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroductoryCourseKP/IntroductoryCourseKPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroductoryCourseKPGameMode() {}
// Cross Module References
	INTRODUCTORYCOURSEKP_API UClass* Z_Construct_UClass_AIntroductoryCourseKPGameMode_NoRegister();
	INTRODUCTORYCOURSEKP_API UClass* Z_Construct_UClass_AIntroductoryCourseKPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IntroductoryCourseKP();
// End Cross Module References
	void AIntroductoryCourseKPGameMode::StaticRegisterNativesAIntroductoryCourseKPGameMode()
	{
	}
	UClass* Z_Construct_UClass_AIntroductoryCourseKPGameMode_NoRegister()
	{
		return AIntroductoryCourseKPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIntroductoryCourseKPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntroductoryCourseKPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroductoryCourseKP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroductoryCourseKPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IntroductoryCourseKPGameMode.h" },
		{ "ModuleRelativePath", "IntroductoryCourseKPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntroductoryCourseKPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroductoryCourseKPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIntroductoryCourseKPGameMode_Statics::ClassParams = {
		&AIntroductoryCourseKPGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIntroductoryCourseKPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIntroductoryCourseKPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntroductoryCourseKPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIntroductoryCourseKPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIntroductoryCourseKPGameMode, 2299978266);
	template<> INTRODUCTORYCOURSEKP_API UClass* StaticClass<AIntroductoryCourseKPGameMode>()
	{
		return AIntroductoryCourseKPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIntroductoryCourseKPGameMode(Z_Construct_UClass_AIntroductoryCourseKPGameMode, &AIntroductoryCourseKPGameMode::StaticClass, TEXT("/Script/IntroductoryCourseKP"), TEXT("AIntroductoryCourseKPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroductoryCourseKPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

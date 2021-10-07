// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTRODUCTORYCOURSEKP_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define INTRODUCTORYCOURSEKP_MainCharacter_generated_h

#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_SPARSE_DATA
#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRunning);


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRunning);


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroductoryCourseKP"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroductoryCourseKP"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AMainCharacter, CameraComponent); }


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_9_PROLOG
#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_SPARSE_DATA \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_RPC_WRAPPERS \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_INCLASS \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_SPARSE_DATA \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTRODUCTORYCOURSEKP_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntroductoryCourseKP_Source_IntroductoryCourseKP_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

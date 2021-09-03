// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef INTRODUCTORYCOURSEKP_IntroductoryCourseKPProjectile_generated_h
#error "IntroductoryCourseKPProjectile.generated.h already included, missing '#pragma once' in IntroductoryCourseKPProjectile.h"
#endif
#define INTRODUCTORYCOURSEKP_IntroductoryCourseKPProjectile_generated_h

#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_SPARSE_DATA
#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroductoryCourseKPProjectile(); \
	friend struct Z_Construct_UClass_AIntroductoryCourseKPProjectile_Statics; \
public: \
	DECLARE_CLASS(AIntroductoryCourseKPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroductoryCourseKP"), NO_API) \
	DECLARE_SERIALIZER(AIntroductoryCourseKPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAIntroductoryCourseKPProjectile(); \
	friend struct Z_Construct_UClass_AIntroductoryCourseKPProjectile_Statics; \
public: \
	DECLARE_CLASS(AIntroductoryCourseKPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroductoryCourseKP"), NO_API) \
	DECLARE_SERIALIZER(AIntroductoryCourseKPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIntroductoryCourseKPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIntroductoryCourseKPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroductoryCourseKPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroductoryCourseKPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntroductoryCourseKPProjectile(AIntroductoryCourseKPProjectile&&); \
	NO_API AIntroductoryCourseKPProjectile(const AIntroductoryCourseKPProjectile&); \
public:


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntroductoryCourseKPProjectile(AIntroductoryCourseKPProjectile&&); \
	NO_API AIntroductoryCourseKPProjectile(const AIntroductoryCourseKPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroductoryCourseKPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroductoryCourseKPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIntroductoryCourseKPProjectile)


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AIntroductoryCourseKPProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AIntroductoryCourseKPProjectile, ProjectileMovement); }


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_12_PROLOG
#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_SPARSE_DATA \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_RPC_WRAPPERS \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_INCLASS \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_SPARSE_DATA \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_INCLASS_NO_PURE_DECLS \
	IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTRODUCTORYCOURSEKP_API UClass* StaticClass<class AIntroductoryCourseKPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntroductoryCourseKP_Source_IntroductoryCourseKP_IntroductoryCourseKPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

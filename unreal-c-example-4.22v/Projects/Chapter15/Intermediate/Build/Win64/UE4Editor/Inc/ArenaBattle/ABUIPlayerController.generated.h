// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABUIPlayerController_generated_h
#error "ABUIPlayerController.generated.h already included, missing '#pragma once' in ABUIPlayerController.h"
#endif
#define ARENABATTLE_ABUIPlayerController_generated_h

#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_RPC_WRAPPERS
#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABUIPlayerController(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABUIPlayerController(); \
public: \
	DECLARE_CLASS(AABUIPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABUIPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABUIPlayerController(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABUIPlayerController(); \
public: \
	DECLARE_CLASS(AABUIPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABUIPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABUIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABUIPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABUIPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABUIPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABUIPlayerController(AABUIPlayerController&&); \
	NO_API AABUIPlayerController(const AABUIPlayerController&); \
public:


#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABUIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABUIPlayerController(AABUIPlayerController&&); \
	NO_API AABUIPlayerController(const AABUIPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABUIPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABUIPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABUIPlayerController)


#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UIWidgetClass() { return STRUCT_OFFSET(AABUIPlayerController, UIWidgetClass); } \
	FORCEINLINE static uint32 __PPO__UIWidgetInstance() { return STRUCT_OFFSET(AABUIPlayerController, UIWidgetInstance); }


#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_12_PROLOG
#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_RPC_WRAPPERS \
	Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_INCLASS \
	Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter15_Source_ArenaBattle_Public_ABUIPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

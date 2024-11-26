// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameMode_generated_h
#error "ABGameMode.generated.h already included, missing '#pragma once' in ABGameMode.h"
#endif
#define ARENABATTLE_ABGameMode_generated_h

#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_RPC_WRAPPERS
#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABGameMode(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABGameMode(); \
public: \
	DECLARE_CLASS(AABGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABGameMode(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABGameMode(); \
public: \
	DECLARE_CLASS(AABGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameMode(AABGameMode&&); \
	NO_API AABGameMode(const AABGameMode&); \
public:


#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameMode(AABGameMode&&); \
	NO_API AABGameMode(const AABGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABGameMode)


#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ABGameState() { return STRUCT_OFFSET(AABGameMode, ABGameState); } \
	FORCEINLINE static uint32 __PPO__ScoreToClear() { return STRUCT_OFFSET(AABGameMode, ScoreToClear); }


#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_12_PROLOG
#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_RPC_WRAPPERS \
	Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_INCLASS \
	Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_INCLASS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter15_Source_ArenaBattle_Public_ABGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

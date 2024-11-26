// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameState_generated_h
#error "ABGameState.generated.h already included, missing '#pragma once' in ABGameState.h"
#endif
#define ARENABATTLE_ABGameState_generated_h

#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_RPC_WRAPPERS
#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABGameState(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABGameState(); \
public: \
	DECLARE_CLASS(AABGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABGameState(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABGameState(); \
public: \
	DECLARE_CLASS(AABGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameState(AABGameState&&); \
	NO_API AABGameState(const AABGameState&); \
public:


#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameState(AABGameState&&); \
	NO_API AABGameState(const AABGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABGameState)


#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TotalGameScore() { return STRUCT_OFFSET(AABGameState, TotalGameScore); } \
	FORCEINLINE static uint32 __PPO__bGameCleared() { return STRUCT_OFFSET(AABGameState, bGameCleared); }


#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_12_PROLOG
#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_RPC_WRAPPERS \
	Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_INCLASS \
	Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_INCLASS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter15_Source_ArenaBattle_Public_ABGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

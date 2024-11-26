// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameplayWidget_generated_h
#error "ABGameplayWidget.generated.h already included, missing '#pragma once' in ABGameplayWidget.h"
#endif
#define ARENABATTLE_ABGameplayWidget_generated_h

#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRetryGameClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRetryGameClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReturnToTitleClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReturnToTitleClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResumeClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResumeClicked(); \
		P_NATIVE_END; \
	}


#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRetryGameClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRetryGameClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReturnToTitleClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReturnToTitleClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResumeClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResumeClicked(); \
		P_NATIVE_END; \
	}


#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGameplayWidget(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABGameplayWidget(); \
public: \
	DECLARE_CLASS(UABGameplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameplayWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUABGameplayWidget(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABGameplayWidget(); \
public: \
	DECLARE_CLASS(UABGameplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameplayWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameplayWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameplayWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameplayWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameplayWidget(UABGameplayWidget&&); \
	NO_API UABGameplayWidget(const UABGameplayWidget&); \
public:


#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameplayWidget(UABGameplayWidget&&); \
	NO_API UABGameplayWidget(const UABGameplayWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameplayWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameplayWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameplayWidget)


#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResumeButton() { return STRUCT_OFFSET(UABGameplayWidget, ResumeButton); } \
	FORCEINLINE static uint32 __PPO__ReturnToTitleButton() { return STRUCT_OFFSET(UABGameplayWidget, ReturnToTitleButton); } \
	FORCEINLINE static uint32 __PPO__RetryGameButton() { return STRUCT_OFFSET(UABGameplayWidget, RetryGameButton); }


#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_12_PROLOG
#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_RPC_WRAPPERS \
	Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_INCLASS \
	Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_INCLASS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter15_Source_ArenaBattle_Public_ABGameplayWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

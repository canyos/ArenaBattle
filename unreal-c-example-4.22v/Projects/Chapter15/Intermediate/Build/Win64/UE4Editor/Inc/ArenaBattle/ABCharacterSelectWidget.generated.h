// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterSelectWidget_generated_h
#error "ABCharacterSelectWidget.generated.h already included, missing '#pragma once' in ABCharacterSelectWidget.h"
#endif
#define ARENABATTLE_ABCharacterSelectWidget_generated_h

#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnConfirmClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConfirmClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNextClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNextClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrevClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrevClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextCharacter) \
	{ \
		P_GET_UBOOL(Z_Param_bForward); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextCharacter(Z_Param_bForward); \
		P_NATIVE_END; \
	}


#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnConfirmClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConfirmClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNextClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNextClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrevClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrevClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextCharacter) \
	{ \
		P_GET_UBOOL(Z_Param_bForward); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextCharacter(Z_Param_bForward); \
		P_NATIVE_END; \
	}


#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABCharacterSelectWidget(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABCharacterSelectWidget(); \
public: \
	DECLARE_CLASS(UABCharacterSelectWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABCharacterSelectWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUABCharacterSelectWidget(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABCharacterSelectWidget(); \
public: \
	DECLARE_CLASS(UABCharacterSelectWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABCharacterSelectWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABCharacterSelectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABCharacterSelectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCharacterSelectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCharacterSelectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABCharacterSelectWidget(UABCharacterSelectWidget&&); \
	NO_API UABCharacterSelectWidget(const UABCharacterSelectWidget&); \
public:


#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABCharacterSelectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABCharacterSelectWidget(UABCharacterSelectWidget&&); \
	NO_API UABCharacterSelectWidget(const UABCharacterSelectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCharacterSelectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCharacterSelectWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABCharacterSelectWidget)


#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentIndex() { return STRUCT_OFFSET(UABCharacterSelectWidget, CurrentIndex); } \
	FORCEINLINE static uint32 __PPO__MaxIndex() { return STRUCT_OFFSET(UABCharacterSelectWidget, MaxIndex); } \
	FORCEINLINE static uint32 __PPO__PrevButton() { return STRUCT_OFFSET(UABCharacterSelectWidget, PrevButton); } \
	FORCEINLINE static uint32 __PPO__NextButton() { return STRUCT_OFFSET(UABCharacterSelectWidget, NextButton); } \
	FORCEINLINE static uint32 __PPO__TextBox() { return STRUCT_OFFSET(UABCharacterSelectWidget, TextBox); } \
	FORCEINLINE static uint32 __PPO__ConfirmButton() { return STRUCT_OFFSET(UABCharacterSelectWidget, ConfirmButton); }


#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_12_PROLOG
#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_RPC_WRAPPERS \
	Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_INCLASS \
	Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_INCLASS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter15_Source_ArenaBattle_Public_ABCharacterSelectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

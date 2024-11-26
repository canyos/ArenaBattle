// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameInstance_generated_h
#error "ABGameInstance.generated.h already included, missing '#pragma once' in ABGameInstance.h"
#endif
#define ARENABATTLE_ABGameInstance_generated_h

#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_14_GENERATED_BODY \
	friend ARENABATTLE_API class UScriptStruct* Z_Construct_UScriptStruct_FABCharacterData(); \
	ARENABATTLE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_RPC_WRAPPERS
#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGameInstance(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABGameInstance(); \
public: \
	DECLARE_CLASS(UABGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUABGameInstance(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABGameInstance(); \
public: \
	DECLARE_CLASS(UABGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameInstance(UABGameInstance&&); \
	NO_API UABGameInstance(const UABGameInstance&); \
public:


#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameInstance(UABGameInstance&&); \
	NO_API UABGameInstance(const UABGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABGameInstance)


#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ABCharacterTable() { return STRUCT_OFFSET(UABGameInstance, ABCharacterTable); }


#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_38_PROLOG
#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_RPC_WRAPPERS \
	Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_INCLASS \
	Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_INCLASS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABGameInstance_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter15_Source_ArenaBattle_Public_ABGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

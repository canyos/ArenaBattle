// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABWeapon_generated_h
#error "ABWeapon.generated.h already included, missing '#pragma once' in ABWeapon.h"
#endif
#define ARENABATTLE_ABWeapon_generated_h

#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_RPC_WRAPPERS
#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABWeapon(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABWeapon(); \
public: \
	DECLARE_CLASS(AABWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAABWeapon(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABWeapon(); \
public: \
	DECLARE_CLASS(AABWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABWeapon(AABWeapon&&); \
	NO_API AABWeapon(const AABWeapon&); \
public:


#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABWeapon(AABWeapon&&); \
	NO_API AABWeapon(const AABWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABWeapon)


#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AABWeapon, AttackRange); } \
	FORCEINLINE static uint32 __PPO__AttackDamageMin() { return STRUCT_OFFSET(AABWeapon, AttackDamageMin); } \
	FORCEINLINE static uint32 __PPO__AttackDamageMax() { return STRUCT_OFFSET(AABWeapon, AttackDamageMax); } \
	FORCEINLINE static uint32 __PPO__AttackModifierMin() { return STRUCT_OFFSET(AABWeapon, AttackModifierMin); } \
	FORCEINLINE static uint32 __PPO__AttackModifierMax() { return STRUCT_OFFSET(AABWeapon, AttackModifierMax); } \
	FORCEINLINE static uint32 __PPO__AttackDamage() { return STRUCT_OFFSET(AABWeapon, AttackDamage); } \
	FORCEINLINE static uint32 __PPO__AttackModifier() { return STRUCT_OFFSET(AABWeapon, AttackModifier); }


#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_9_PROLOG
#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_RPC_WRAPPERS \
	Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_INCLASS \
	Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_INCLASS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter15_Source_ArenaBattle_Public_ABWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

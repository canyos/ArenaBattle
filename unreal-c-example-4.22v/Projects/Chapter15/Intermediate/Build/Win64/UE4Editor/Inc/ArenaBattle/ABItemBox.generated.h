// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARENABATTLE_ABItemBox_generated_h
#error "ABItemBox.generated.h already included, missing '#pragma once' in ABItemBox.h"
#endif
#define ARENABATTLE_ABItemBox_generated_h

#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEffectFinished) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_PSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEffectFinished(Z_Param_PSystem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCharacterOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEffectFinished) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_PSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEffectFinished(Z_Param_PSystem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCharacterOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABItemBox(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABItemBox(); \
public: \
	DECLARE_CLASS(AABItemBox, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABItemBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAABItemBox(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABItemBox(); \
public: \
	DECLARE_CLASS(AABItemBox, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABItemBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABItemBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABItemBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABItemBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABItemBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABItemBox(AABItemBox&&); \
	NO_API AABItemBox(const AABItemBox&); \
public:


#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABItemBox(AABItemBox&&); \
	NO_API AABItemBox(const AABItemBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABItemBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABItemBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABItemBox)


#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_PRIVATE_PROPERTY_OFFSET
#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_9_PROLOG
#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_RPC_WRAPPERS \
	Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_INCLASS \
	Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_PRIVATE_PROPERTY_OFFSET \
	Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_INCLASS_NO_PURE_DECLS \
	Chapter15_Source_ArenaBattle_Public_ABItemBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter15_Source_ArenaBattle_Public_ABItemBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

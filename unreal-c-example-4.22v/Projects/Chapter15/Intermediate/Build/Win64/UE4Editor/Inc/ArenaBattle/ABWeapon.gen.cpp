// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABWeapon() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABWeapon_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AABWeapon::StaticRegisterNativesAABWeapon()
	{
	}
	UClass* Z_Construct_UClass_AABWeapon_NoRegister()
	{
		return AABWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_AABWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABWeapon.h" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackModifier_MetaData[] = {
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackModifier = { UE4CodeGen_Private::EPropertyClass::Float, "AttackModifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000022815, 1, nullptr, STRUCT_OFFSET(AABWeapon, AttackModifier), METADATA_PARAMS(NewProp_AttackModifier_MetaData, ARRAY_COUNT(NewProp_AttackModifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamage = { UE4CodeGen_Private::EPropertyClass::Float, "AttackDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000022815, 1, nullptr, STRUCT_OFFSET(AABWeapon, AttackDamage), METADATA_PARAMS(NewProp_AttackDamage_MetaData, ARRAY_COUNT(NewProp_AttackDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackModifierMax_MetaData[] = {
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackModifierMax = { UE4CodeGen_Private::EPropertyClass::Float, "AttackModifierMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AABWeapon, AttackModifierMax), METADATA_PARAMS(NewProp_AttackModifierMax_MetaData, ARRAY_COUNT(NewProp_AttackModifierMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackModifierMin_MetaData[] = {
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackModifierMin = { UE4CodeGen_Private::EPropertyClass::Float, "AttackModifierMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AABWeapon, AttackModifierMin), METADATA_PARAMS(NewProp_AttackModifierMin_MetaData, ARRAY_COUNT(NewProp_AttackModifierMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamageMax_MetaData[] = {
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamageMax = { UE4CodeGen_Private::EPropertyClass::Float, "AttackDamageMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AABWeapon, AttackDamageMax), METADATA_PARAMS(NewProp_AttackDamageMax_MetaData, ARRAY_COUNT(NewProp_AttackDamageMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamageMin_MetaData[] = {
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamageMin = { UE4CodeGen_Private::EPropertyClass::Float, "AttackDamageMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AABWeapon, AttackDamageMin), METADATA_PARAMS(NewProp_AttackDamageMin_MetaData, ARRAY_COUNT(NewProp_AttackDamageMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRange = { UE4CodeGen_Private::EPropertyClass::Float, "AttackRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AABWeapon, AttackRange), METADATA_PARAMS(NewProp_AttackRange_MetaData, ARRAY_COUNT(NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
				{ "Category", "Weapon" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon = { UE4CodeGen_Private::EPropertyClass::Object, "Weapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AABWeapon, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Weapon_MetaData, ARRAY_COUNT(NewProp_Weapon_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackModifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackModifierMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackModifierMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackDamageMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackDamageMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weapon,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AABWeapon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AABWeapon::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABWeapon, 3636329582);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABWeapon(Z_Construct_UClass_AABWeapon, &AABWeapon::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

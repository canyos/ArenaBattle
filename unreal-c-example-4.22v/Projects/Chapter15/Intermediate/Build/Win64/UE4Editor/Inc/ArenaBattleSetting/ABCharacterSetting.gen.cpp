// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABCharacterSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterSetting() {}
// Cross Module References
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister();
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UABCharacterSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ArenaBattleSetting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UABCharacterSetting::StaticRegisterNativesUABCharacterSetting()
	{
	}
	UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister()
	{
		return UABCharacterSetting::StaticClass();
	}
	UClass* Z_Construct_UClass_UABCharacterSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattleSetting,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABCharacterSetting.h" },
				{ "ModuleRelativePath", "Public/ABCharacterSetting.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAssets_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABCharacterSetting.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterAssets = { UE4CodeGen_Private::EPropertyClass::Array, "CharacterAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UABCharacterSetting, CharacterAssets), METADATA_PARAMS(NewProp_CharacterAssets_MetaData, ARRAY_COUNT(NewProp_CharacterAssets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterAssets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CharacterAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAssets_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UABCharacterSetting>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UABCharacterSetting::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"ArenaBattle",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABCharacterSetting, 1248649552);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCharacterSetting(Z_Construct_UClass_UABCharacterSetting, &UABCharacterSetting::StaticClass, TEXT("/Script/ArenaBattleSetting"), TEXT("UABCharacterSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

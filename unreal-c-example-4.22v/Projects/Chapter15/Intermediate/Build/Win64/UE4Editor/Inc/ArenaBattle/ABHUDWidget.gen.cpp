// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABHUDWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UABHUDWidget::StaticRegisterNativesUABHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UABHUDWidget_NoRegister()
	{
		return UABHUDWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UABHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABHUDWidget.h" },
				{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HighScore = { UE4CodeGen_Private::EPropertyClass::Object, "HighScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UABHUDWidget, HighScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_HighScore_MetaData, ARRAY_COUNT(NewProp_HighScore_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentScore = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UABHUDWidget, CurrentScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_CurrentScore_MetaData, ARRAY_COUNT(NewProp_CurrentScore_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerLevel = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UABHUDWidget, PlayerLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_PlayerLevel_MetaData, ARRAY_COUNT(NewProp_PlayerLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UABHUDWidget, PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_PlayerName_MetaData, ARRAY_COUNT(NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpBar_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpBar = { UE4CodeGen_Private::EPropertyClass::Object, "ExpBar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UABHUDWidget, ExpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(NewProp_ExpBar_MetaData, ARRAY_COUNT(NewProp_ExpBar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPBar = { UE4CodeGen_Private::EPropertyClass::Object, "HPBar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UABHUDWidget, HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(NewProp_HPBar_MetaData, ARRAY_COUNT(NewProp_HPBar_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighScore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentScore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpBar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HPBar,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UABHUDWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UABHUDWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UABHUDWidget, 1869886904);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABHUDWidget(Z_Construct_UClass_UABHUDWidget, &UABHUDWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSaveGame() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABSaveGame::StaticRegisterNativesUABSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UABSaveGame_NoRegister()
	{
		return UABSaveGame::StaticClass();
	}
	UClass* Z_Construct_UClass_UABSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USaveGame,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABSaveGame.h" },
				{ "ModuleRelativePath", "Public/ABSaveGame.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABSaveGame.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CharacterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UABSaveGame, CharacterIndex), METADATA_PARAMS(NewProp_CharacterIndex_MetaData, ARRAY_COUNT(NewProp_CharacterIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABSaveGame.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighScore = { UE4CodeGen_Private::EPropertyClass::Int, "HighScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UABSaveGame, HighScore), METADATA_PARAMS(NewProp_HighScore_MetaData, ARRAY_COUNT(NewProp_HighScore_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABSaveGame.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UABSaveGame, PlayerName), METADATA_PARAMS(NewProp_PlayerName_MetaData, ARRAY_COUNT(NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABSaveGame.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp = { UE4CodeGen_Private::EPropertyClass::Int, "Exp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UABSaveGame, Exp), METADATA_PARAMS(NewProp_Exp_MetaData, ARRAY_COUNT(NewProp_Exp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABSaveGame.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Int, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UABSaveGame, Level), METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighScore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Exp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UABSaveGame>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UABSaveGame::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UABSaveGame, 2082827297);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABSaveGame(Z_Construct_UClass_UABSaveGame, &UABSaveGame::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

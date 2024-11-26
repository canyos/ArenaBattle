// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerState() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABPlayerState::StaticRegisterNativesAABPlayerState()
	{
	}
	UClass* Z_Construct_UClass_AABPlayerState_NoRegister()
	{
		return AABPlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_AABPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerState,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ABPlayerState.h" },
				{ "ModuleRelativePath", "Public/ABPlayerState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CharacterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(AABPlayerState, CharacterIndex), METADATA_PARAMS(NewProp_CharacterIndex_MetaData, ARRAY_COUNT(NewProp_CharacterIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp = { UE4CodeGen_Private::EPropertyClass::Int, "Exp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(AABPlayerState, Exp), METADATA_PARAMS(NewProp_Exp_MetaData, ARRAY_COUNT(NewProp_Exp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel = { UE4CodeGen_Private::EPropertyClass::Int, "CharacterLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(AABPlayerState, CharacterLevel), METADATA_PARAMS(NewProp_CharacterLevel_MetaData, ARRAY_COUNT(NewProp_CharacterLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHighScore_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameHighScore = { UE4CodeGen_Private::EPropertyClass::Int, "GameHighScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(AABPlayerState, GameHighScore), METADATA_PARAMS(NewProp_GameHighScore_MetaData, ARRAY_COUNT(NewProp_GameHighScore_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScore_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameScore = { UE4CodeGen_Private::EPropertyClass::Int, "GameScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(AABPlayerState, GameScore), METADATA_PARAMS(NewProp_GameScore_MetaData, ARRAY_COUNT(NewProp_GameScore_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Exp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameHighScore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameScore,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AABPlayerState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AABPlayerState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(AABPlayerState, 1236945631);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABPlayerState(Z_Construct_UClass_AABPlayerState, &AABPlayerState::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

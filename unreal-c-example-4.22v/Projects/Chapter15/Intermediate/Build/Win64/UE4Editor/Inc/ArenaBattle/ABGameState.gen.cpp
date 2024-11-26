// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameState() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABGameState_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABGameState::StaticRegisterNativesAABGameState()
	{
	}
	UClass* Z_Construct_UClass_AABGameState_NoRegister()
	{
		return AABGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_AABGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameStateBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ABGameState.h" },
				{ "ModuleRelativePath", "Public/ABGameState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameCleared_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABGameState.h" },
			};
#endif
			auto NewProp_bGameCleared_SetBit = [](void* Obj){ ((AABGameState*)Obj)->bGameCleared = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameCleared = { UE4CodeGen_Private::EPropertyClass::Bool, "bGameCleared", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AABGameState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGameCleared_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGameCleared_MetaData, ARRAY_COUNT(NewProp_bGameCleared_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalGameScore_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalGameScore = { UE4CodeGen_Private::EPropertyClass::Int, "TotalGameScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(AABGameState, TotalGameScore), METADATA_PARAMS(NewProp_TotalGameScore_MetaData, ARRAY_COUNT(NewProp_TotalGameScore_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGameCleared,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalGameScore,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AABGameState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AABGameState::StaticClass,
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
	IMPLEMENT_CLASS(AABGameState, 3623240294);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABGameState(Z_Construct_UClass_AABGameState, &AABGameState::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

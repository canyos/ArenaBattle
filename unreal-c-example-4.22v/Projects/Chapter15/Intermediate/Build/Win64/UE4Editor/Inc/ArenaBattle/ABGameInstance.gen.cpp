// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameInstance() {}
// Cross Module References
	ARENABATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterData();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameInstance_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FABCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARENABATTLE_API uint32 Get_Z_Construct_UScriptStruct_FABCharacterData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FABCharacterData, Z_Construct_UPackage__Script_ArenaBattle(), TEXT("ABCharacterData"), sizeof(FABCharacterData), Get_Z_Construct_UScriptStruct_FABCharacterData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FABCharacterData(FABCharacterData::StaticStruct, TEXT("/Script/ArenaBattle"), TEXT("ABCharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_ArenaBattle_StaticRegisterNativesFABCharacterData
{
	FScriptStruct_ArenaBattle_StaticRegisterNativesFABCharacterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ABCharacterData")),new UScriptStruct::TCppStructOps<FABCharacterData>);
	}
} ScriptStruct_ArenaBattle_StaticRegisterNativesFABCharacterData;
	UScriptStruct* Z_Construct_UScriptStruct_FABCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FABCharacterData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ArenaBattle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ABCharacterData"), sizeof(FABCharacterData), Get_Z_Construct_UScriptStruct_FABCharacterData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ABGameInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FABCharacterData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextExp_MetaData[] = {
				{ "Category", "Data" },
				{ "ModuleRelativePath", "Public/ABGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextExp = { UE4CodeGen_Private::EPropertyClass::Int, "NextExp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FABCharacterData, NextExp), METADATA_PARAMS(NewProp_NextExp_MetaData, ARRAY_COUNT(NewProp_NextExp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropExp_MetaData[] = {
				{ "Category", "Data" },
				{ "ModuleRelativePath", "Public/ABGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DropExp = { UE4CodeGen_Private::EPropertyClass::Int, "DropExp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FABCharacterData, DropExp), METADATA_PARAMS(NewProp_DropExp_MetaData, ARRAY_COUNT(NewProp_DropExp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[] = {
				{ "Category", "Data" },
				{ "ModuleRelativePath", "Public/ABGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Attack = { UE4CodeGen_Private::EPropertyClass::Float, "Attack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FABCharacterData, Attack), METADATA_PARAMS(NewProp_Attack_MetaData, ARRAY_COUNT(NewProp_Attack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
				{ "Category", "Data" },
				{ "ModuleRelativePath", "Public/ABGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FABCharacterData, MaxHP), METADATA_PARAMS(NewProp_MaxHP_MetaData, ARRAY_COUNT(NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "Category", "Data" },
				{ "ModuleRelativePath", "Public/ABGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Int, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FABCharacterData, Level), METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextExp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DropExp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Attack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxHP,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ABCharacterData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FABCharacterData),
				alignof(FABCharacterData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FABCharacterData_CRC() { return 656962709U; }
	void UABGameInstance::StaticRegisterNativesUABGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UABGameInstance_NoRegister()
	{
		return UABGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UABGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABGameInstance.h" },
				{ "ModuleRelativePath", "Public/ABGameInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ABCharacterTable_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ABCharacterTable = { UE4CodeGen_Private::EPropertyClass::Object, "ABCharacterTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UABGameInstance, ABCharacterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_ABCharacterTable_MetaData, ARRAY_COUNT(NewProp_ABCharacterTable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ABCharacterTable,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UABGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UABGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UABGameInstance, 1267243814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGameInstance(Z_Construct_UClass_UABGameInstance, &UABGameInstance::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

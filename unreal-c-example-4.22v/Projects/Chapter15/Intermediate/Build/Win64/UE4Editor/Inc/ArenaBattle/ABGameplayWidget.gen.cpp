// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABGameplayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameplayWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UABGameplayWidget::StaticRegisterNativesUABGameplayWidget()
	{
		UClass* Class = UABGameplayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumeClicked", &UABGameplayWidget::execOnResumeClicked },
			{ "OnRetryGameClicked", &UABGameplayWidget::execOnRetryGameClicked },
			{ "OnReturnToTitleClicked", &UABGameplayWidget::execOnReturnToTitleClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, "OnResumeClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, "OnRetryGameClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, "OnReturnToTitleClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister()
	{
		return UABGameplayWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UABGameplayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked, "OnResumeClicked" }, // 2512846374
				{ &Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked, "OnRetryGameClicked" }, // 556504035
				{ &Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked, "OnReturnToTitleClicked" }, // 3205449944
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABGameplayWidget.h" },
				{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryGameButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetryGameButton = { UE4CodeGen_Private::EPropertyClass::Object, "RetryGameButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABGameplayWidget, RetryGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_RetryGameButton_MetaData, ARRAY_COUNT(NewProp_RetryGameButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnToTitleButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnToTitleButton = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnToTitleButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABGameplayWidget, ReturnToTitleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_ReturnToTitleButton_MetaData, ARRAY_COUNT(NewProp_ReturnToTitleButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton = { UE4CodeGen_Private::EPropertyClass::Object, "ResumeButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABGameplayWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_ResumeButton_MetaData, ARRAY_COUNT(NewProp_ResumeButton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RetryGameButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnToTitleButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResumeButton,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UABGameplayWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UABGameplayWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UABGameplayWidget, 265651912);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGameplayWidget(Z_Construct_UClass_UABGameplayWidget, &UABGameplayWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABGameplayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameplayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

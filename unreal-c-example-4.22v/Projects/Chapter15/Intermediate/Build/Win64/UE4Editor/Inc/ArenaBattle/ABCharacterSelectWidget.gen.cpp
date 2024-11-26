// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABCharacterSelectWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterSelectWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterSelectWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterSelectWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	void UABCharacterSelectWidget::StaticRegisterNativesUABCharacterSelectWidget()
	{
		UClass* Class = UABCharacterSelectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextCharacter", &UABCharacterSelectWidget::execNextCharacter },
			{ "OnConfirmClicked", &UABCharacterSelectWidget::execOnConfirmClicked },
			{ "OnNextClicked", &UABCharacterSelectWidget::execOnNextClicked },
			{ "OnPrevClicked", &UABCharacterSelectWidget::execOnPrevClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter()
	{
		struct ABCharacterSelectWidget_eventNextCharacter_Parms
		{
			bool bForward;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForward_SetBit = [](void* Obj){ ((ABCharacterSelectWidget_eventNextCharacter_Parms*)Obj)->bForward = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForward = { UE4CodeGen_Private::EPropertyClass::Bool, "bForward", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABCharacterSelectWidget_eventNextCharacter_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForward_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForward,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CPP_Default_bForward", "true" },
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, "NextCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(ABCharacterSelectWidget_eventNextCharacter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, "OnConfirmClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, "OnNextClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, "OnPrevClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABCharacterSelectWidget_NoRegister()
	{
		return UABCharacterSelectWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UABCharacterSelectWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter, "NextCharacter" }, // 1890223856
				{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked, "OnConfirmClicked" }, // 2860225833
				{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked, "OnNextClicked" }, // 1170881440
				{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked, "OnPrevClicked" }, // 1934571485
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABCharacterSelectWidget.h" },
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfirmButton = { UE4CodeGen_Private::EPropertyClass::Object, "ConfirmButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, ConfirmButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_ConfirmButton_MetaData, ARRAY_COUNT(NewProp_ConfirmButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBox_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBox = { UE4CodeGen_Private::EPropertyClass::Object, "TextBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, TextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(NewProp_TextBox_MetaData, ARRAY_COUNT(NewProp_TextBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextButton = { UE4CodeGen_Private::EPropertyClass::Object, "NextButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_NextButton_MetaData, ARRAY_COUNT(NewProp_NextButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrevButton = { UE4CodeGen_Private::EPropertyClass::Object, "PrevButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, PrevButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_PrevButton_MetaData, ARRAY_COUNT(NewProp_PrevButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIndex_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIndex = { UE4CodeGen_Private::EPropertyClass::Int, "MaxIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, MaxIndex), METADATA_PARAMS(NewProp_MaxIndex_MetaData, ARRAY_COUNT(NewProp_MaxIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, CurrentIndex), METADATA_PARAMS(NewProp_CurrentIndex_MetaData, ARRAY_COUNT(NewProp_CurrentIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConfirmButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrevButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentIndex,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UABCharacterSelectWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UABCharacterSelectWidget::StaticClass,
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
	IMPLEMENT_CLASS(UABCharacterSelectWidget, 1274076207);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCharacterSelectWidget(Z_Construct_UClass_UABCharacterSelectWidget, &UABCharacterSelectWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABCharacterSelectWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSelectWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

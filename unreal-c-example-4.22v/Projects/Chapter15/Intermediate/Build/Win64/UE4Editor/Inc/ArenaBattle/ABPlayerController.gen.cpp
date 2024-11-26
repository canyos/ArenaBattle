// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerController() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerController_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayResultWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AABPlayerController::StaticRegisterNativesAABPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AABPlayerController_NoRegister()
	{
		return AABPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AABPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ABPlayerController.h" },
				{ "ModuleRelativePath", "Public/ABPlayerController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultWidget = { UE4CodeGen_Private::EPropertyClass::Object, "ResultWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AABPlayerController, ResultWidget), Z_Construct_UClass_UABGameplayResultWidget_NoRegister, METADATA_PARAMS(NewProp_ResultWidget_MetaData, ARRAY_COUNT(NewProp_ResultWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuWidget = { UE4CodeGen_Private::EPropertyClass::Object, "MenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AABPlayerController, MenuWidget), Z_Construct_UClass_UABGameplayWidget_NoRegister, METADATA_PARAMS(NewProp_MenuWidget_MetaData, ARRAY_COUNT(NewProp_MenuWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ABPlayerState_MetaData[] = {
				{ "ModuleRelativePath", "Public/ABPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ABPlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "ABPlayerState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AABPlayerController, ABPlayerState), Z_Construct_UClass_AABPlayerState_NoRegister, METADATA_PARAMS(NewProp_ABPlayerState_MetaData, ARRAY_COUNT(NewProp_ABPlayerState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget = { UE4CodeGen_Private::EPropertyClass::Object, "HUDWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AABPlayerController, HUDWidget), Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(NewProp_HUDWidget_MetaData, ARRAY_COUNT(NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWidgetClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/ABPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResultWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "ResultWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AABPlayerController, ResultWidgetClass), Z_Construct_UClass_UABGameplayResultWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ResultWidgetClass_MetaData, ARRAY_COUNT(NewProp_ResultWidgetClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/ABPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MenuWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "MenuWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AABPlayerController, MenuWidgetClass), Z_Construct_UClass_UABGameplayWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_MenuWidgetClass_MetaData, ARRAY_COUNT(NewProp_MenuWidgetClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/ABPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "HUDWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AABPlayerController, HUDWidgetClass), Z_Construct_UClass_UABHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_HUDWidgetClass_MetaData, ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ABPlayerState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HUDWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultWidgetClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuWidgetClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HUDWidgetClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AABPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AABPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABPlayerController, 2668672746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABPlayerController(Z_Construct_UClass_AABPlayerController, &AABPlayerController::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABUIPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABUIPlayerController() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABUIPlayerController_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABUIPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AABUIPlayerController::StaticRegisterNativesAABUIPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AABUIPlayerController_NoRegister()
	{
		return AABUIPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AABUIPlayerController()
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
				{ "IncludePath", "ABUIPlayerController.h" },
				{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIWidgetInstance_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIWidgetInstance = { UE4CodeGen_Private::EPropertyClass::Object, "UIWidgetInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AABUIPlayerController, UIWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_UIWidgetInstance_MetaData, ARRAY_COUNT(NewProp_UIWidgetInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIWidgetClass_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_UIWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "UIWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AABUIPlayerController, UIWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_UIWidgetClass_MetaData, ARRAY_COUNT(NewProp_UIWidgetClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UIWidgetInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UIWidgetClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AABUIPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AABUIPlayerController::StaticClass,
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
	IMPLEMENT_CLASS(AABUIPlayerController, 4225645746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABUIPlayerController(Z_Construct_UClass_AABUIPlayerController, &AABUIPlayerController::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABUIPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABUIPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

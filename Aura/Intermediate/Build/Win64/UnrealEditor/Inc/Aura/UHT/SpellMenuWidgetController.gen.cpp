// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/SpellMenuWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellMenuWidgetController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
	AURA_API UClass* Z_Construct_UClass_USpellMenuWidgetController();
	AURA_API UClass* Z_Construct_UClass_USpellMenuWidgetController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void USpellMenuWidgetController::StaticRegisterNativesUSpellMenuWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpellMenuWidgetController);
	UClass* Z_Construct_UClass_USpellMenuWidgetController_NoRegister()
	{
		return USpellMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_USpellMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpellMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellMenuWidgetController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/SpellMenuWidgetController.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/SpellMenuWidgetController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpellMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpellMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpellMenuWidgetController_Statics::ClassParams = {
		&USpellMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_USpellMenuWidgetController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpellMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_USpellMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpellMenuWidgetController.OuterSingleton, Z_Construct_UClass_USpellMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpellMenuWidgetController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<USpellMenuWidgetController>()
	{
		return USpellMenuWidgetController::StaticClass();
	}
	USpellMenuWidgetController::USpellMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpellMenuWidgetController);
	USpellMenuWidgetController::~USpellMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SpellMenuWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SpellMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpellMenuWidgetController, USpellMenuWidgetController::StaticClass, TEXT("USpellMenuWidgetController"), &Z_Registration_Info_UClass_USpellMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpellMenuWidgetController), 3850643072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SpellMenuWidgetController_h_3253391843(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SpellMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SpellMenuWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

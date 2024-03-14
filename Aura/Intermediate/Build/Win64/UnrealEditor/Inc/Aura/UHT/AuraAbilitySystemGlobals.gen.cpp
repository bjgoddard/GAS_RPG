// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AuraAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemGlobals() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemGlobals();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemGlobals_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraAbilitySystemGlobals::StaticRegisterNativesUAuraAbilitySystemGlobals()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAbilitySystemGlobals);
	UClass* Z_Construct_UClass_UAuraAbilitySystemGlobals_NoRegister()
	{
		return UAuraAbilitySystemGlobals::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AuraAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemGlobals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemGlobals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::ClassParams = {
		&UAuraAbilitySystemGlobals::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraAbilitySystemGlobals()
	{
		if (!Z_Registration_Info_UClass_UAuraAbilitySystemGlobals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemGlobals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAbilitySystemGlobals.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAbilitySystemGlobals>()
	{
		return UAuraAbilitySystemGlobals::StaticClass();
	}
	UAuraAbilitySystemGlobals::UAuraAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemGlobals);
	UAuraAbilitySystemGlobals::~UAuraAbilitySystemGlobals() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemGlobals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemGlobals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemGlobals, UAuraAbilitySystemGlobals::StaticClass, TEXT("UAuraAbilitySystemGlobals"), &Z_Registration_Info_UClass_UAuraAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemGlobals), 685512118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemGlobals_h_255504794(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemGlobals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

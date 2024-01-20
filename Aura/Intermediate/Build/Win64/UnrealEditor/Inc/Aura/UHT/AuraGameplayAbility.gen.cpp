// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/AuraGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraGameplayAbility() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UAuraGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraGameplayAbility::StaticRegisterNativesUAuraGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraGameplayAbility);
	UClass* Z_Construct_UClass_UAuraGameplayAbility_NoRegister()
	{
		return UAuraGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAuraGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupInputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartupInputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/AuraGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_StartupInputTag_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_StartupInputTag = { "StartupInputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraGameplayAbility, StartupInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_StartupInputTag_MetaData), Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_StartupInputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraGameplayAbility, Damage), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_Damage_MetaData) }; // 4070660376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_StartupInputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraGameplayAbility_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraGameplayAbility_Statics::ClassParams = {
		&UAuraGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAuraGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UAuraGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraGameplayAbility.OuterSingleton, Z_Construct_UClass_UAuraGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraGameplayAbility.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraGameplayAbility>()
	{
		return UAuraGameplayAbility::StaticClass();
	}
	UAuraGameplayAbility::UAuraGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraGameplayAbility);
	UAuraGameplayAbility::~UAuraGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraGameplayAbility, UAuraGameplayAbility::StaticClass, TEXT("UAuraGameplayAbility"), &Z_Registration_Info_UClass_UAuraGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraGameplayAbility), 656410586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_910412840(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

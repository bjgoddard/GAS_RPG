// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/AuraDamageGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraDamageGameplayAbility() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraDamageGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UAuraDamageGameplayAbility_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraGameplayAbility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraDamageGameplayAbility::StaticRegisterNativesUAuraDamageGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraDamageGameplayAbility);
	UClass* Z_Construct_UClass_UAuraDamageGameplayAbility_NoRegister()
	{
		return UAuraDamageGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAuraDamageGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTypes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTypes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DamageTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/AuraDamageGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraDamageGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "AuraDamageGameplayAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraDamageGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraDamageGameplayAbility, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageEffectClass_MetaData), Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageEffectClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes_ValueProp = { "DamageTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(0, nullptr) }; // 4070660376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes_Key_KeyProp = { "DamageTypes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraDamageGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes = { "DamageTypes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraDamageGameplayAbility, DamageTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes_MetaData), Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes_MetaData) }; // 2083603574 4070660376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::NewProp_DamageTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraDamageGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::ClassParams = {
		&UAuraDamageGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraDamageGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UAuraDamageGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraDamageGameplayAbility.OuterSingleton, Z_Construct_UClass_UAuraDamageGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraDamageGameplayAbility.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraDamageGameplayAbility>()
	{
		return UAuraDamageGameplayAbility::StaticClass();
	}
	UAuraDamageGameplayAbility::UAuraDamageGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraDamageGameplayAbility);
	UAuraDamageGameplayAbility::~UAuraDamageGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraDamageGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraDamageGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraDamageGameplayAbility, UAuraDamageGameplayAbility::StaticClass, TEXT("UAuraDamageGameplayAbility"), &Z_Registration_Info_UClass_UAuraDamageGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraDamageGameplayAbility), 1370320335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraDamageGameplayAbility_h_1595799603(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraDamageGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraDamageGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/AuraMeleeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraMeleeAttack() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraDamageGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UAuraMeleeAttack();
	AURA_API UClass* Z_Construct_UClass_UAuraMeleeAttack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraMeleeAttack::StaticRegisterNativesUAuraMeleeAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraMeleeAttack);
	UClass* Z_Construct_UClass_UAuraMeleeAttack_NoRegister()
	{
		return UAuraMeleeAttack::StaticClass();
	}
	struct Z_Construct_UClass_UAuraMeleeAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraMeleeAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraDamageGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraMeleeAttack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraMeleeAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/AuraMeleeAttack.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraMeleeAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraMeleeAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraMeleeAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraMeleeAttack_Statics::ClassParams = {
		&UAuraMeleeAttack::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraMeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraMeleeAttack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraMeleeAttack()
	{
		if (!Z_Registration_Info_UClass_UAuraMeleeAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraMeleeAttack.OuterSingleton, Z_Construct_UClass_UAuraMeleeAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraMeleeAttack.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraMeleeAttack>()
	{
		return UAuraMeleeAttack::StaticClass();
	}
	UAuraMeleeAttack::UAuraMeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraMeleeAttack);
	UAuraMeleeAttack::~UAuraMeleeAttack() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraMeleeAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraMeleeAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraMeleeAttack, UAuraMeleeAttack::StaticClass, TEXT("UAuraMeleeAttack"), &Z_Registration_Info_UClass_UAuraMeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraMeleeAttack), 216279570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraMeleeAttack_h_172049109(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraMeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraMeleeAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

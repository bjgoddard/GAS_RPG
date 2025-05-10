// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/AuraFireBolt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraFireBolt() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraFireBolt();
	AURA_API UClass* Z_Construct_UClass_UAuraFireBolt_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraProjectileSpell();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraFireBolt::StaticRegisterNativesUAuraFireBolt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraFireBolt);
	UClass* Z_Construct_UClass_UAuraFireBolt_NoRegister()
	{
		return UAuraFireBolt::StaticClass();
	}
	struct Z_Construct_UClass_UAuraFireBolt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraFireBolt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraProjectileSpell,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraFireBolt_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraFireBolt_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/AuraFireBolt.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraFireBolt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraFireBolt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraFireBolt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraFireBolt_Statics::ClassParams = {
		&UAuraFireBolt::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraFireBolt_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraFireBolt_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraFireBolt()
	{
		if (!Z_Registration_Info_UClass_UAuraFireBolt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraFireBolt.OuterSingleton, Z_Construct_UClass_UAuraFireBolt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraFireBolt.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraFireBolt>()
	{
		return UAuraFireBolt::StaticClass();
	}
	UAuraFireBolt::UAuraFireBolt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraFireBolt);
	UAuraFireBolt::~UAuraFireBolt() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraFireBolt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraFireBolt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraFireBolt, UAuraFireBolt::StaticClass, TEXT("UAuraFireBolt"), &Z_Registration_Info_UClass_UAuraFireBolt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraFireBolt), 3899702684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraFireBolt_h_3384357440(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraFireBolt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraFireBolt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

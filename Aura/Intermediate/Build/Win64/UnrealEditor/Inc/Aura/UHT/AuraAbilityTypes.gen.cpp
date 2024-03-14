// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AuraAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilityTypes() {}
// Cross Module References
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraGameplayEffectContext();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

static_assert(std::is_polymorphic<FAuraGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FAuraGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraGameplayEffectContext;
class UScriptStruct* FAuraGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_AuraGameplayEffectContext.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraGameplayEffectContext>()
{
	return FAuraGameplayEffectContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlockedHit_MetaData[];
#endif
		static void NewProp_bIsBlockedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlockedHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[];
#endif
		static void NewProp_bIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuraAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraGameplayEffectContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuraAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit(void* Obj)
	{
		((FAuraGameplayEffectContext*)Obj)->bIsBlockedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsBlockedHit = { "bIsBlockedHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAuraGameplayEffectContext), &Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData), Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuraAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
	{
		((FAuraGameplayEffectContext*)Obj)->bIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAuraGameplayEffectContext), &Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData), Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsBlockedHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewProp_bIsCriticalHit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"AuraGameplayEffectContext",
		Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::PropPointers),
		sizeof(FAuraGameplayEffectContext),
		alignof(FAuraGameplayEffectContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAuraGameplayEffectContext()
	{
		if (!Z_Registration_Info_UScriptStruct_AuraGameplayEffectContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AuraGameplayEffectContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AuraAbilityTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AuraAbilityTypes_h_Statics::ScriptStructInfo[] = {
		{ FAuraGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FAuraGameplayEffectContext_Statics::NewStructOps, TEXT("AuraGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_AuraGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraGameplayEffectContext), 1737434498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AuraAbilityTypes_h_3866326913(TEXT("/Script/Aura"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AuraAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AuraAbilityTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

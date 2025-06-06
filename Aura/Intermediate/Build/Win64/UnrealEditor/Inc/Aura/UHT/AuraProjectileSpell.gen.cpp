// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/AuraProjectileSpell.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraProjectileSpell() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraProjectile_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraDamageGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UAuraProjectileSpell();
	AURA_API UClass* Z_Construct_UClass_UAuraProjectileSpell_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UAuraProjectileSpell::execSpawnProjectile)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectileTargetLocation);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SocketTag);
		P_GET_UBOOL(Z_Param_bOverridePitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile(Z_Param_Out_ProjectileTargetLocation,Z_Param_Out_SocketTag,Z_Param_bOverridePitch,Z_Param_PitchOverride);
		P_NATIVE_END;
	}
	void UAuraProjectileSpell::StaticRegisterNativesUAuraProjectileSpell()
	{
		UClass* Class = UAuraProjectileSpell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &UAuraProjectileSpell::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics
	{
		struct AuraProjectileSpell_eventSpawnProjectile_Parms
		{
			FVector ProjectileTargetLocation;
			FGameplayTag SocketTag;
			bool bOverridePitch;
			float PitchOverride;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
		static void NewProp_bOverridePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation = { "ProjectileTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraProjectileSpell_eventSpawnProjectile_Parms, ProjectileTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData), Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraProjectileSpell_eventSpawnProjectile_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag_MetaData), Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_bOverridePitch_SetBit(void* Obj)
	{
		((AuraProjectileSpell_eventSpawnProjectile_Parms*)Obj)->bOverridePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_bOverridePitch = { "bOverridePitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraProjectileSpell_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_bOverridePitch_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_PitchOverride = { "PitchOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraProjectileSpell_eventSpawnProjectile_Parms, PitchOverride), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_bOverridePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::NewProp_PitchOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "CPP_Default_bOverridePitch", "false" },
		{ "CPP_Default_PitchOverride", "0.000000" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraProjectileSpell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraProjectileSpell, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::AuraProjectileSpell_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::AuraProjectileSpell_eventSpawnProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraProjectileSpell);
	UClass* Z_Construct_UClass_UAuraProjectileSpell_NoRegister()
	{
		return UAuraProjectileSpell::StaticClass();
	}
	struct Z_Construct_UClass_UAuraProjectileSpell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumProjectiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumProjectiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraProjectileSpell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraDamageGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraProjectileSpell_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraProjectileSpell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraProjectileSpell_SpawnProjectile, "SpawnProjectile" }, // 4133604065
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraProjectileSpell_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraProjectileSpell_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/AuraProjectileSpell.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraProjectileSpell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "AuraProjectileSpell" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraProjectileSpell.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraProjectileSpell, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAuraProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_NumProjectiles_MetaData[] = {
		{ "Category", "AuraProjectileSpell" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraProjectileSpell.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_NumProjectiles = { "NumProjectiles", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraProjectileSpell, NumProjectiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_NumProjectiles_MetaData), Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_NumProjectiles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraProjectileSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraProjectileSpell_Statics::NewProp_NumProjectiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraProjectileSpell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraProjectileSpell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraProjectileSpell_Statics::ClassParams = {
		&UAuraProjectileSpell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuraProjectileSpell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraProjectileSpell_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraProjectileSpell_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraProjectileSpell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraProjectileSpell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraProjectileSpell()
	{
		if (!Z_Registration_Info_UClass_UAuraProjectileSpell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraProjectileSpell.OuterSingleton, Z_Construct_UClass_UAuraProjectileSpell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraProjectileSpell.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraProjectileSpell>()
	{
		return UAuraProjectileSpell::StaticClass();
	}
	UAuraProjectileSpell::UAuraProjectileSpell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraProjectileSpell);
	UAuraProjectileSpell::~UAuraProjectileSpell() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraProjectileSpell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraProjectileSpell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraProjectileSpell, UAuraProjectileSpell::StaticClass, TEXT("UAuraProjectileSpell"), &Z_Registration_Info_UClass_UAuraProjectileSpell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraProjectileSpell), 2223658515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraProjectileSpell_h_2955646058(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraProjectileSpell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraProjectileSpell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

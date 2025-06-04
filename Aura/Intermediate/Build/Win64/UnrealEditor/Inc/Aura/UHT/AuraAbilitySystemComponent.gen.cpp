// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AuraAbilitySystemComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemComponent() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UAuraAbilitySystemComponent::execClientUpdateAbilityStatus)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_StatusTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateAbilityStatus_Implementation(Z_Param_AbilityTag,Z_Param_StatusTag,Z_Param_AbilityLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemComponent::execClientEffectApplied)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayEffectSpec,Z_Param_EffectSpec);
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveEffectHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEffectApplied_Implementation(Z_Param_AbilitySystemComponent,Z_Param_EffectSpec,Z_Param_ActiveEffectHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemComponent::execServerEquipAbility)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipAbility_Implementation(Z_Param_AbilityTag,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemComponent::execServerSpendSkillPoint)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSpendSkillPoint_Implementation(Z_Param_AbilityTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemComponent::execServerUpgradeAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUpgradeAttribute_Implementation(Z_Param_AttributeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemComponent::execUpgradeAttribute)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AttributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeAttribute(Z_Param_Out_AttributeTag);
		P_NATIVE_END;
	}
	struct AuraAbilitySystemComponent_eventClientEffectApplied_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayEffectSpec EffectSpec;
		FActiveGameplayEffectHandle ActiveEffectHandle;
	};
	struct AuraAbilitySystemComponent_eventClientUpdateAbilityStatus_Parms
	{
		FGameplayTag AbilityTag;
		FGameplayTag StatusTag;
		int32 AbilityLevel;
	};
	struct AuraAbilitySystemComponent_eventServerEquipAbility_Parms
	{
		FGameplayTag AbilityTag;
		FGameplayTag Slot;
	};
	struct AuraAbilitySystemComponent_eventServerSpendSkillPoint_Parms
	{
		FGameplayTag AbilityTag;
	};
	struct AuraAbilitySystemComponent_eventServerUpgradeAttribute_Parms
	{
		FGameplayTag AttributeTag;
	};
	static FName NAME_UAuraAbilitySystemComponent_ClientEffectApplied = FName(TEXT("ClientEffectApplied"));
	void UAuraAbilitySystemComponent::ClientEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
	{
		AuraAbilitySystemComponent_eventClientEffectApplied_Parms Parms;
		Parms.AbilitySystemComponent=AbilitySystemComponent;
		Parms.EffectSpec=EffectSpec;
		Parms.ActiveEffectHandle=ActiveEffectHandle;
		ProcessEvent(FindFunctionChecked(NAME_UAuraAbilitySystemComponent_ClientEffectApplied),&Parms);
	}
	static FName NAME_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus = FName(TEXT("ClientUpdateAbilityStatus"));
	void UAuraAbilitySystemComponent::ClientUpdateAbilityStatus(FGameplayTag const& AbilityTag, FGameplayTag const& StatusTag, int32 AbilityLevel)
	{
		AuraAbilitySystemComponent_eventClientUpdateAbilityStatus_Parms Parms;
		Parms.AbilityTag=AbilityTag;
		Parms.StatusTag=StatusTag;
		Parms.AbilityLevel=AbilityLevel;
		ProcessEvent(FindFunctionChecked(NAME_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus),&Parms);
	}
	static FName NAME_UAuraAbilitySystemComponent_ServerEquipAbility = FName(TEXT("ServerEquipAbility"));
	void UAuraAbilitySystemComponent::ServerEquipAbility(FGameplayTag const& AbilityTag, FGameplayTag const& Slot)
	{
		AuraAbilitySystemComponent_eventServerEquipAbility_Parms Parms;
		Parms.AbilityTag=AbilityTag;
		Parms.Slot=Slot;
		ProcessEvent(FindFunctionChecked(NAME_UAuraAbilitySystemComponent_ServerEquipAbility),&Parms);
	}
	static FName NAME_UAuraAbilitySystemComponent_ServerSpendSkillPoint = FName(TEXT("ServerSpendSkillPoint"));
	void UAuraAbilitySystemComponent::ServerSpendSkillPoint(FGameplayTag const& AbilityTag)
	{
		AuraAbilitySystemComponent_eventServerSpendSkillPoint_Parms Parms;
		Parms.AbilityTag=AbilityTag;
		ProcessEvent(FindFunctionChecked(NAME_UAuraAbilitySystemComponent_ServerSpendSkillPoint),&Parms);
	}
	static FName NAME_UAuraAbilitySystemComponent_ServerUpgradeAttribute = FName(TEXT("ServerUpgradeAttribute"));
	void UAuraAbilitySystemComponent::ServerUpgradeAttribute(FGameplayTag const& AttributeTag)
	{
		AuraAbilitySystemComponent_eventServerUpgradeAttribute_Parms Parms;
		Parms.AttributeTag=AttributeTag;
		ProcessEvent(FindFunctionChecked(NAME_UAuraAbilitySystemComponent_ServerUpgradeAttribute),&Parms);
	}
	void UAuraAbilitySystemComponent::StaticRegisterNativesUAuraAbilitySystemComponent()
	{
		UClass* Class = UAuraAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientEffectApplied", &UAuraAbilitySystemComponent::execClientEffectApplied },
			{ "ClientUpdateAbilityStatus", &UAuraAbilitySystemComponent::execClientUpdateAbilityStatus },
			{ "ServerEquipAbility", &UAuraAbilitySystemComponent::execServerEquipAbility },
			{ "ServerSpendSkillPoint", &UAuraAbilitySystemComponent::execServerSpendSkillPoint },
			{ "ServerUpgradeAttribute", &UAuraAbilitySystemComponent::execServerUpgradeAttribute },
			{ "UpgradeAttribute", &UAuraAbilitySystemComponent::execUpgradeAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientEffectApplied_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientEffectApplied_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData) }; // 4290086594
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle = { "ActiveEffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientEffectApplied_Parms, ActiveEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemComponent, nullptr, "ClientEffectApplied", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers), sizeof(AuraAbilitySystemComponent_eventClientEffectApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraAbilitySystemComponent_eventClientEffectApplied_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatusTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientUpdateAbilityStatus_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_StatusTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_StatusTag = { "StatusTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientUpdateAbilityStatus_Parms, StatusTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_StatusTag_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_StatusTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientUpdateAbilityStatus_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_StatusTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::NewProp_AbilityLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemComponent, nullptr, "ClientUpdateAbilityStatus", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::PropPointers), sizeof(AuraAbilitySystemComponent_eventClientUpdateAbilityStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraAbilitySystemComponent_eventClientUpdateAbilityStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventServerEquipAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventServerEquipAbility_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_Slot_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_Slot_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemComponent, nullptr, "ServerEquipAbility", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::PropPointers), sizeof(AuraAbilitySystemComponent_eventServerEquipAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraAbilitySystemComponent_eventServerEquipAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventServerSpendSkillPoint_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemComponent, nullptr, "ServerSpendSkillPoint", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::PropPointers), sizeof(AuraAbilitySystemComponent_eventServerSpendSkillPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraAbilitySystemComponent_eventServerSpendSkillPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::NewProp_AttributeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventServerUpgradeAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::NewProp_AttributeTag_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::NewProp_AttributeTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::NewProp_AttributeTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemComponent, nullptr, "ServerUpgradeAttribute", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::PropPointers), sizeof(AuraAbilitySystemComponent_eventServerUpgradeAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraAbilitySystemComponent_eventServerUpgradeAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics
	{
		struct AuraAbilitySystemComponent_eventUpgradeAttribute_Parms
		{
			FGameplayTag AttributeTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::NewProp_AttributeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventUpgradeAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::NewProp_AttributeTag_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::NewProp_AttributeTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::NewProp_AttributeTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemComponent, nullptr, "UpgradeAttribute", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::AuraAbilitySystemComponent_eventUpgradeAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::AuraAbilitySystemComponent_eventUpgradeAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAbilitySystemComponent);
	UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister()
	{
		return UAuraAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied, "ClientEffectApplied" }, // 2481925008
		{ &Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientUpdateAbilityStatus, "ClientUpdateAbilityStatus" }, // 27772843
		{ &Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerEquipAbility, "ServerEquipAbility" }, // 4106127883
		{ &Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerSpendSkillPoint, "ServerSpendSkillPoint" }, // 1954151776
		{ &Z_Construct_UFunction_UAuraAbilitySystemComponent_ServerUpgradeAttribute, "ServerUpgradeAttribute" }, // 3411248213
		{ &Z_Construct_UFunction_UAuraAbilitySystemComponent_UpgradeAttribute, "UpgradeAttribute" }, // 2909498591
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/AuraAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::ClassParams = {
		&UAuraAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAbilitySystemComponent>()
	{
		return UAuraAbilitySystemComponent::StaticClass();
	}
	UAuraAbilitySystemComponent::UAuraAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemComponent);
	UAuraAbilitySystemComponent::~UAuraAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemComponent, UAuraAbilitySystemComponent::StaticClass, TEXT("UAuraAbilitySystemComponent"), &Z_Registration_Info_UClass_UAuraAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemComponent), 3735366736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_2575709548(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

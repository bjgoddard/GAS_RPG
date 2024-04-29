// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Character/AuraCharacterBase.h"
#include "Aura/Public/Interaction/CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraCharacterBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
	AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedMontage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(AAuraCharacterBase::execMulticastHandleDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastHandleDeath_Implementation();
		P_NATIVE_END;
	}
	struct AuraCharacterBase_eventStartDissolveTimeline_Parms
	{
		UMaterialInstanceDynamic* DynamicMaterialInstance;
	};
	struct AuraCharacterBase_eventStartWeaponDissolveTimeline_Parms
	{
		UMaterialInstanceDynamic* DynamicMaterialInstance;
	};
	static FName NAME_AAuraCharacterBase_MulticastHandleDeath = FName(TEXT("MulticastHandleDeath"));
	void AAuraCharacterBase::MulticastHandleDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAuraCharacterBase_MulticastHandleDeath),NULL);
	}
	static FName NAME_AAuraCharacterBase_StartDissolveTimeline = FName(TEXT("StartDissolveTimeline"));
	void AAuraCharacterBase::StartDissolveTimeline(UMaterialInstanceDynamic* DynamicMaterialInstance)
	{
		AuraCharacterBase_eventStartDissolveTimeline_Parms Parms;
		Parms.DynamicMaterialInstance=DynamicMaterialInstance;
		ProcessEvent(FindFunctionChecked(NAME_AAuraCharacterBase_StartDissolveTimeline),&Parms);
	}
	static FName NAME_AAuraCharacterBase_StartWeaponDissolveTimeline = FName(TEXT("StartWeaponDissolveTimeline"));
	void AAuraCharacterBase::StartWeaponDissolveTimeline(UMaterialInstanceDynamic* DynamicMaterialInstance)
	{
		AuraCharacterBase_eventStartWeaponDissolveTimeline_Parms Parms;
		Parms.DynamicMaterialInstance=DynamicMaterialInstance;
		ProcessEvent(FindFunctionChecked(NAME_AAuraCharacterBase_StartWeaponDissolveTimeline),&Parms);
	}
	void AAuraCharacterBase::StaticRegisterNativesAAuraCharacterBase()
	{
		UClass* Class = AAuraCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastHandleDeath", &AAuraCharacterBase::execMulticastHandleDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAuraCharacterBase_MulticastHandleDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraCharacterBase_MulticastHandleDeath_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//End Combat Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End Combat Interface" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraCharacterBase_MulticastHandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraCharacterBase, nullptr, "MulticastHandleDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_MulticastHandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraCharacterBase_MulticastHandleDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAuraCharacterBase_MulticastHandleDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraCharacterBase_MulticastHandleDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::NewProp_DynamicMaterialInstance = { "DynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraCharacterBase_eventStartDissolveTimeline_Parms, DynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::NewProp_DynamicMaterialInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraCharacterBase, nullptr, "StartDissolveTimeline", nullptr, nullptr, Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::PropPointers), sizeof(AuraCharacterBase_eventStartDissolveTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraCharacterBase_eventStartDissolveTimeline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::NewProp_DynamicMaterialInstance = { "DynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraCharacterBase_eventStartWeaponDissolveTimeline_Parms, DynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::NewProp_DynamicMaterialInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraCharacterBase, nullptr, "StartWeaponDissolveTimeline", nullptr, nullptr, Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::PropPointers), sizeof(AuraCharacterBase_eventStartWeaponDissolveTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraCharacterBase_eventStartWeaponDissolveTimeline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraCharacterBase);
	UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister()
	{
		return AAuraCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AAuraCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTipSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponTipSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPrimaryAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultPrimaryAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSecondaryAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultSecondaryAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVitalAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultVitalAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DissolveMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeaponDissolveMaterialInstance;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HitReactMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAuraCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraCharacterBase_MulticastHandleDeath, "MulticastHandleDeath" }, // 1036591624
		{ &Z_Construct_UFunction_AAuraCharacterBase_StartDissolveTimeline, "StartDissolveTimeline" }, // 3103425073
		{ &Z_Construct_UFunction_AAuraCharacterBase_StartWeaponDissolveTimeline, "StartWeaponDissolveTimeline" }, // 3171463252
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttackMontages_Inner = { "AttackMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaggedMontage, METADATA_PARAMS(0, nullptr) }; // 3362767820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttackMontages_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttackMontages = { "AttackMontages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, AttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttackMontages_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttackMontages_MetaData) }; // 3362767820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName = { "WeaponTipSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, WeaponTipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_LeftHandSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_LeftHandSocketName = { "LeftHandSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, LeftHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_LeftHandSocketName_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_LeftHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_RightHandSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_RightHandSocketName = { "RightHandSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, RightHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_RightHandSocketName_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_RightHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultPrimaryAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultPrimaryAttributes = { "DefaultPrimaryAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, DefaultPrimaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultPrimaryAttributes_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultPrimaryAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultSecondaryAttributes = { "DefaultSecondaryAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, DefaultSecondaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultVitalAttributes = { "DefaultVitalAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, DefaultVitalAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DissolveMaterialInstance_MetaData[] = {
		{ "Category", "AuraCharacterBase" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DissolveMaterialInstance = { "DissolveMaterialInstance", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, DissolveMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DissolveMaterialInstance_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DissolveMaterialInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponDissolveMaterialInstance_MetaData[] = {
		{ "Category", "AuraCharacterBase" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponDissolveMaterialInstance = { "WeaponDissolveMaterialInstance", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, WeaponDissolveMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponDissolveMaterialInstance_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponDissolveMaterialInstance_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_Inner = { "StartupAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities = { "StartupAbilities", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, StartupAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_HitReactMontage_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_HitReactMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttackMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttackMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_LeftHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_RightHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultPrimaryAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultSecondaryAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultVitalAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DissolveMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponDissolveMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_HitReactMontage,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraCharacterBase, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraCharacterBase, ICombatInterface), false },  // 3339163527
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams = {
		&AAuraCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraCharacterBase()
	{
		if (!Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton, Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraCharacterBase>()
	{
		return AAuraCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraCharacterBase);
	AAuraCharacterBase::~AAuraCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacterBase, AAuraCharacterBase::StaticClass, TEXT("AAuraCharacterBase"), &Z_Registration_Info_UClass_AAuraCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacterBase), 3800035789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_3743331523(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

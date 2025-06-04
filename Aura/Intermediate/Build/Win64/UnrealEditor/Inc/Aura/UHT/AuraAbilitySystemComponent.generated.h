// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpec;
struct FGameplayTag;
#ifdef AURA_AuraAbilitySystemComponent_generated_h
#error "AuraAbilitySystemComponent.generated.h already included, missing '#pragma once' in AuraAbilitySystemComponent.h"
#endif
#define AURA_AuraAbilitySystemComponent_generated_h

#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_SPARSE_DATA
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientUpdateAbilityStatus_Implementation(FGameplayTag const& AbilityTag, FGameplayTag const& StatusTag, int32 AbilityLevel); \
	virtual void ClientEffectApplied_Implementation(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle); \
	virtual void ServerEquipAbility_Implementation(FGameplayTag const& AbilityTag, FGameplayTag const& Slot); \
	virtual void ServerSpendSkillPoint_Implementation(FGameplayTag const& AbilityTag); \
	virtual void ServerUpgradeAttribute_Implementation(FGameplayTag const& AttributeTag); \
 \
	DECLARE_FUNCTION(execClientUpdateAbilityStatus); \
	DECLARE_FUNCTION(execClientEffectApplied); \
	DECLARE_FUNCTION(execServerEquipAbility); \
	DECLARE_FUNCTION(execServerSpendSkillPoint); \
	DECLARE_FUNCTION(execServerUpgradeAttribute); \
	DECLARE_FUNCTION(execUpgradeAttribute);


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_CALLBACK_WRAPPERS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UAuraAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UAuraAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UAuraAbilitySystemComponent)


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuraAbilitySystemComponent(UAuraAbilitySystemComponent&&); \
	NO_API UAuraAbilitySystemComponent(const UAuraAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraAbilitySystemComponent) \
	NO_API virtual ~UAuraAbilitySystemComponent();


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_18_PROLOG
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_SPARSE_DATA \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_CALLBACK_WRAPPERS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UAuraAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

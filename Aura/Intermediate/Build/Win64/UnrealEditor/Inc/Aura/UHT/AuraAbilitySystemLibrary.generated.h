// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AuraAbilitySystemLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAuraHUD;
class UAbilityInfo;
class UAbilitySystemComponent;
class UAttributeMenuWidgetController;
class UCharacterClassInfo;
class UObject;
class UOverlayWidgetController;
class USkillMenuWidgetController;
enum class ECharacterClass : uint8;
struct FGameplayEffectContextHandle;
struct FWidgetControllerParams;
#ifdef AURA_AuraAbilitySystemLibrary_generated_h
#error "AuraAbilitySystemLibrary.generated.h already included, missing '#pragma once' in AuraAbilitySystemLibrary.h"
#endif
#define AURA_AuraAbilitySystemLibrary_generated_h

#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_SPARSE_DATA
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsNotFriendly); \
	DECLARE_FUNCTION(execGetLivePlayersWithinRadius); \
	DECLARE_FUNCTION(execSetIsCriticalHit); \
	DECLARE_FUNCTION(execSetIsBlockedHit); \
	DECLARE_FUNCTION(execIsCriticalHit); \
	DECLARE_FUNCTION(execIsBlockedHit); \
	DECLARE_FUNCTION(execGetAbilityInfo); \
	DECLARE_FUNCTION(execGetCharacterClassInfo); \
	DECLARE_FUNCTION(execGiveStartupAbilities); \
	DECLARE_FUNCTION(execInitializeDefaultAttributes); \
	DECLARE_FUNCTION(execGetSkillMenuWidgetController); \
	DECLARE_FUNCTION(execGetAttributeMenuWidgetController); \
	DECLARE_FUNCTION(execGetOverlayWidgetController); \
	DECLARE_FUNCTION(execMakeWidgetControllerParams);


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAbilitySystemLibrary(); \
	friend struct Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics; \
public: \
	DECLARE_CLASS(UAuraAbilitySystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UAuraAbilitySystemLibrary)


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuraAbilitySystemLibrary(UAuraAbilitySystemLibrary&&); \
	NO_API UAuraAbilitySystemLibrary(const UAuraAbilitySystemLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAbilitySystemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAbilitySystemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraAbilitySystemLibrary) \
	NO_API virtual ~UAuraAbilitySystemLibrary();


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_20_PROLOG
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_SPARSE_DATA \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UAuraAbilitySystemLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

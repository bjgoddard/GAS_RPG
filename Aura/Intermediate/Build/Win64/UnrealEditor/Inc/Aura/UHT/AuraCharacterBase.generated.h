// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AuraCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
#ifdef AURA_AuraCharacterBase_generated_h
#error "AuraCharacterBase.generated.h already included, missing '#pragma once' in AuraCharacterBase.h"
#endif
#define AURA_AuraCharacterBase_generated_h

#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_SPARSE_DATA
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastHandleDeath_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastHandleDeath);


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_CALLBACK_WRAPPERS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraCharacterBase(); \
	friend struct Z_Construct_UClass_AAuraCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AAuraCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraCharacterBase*>(this); }


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraCharacterBase(AAuraCharacterBase&&); \
	NO_API AAuraCharacterBase(const AAuraCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraCharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AAuraCharacterBase) \
	NO_API virtual ~AAuraCharacterBase();


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_20_PROLOG
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_SPARSE_DATA \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_CALLBACK_WRAPPERS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

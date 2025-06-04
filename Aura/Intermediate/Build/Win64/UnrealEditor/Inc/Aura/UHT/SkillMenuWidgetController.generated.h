// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/SkillMenuWidgetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef AURA_SkillMenuWidgetController_generated_h
#error "SkillMenuWidgetController.generated.h already included, missing '#pragma once' in SkillMenuWidgetController.h"
#endif
#define AURA_SkillMenuWidgetController_generated_h

#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_12_DELEGATE \
AURA_API void FSkillGlobeSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& SkillGlobeSelectedSignature, bool bSpendPointsButtonEnabled, bool bEquipButtonEnabled, const FString& DescriptionString, const FString& NextLevelDescriptionString);


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_13_DELEGATE \
AURA_API void FWaitForEquipSelectionSignature_DelegateWrapper(const FMulticastScriptDelegate& WaitForEquipSelectionSignature, FGameplayTag const& AbilityType);


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_14_DELEGATE \
AURA_API void FSkillGlobeReassignedSignature_DelegateWrapper(const FMulticastScriptDelegate& SkillGlobeReassignedSignature, FGameplayTag const& AbilityTag);


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_SPARSE_DATA
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSkillRowGlobePressed); \
	DECLARE_FUNCTION(execEquipButtonPressed); \
	DECLARE_FUNCTION(execGlobeDeselect); \
	DECLARE_FUNCTION(execSpendPointButtonPressed); \
	DECLARE_FUNCTION(execSkillGlobeSelected);


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_ACCESSORS
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillMenuWidgetController(); \
	friend struct Z_Construct_UClass_USkillMenuWidgetController_Statics; \
public: \
	DECLARE_CLASS(USkillMenuWidgetController, UAuraWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(USkillMenuWidgetController)


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillMenuWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillMenuWidgetController(USkillMenuWidgetController&&); \
	NO_API USkillMenuWidgetController(const USkillMenuWidgetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillMenuWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillMenuWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillMenuWidgetController) \
	NO_API virtual ~USkillMenuWidgetController();


#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_25_PROLOG
#define FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_SPARSE_DATA \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_ACCESSORS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class USkillMenuWidgetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

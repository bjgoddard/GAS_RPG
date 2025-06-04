// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/SkillMenuWidgetController.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillMenuWidgetController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
	AURA_API UClass* Z_Construct_UClass_USkillMenuWidgetController();
	AURA_API UClass* Z_Construct_UClass_USkillMenuWidgetController_NoRegister();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnPlayerStatChangedSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventSkillGlobeSelectedSignature_Parms
		{
			bool bSpendPointsButtonEnabled;
			bool bEquipButtonEnabled;
			FString DescriptionString;
			FString NextLevelDescriptionString;
		};
		static void NewProp_bSpendPointsButtonEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpendPointsButtonEnabled;
		static void NewProp_bEquipButtonEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipButtonEnabled;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DescriptionString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NextLevelDescriptionString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_bSpendPointsButtonEnabled_SetBit(void* Obj)
	{
		((_Script_Aura_eventSkillGlobeSelectedSignature_Parms*)Obj)->bSpendPointsButtonEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_bSpendPointsButtonEnabled = { "bSpendPointsButtonEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Aura_eventSkillGlobeSelectedSignature_Parms), &Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_bSpendPointsButtonEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_bEquipButtonEnabled_SetBit(void* Obj)
	{
		((_Script_Aura_eventSkillGlobeSelectedSignature_Parms*)Obj)->bEquipButtonEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_bEquipButtonEnabled = { "bEquipButtonEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Aura_eventSkillGlobeSelectedSignature_Parms), &Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_bEquipButtonEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_DescriptionString = { "DescriptionString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventSkillGlobeSelectedSignature_Parms, DescriptionString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_NextLevelDescriptionString = { "NextLevelDescriptionString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventSkillGlobeSelectedSignature_Parms, NextLevelDescriptionString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_bSpendPointsButtonEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_bEquipButtonEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_DescriptionString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::NewProp_NextLevelDescriptionString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "SkillGlobeSelectedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::_Script_Aura_eventSkillGlobeSelectedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::_Script_Aura_eventSkillGlobeSelectedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSkillGlobeSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& SkillGlobeSelectedSignature, bool bSpendPointsButtonEnabled, bool bEquipButtonEnabled, const FString& DescriptionString, const FString& NextLevelDescriptionString)
{
	struct _Script_Aura_eventSkillGlobeSelectedSignature_Parms
	{
		bool bSpendPointsButtonEnabled;
		bool bEquipButtonEnabled;
		FString DescriptionString;
		FString NextLevelDescriptionString;
	};
	_Script_Aura_eventSkillGlobeSelectedSignature_Parms Parms;
	Parms.bSpendPointsButtonEnabled=bSpendPointsButtonEnabled ? true : false;
	Parms.bEquipButtonEnabled=bEquipButtonEnabled ? true : false;
	Parms.DescriptionString=DescriptionString;
	Parms.NextLevelDescriptionString=NextLevelDescriptionString;
	SkillGlobeSelectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventWaitForEquipSelectionSignature_Parms
		{
			FGameplayTag AbilityType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::NewProp_AbilityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventWaitForEquipSelectionSignature_Parms, AbilityType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::NewProp_AbilityType_MetaData), Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::NewProp_AbilityType_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::NewProp_AbilityType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "WaitForEquipSelectionSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::_Script_Aura_eventWaitForEquipSelectionSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::_Script_Aura_eventWaitForEquipSelectionSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitForEquipSelectionSignature_DelegateWrapper(const FMulticastScriptDelegate& WaitForEquipSelectionSignature, FGameplayTag const& AbilityType)
{
	struct _Script_Aura_eventWaitForEquipSelectionSignature_Parms
	{
		FGameplayTag AbilityType;
	};
	_Script_Aura_eventWaitForEquipSelectionSignature_Parms Parms;
	Parms.AbilityType=AbilityType;
	WaitForEquipSelectionSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventSkillGlobeReassignedSignature_Parms
		{
			FGameplayTag AbilityTag;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventSkillGlobeReassignedSignature_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "SkillGlobeReassignedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::_Script_Aura_eventSkillGlobeReassignedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::_Script_Aura_eventSkillGlobeReassignedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSkillGlobeReassignedSignature_DelegateWrapper(const FMulticastScriptDelegate& SkillGlobeReassignedSignature, FGameplayTag const& AbilityTag)
{
	struct _Script_Aura_eventSkillGlobeReassignedSignature_Parms
	{
		FGameplayTag AbilityTag;
	};
	_Script_Aura_eventSkillGlobeReassignedSignature_Parms Parms;
	Parms.AbilityTag=AbilityTag;
	SkillGlobeReassignedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USkillMenuWidgetController::execSkillRowGlobePressed)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SlotTag);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SkillRowGlobePressed(Z_Param_Out_SlotTag,Z_Param_Out_AbilityType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillMenuWidgetController::execEquipButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillMenuWidgetController::execGlobeDeselect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GlobeDeselect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillMenuWidgetController::execSpendPointButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpendPointButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillMenuWidgetController::execSkillGlobeSelected)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SkillGlobeSelected(Z_Param_Out_AbilityTag);
		P_NATIVE_END;
	}
	void USkillMenuWidgetController::StaticRegisterNativesUSkillMenuWidgetController()
	{
		UClass* Class = USkillMenuWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipButtonPressed", &USkillMenuWidgetController::execEquipButtonPressed },
			{ "GlobeDeselect", &USkillMenuWidgetController::execGlobeDeselect },
			{ "SkillGlobeSelected", &USkillMenuWidgetController::execSkillGlobeSelected },
			{ "SkillRowGlobePressed", &USkillMenuWidgetController::execSkillRowGlobePressed },
			{ "SpendPointButtonPressed", &USkillMenuWidgetController::execSpendPointButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkillMenuWidgetController_EquipButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillMenuWidgetController_EquipButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillMenuWidgetController_EquipButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillMenuWidgetController, nullptr, "EquipButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_EquipButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillMenuWidgetController_EquipButtonPressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USkillMenuWidgetController_EquipButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillMenuWidgetController_EquipButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillMenuWidgetController_GlobeDeselect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillMenuWidgetController_GlobeDeselect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillMenuWidgetController_GlobeDeselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillMenuWidgetController, nullptr, "GlobeDeselect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_GlobeDeselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillMenuWidgetController_GlobeDeselect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USkillMenuWidgetController_GlobeDeselect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillMenuWidgetController_GlobeDeselect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics
	{
		struct SkillMenuWidgetController_eventSkillGlobeSelected_Parms
		{
			FGameplayTag AbilityTag;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillMenuWidgetController_eventSkillGlobeSelected_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillMenuWidgetController, nullptr, "SkillGlobeSelected", nullptr, nullptr, Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::SkillMenuWidgetController_eventSkillGlobeSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::SkillMenuWidgetController_eventSkillGlobeSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics
	{
		struct SkillMenuWidgetController_eventSkillRowGlobePressed_Parms
		{
			FGameplayTag SlotTag;
			FGameplayTag AbilityType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_SlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillMenuWidgetController_eventSkillRowGlobePressed_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_SlotTag_MetaData), Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_SlotTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_AbilityType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillMenuWidgetController_eventSkillRowGlobePressed_Parms, AbilityType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_AbilityType_MetaData), Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_AbilityType_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_SlotTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::NewProp_AbilityType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillMenuWidgetController, nullptr, "SkillRowGlobePressed", nullptr, nullptr, Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::SkillMenuWidgetController_eventSkillRowGlobePressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::SkillMenuWidgetController_eventSkillRowGlobePressed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillMenuWidgetController_SpendPointButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillMenuWidgetController_SpendPointButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillMenuWidgetController_SpendPointButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillMenuWidgetController, nullptr, "SpendPointButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillMenuWidgetController_SpendPointButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillMenuWidgetController_SpendPointButtonPressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USkillMenuWidgetController_SpendPointButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillMenuWidgetController_SpendPointButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillMenuWidgetController);
	UClass* Z_Construct_UClass_USkillMenuWidgetController_NoRegister()
	{
		return USkillMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_USkillMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillPointsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SkillPointsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillGlobeSelectedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SkillGlobeSelectedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitForEquipDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_WaitForEquipDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopWaitingForEquipDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StopWaitingForEquipDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillGlobeReassignedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SkillGlobeReassignedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USkillMenuWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillMenuWidgetController_EquipButtonPressed, "EquipButtonPressed" }, // 2997132683
		{ &Z_Construct_UFunction_USkillMenuWidgetController_GlobeDeselect, "GlobeDeselect" }, // 1183048832
		{ &Z_Construct_UFunction_USkillMenuWidgetController_SkillGlobeSelected, "SkillGlobeSelected" }, // 3698876562
		{ &Z_Construct_UFunction_USkillMenuWidgetController_SkillRowGlobePressed, "SkillRowGlobePressed" }, // 156374685
		{ &Z_Construct_UFunction_USkillMenuWidgetController_SpendPointButtonPressed, "SpendPointButtonPressed" }, // 273772611
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/SkillMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillPointsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillPointsChanged = { "SkillPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillMenuWidgetController, SkillPointsChanged), Z_Construct_UDelegateFunction_Aura_OnPlayerStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillPointsChanged_MetaData), Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillPointsChanged_MetaData) }; // 524648148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeSelectedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeSelectedDelegate = { "SkillGlobeSelectedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillMenuWidgetController, SkillGlobeSelectedDelegate), Z_Construct_UDelegateFunction_Aura_SkillGlobeSelectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeSelectedDelegate_MetaData), Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeSelectedDelegate_MetaData) }; // 3686517726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_WaitForEquipDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_WaitForEquipDelegate = { "WaitForEquipDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillMenuWidgetController, WaitForEquipDelegate), Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_WaitForEquipDelegate_MetaData), Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_WaitForEquipDelegate_MetaData) }; // 3655743691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_StopWaitingForEquipDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_StopWaitingForEquipDelegate = { "StopWaitingForEquipDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillMenuWidgetController, StopWaitingForEquipDelegate), Z_Construct_UDelegateFunction_Aura_WaitForEquipSelectionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_StopWaitingForEquipDelegate_MetaData), Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_StopWaitingForEquipDelegate_MetaData) }; // 3655743691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeReassignedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/SkillMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeReassignedDelegate = { "SkillGlobeReassignedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillMenuWidgetController, SkillGlobeReassignedDelegate), Z_Construct_UDelegateFunction_Aura_SkillGlobeReassignedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeReassignedDelegate_MetaData), Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeReassignedDelegate_MetaData) }; // 4204828356
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillPointsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeSelectedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_WaitForEquipDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_StopWaitingForEquipDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillMenuWidgetController_Statics::NewProp_SkillGlobeReassignedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillMenuWidgetController_Statics::ClassParams = {
		&USkillMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkillMenuWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillMenuWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenuWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USkillMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_USkillMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillMenuWidgetController.OuterSingleton, Z_Construct_UClass_USkillMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillMenuWidgetController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<USkillMenuWidgetController>()
	{
		return USkillMenuWidgetController::StaticClass();
	}
	USkillMenuWidgetController::USkillMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillMenuWidgetController);
	USkillMenuWidgetController::~USkillMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillMenuWidgetController, USkillMenuWidgetController::StaticClass, TEXT("USkillMenuWidgetController"), &Z_Registration_Info_UClass_USkillMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillMenuWidgetController), 4078060513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_1624492448(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_SkillMenuWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

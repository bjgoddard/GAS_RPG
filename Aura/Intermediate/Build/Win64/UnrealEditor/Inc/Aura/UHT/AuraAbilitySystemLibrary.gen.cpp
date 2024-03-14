// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AuraAbilitySystemLibrary.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemLibrary() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execSetIsCriticalHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsCriticalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAuraAbilitySystemLibrary::SetIsCriticalHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsCriticalHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execSetIsBlockedHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsBlockedHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAuraAbilitySystemLibrary::SetIsBlockedHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsBlockedHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execIsCriticalHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAuraAbilitySystemLibrary::IsCriticalHit(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execIsBlockedHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAuraAbilitySystemLibrary::IsBlockedHit(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execGetCharacterClassInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharacterClassInfo**)Z_Param__Result=UAuraAbilitySystemLibrary::GetCharacterClassInfo(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execGiveStartupAbilities)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAuraAbilitySystemLibrary::GiveStartupAbilities(Z_Param_WorldContextObject,Z_Param_ASC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execInitializeDefaultAttributes)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ECharacterClass,Z_Param_CharacterClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAuraAbilitySystemLibrary::InitializeDefaultAttributes(Z_Param_WorldContextObject,ECharacterClass(Z_Param_CharacterClass),Z_Param_Level,Z_Param_ASC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execGetAttributeMenuWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributeMenuWidgetController**)Z_Param__Result=UAuraAbilitySystemLibrary::GetAttributeMenuWidgetController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execGetOverlayWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOverlayWidgetController**)Z_Param__Result=UAuraAbilitySystemLibrary::GetOverlayWidgetController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAuraAbilitySystemLibrary::StaticRegisterNativesUAuraAbilitySystemLibrary()
	{
		UClass* Class = UAuraAbilitySystemLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeMenuWidgetController", &UAuraAbilitySystemLibrary::execGetAttributeMenuWidgetController },
			{ "GetCharacterClassInfo", &UAuraAbilitySystemLibrary::execGetCharacterClassInfo },
			{ "GetOverlayWidgetController", &UAuraAbilitySystemLibrary::execGetOverlayWidgetController },
			{ "GiveStartupAbilities", &UAuraAbilitySystemLibrary::execGiveStartupAbilities },
			{ "InitializeDefaultAttributes", &UAuraAbilitySystemLibrary::execInitializeDefaultAttributes },
			{ "IsBlockedHit", &UAuraAbilitySystemLibrary::execIsBlockedHit },
			{ "IsCriticalHit", &UAuraAbilitySystemLibrary::execIsCriticalHit },
			{ "SetIsBlockedHit", &UAuraAbilitySystemLibrary::execSetIsBlockedHit },
			{ "SetIsCriticalHit", &UAuraAbilitySystemLibrary::execSetIsCriticalHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics
	{
		struct AuraAbilitySystemLibrary_eventGetAttributeMenuWidgetController_Parms
		{
			const UObject* WorldContextObject;
			UAttributeMenuWidgetController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGetAttributeMenuWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGetAttributeMenuWidgetController_Parms, ReturnValue), Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "GetAttributeMenuWidgetController", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::AuraAbilitySystemLibrary_eventGetAttributeMenuWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::AuraAbilitySystemLibrary_eventGetAttributeMenuWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics
	{
		struct AuraAbilitySystemLibrary_eventGetCharacterClassInfo_Parms
		{
			const UObject* WorldContextObject;
			UCharacterClassInfo* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGetCharacterClassInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGetCharacterClassInfo_Parms, ReturnValue), Z_Construct_UClass_UCharacterClassInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "GetCharacterClassInfo", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::AuraAbilitySystemLibrary_eventGetCharacterClassInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::AuraAbilitySystemLibrary_eventGetCharacterClassInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics
	{
		struct AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms
		{
			const UObject* WorldContextObject;
			UOverlayWidgetController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "GetOverlayWidgetController", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics
	{
		struct AuraAbilitySystemLibrary_eventGiveStartupAbilities_Parms
		{
			const UObject* WorldContextObject;
			UAbilitySystemComponent* ASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGiveStartupAbilities_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGiveStartupAbilities_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "GiveStartupAbilities", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::AuraAbilitySystemLibrary_eventGiveStartupAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::AuraAbilitySystemLibrary_eventGiveStartupAbilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics
	{
		struct AuraAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms
		{
			const UObject* WorldContextObject;
			ECharacterClass CharacterClass;
			float Level;
			UAbilitySystemComponent* ASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClass_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms, CharacterClass), Z_Construct_UEnum_Aura_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 2470023363
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms, Level), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "InitializeDefaultAttributes", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::AuraAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::AuraAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics
	{
		struct AuraAbilitySystemLibrary_eventIsBlockedHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventIsBlockedHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AuraAbilitySystemLibrary_eventIsBlockedHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraAbilitySystemLibrary_eventIsBlockedHit_Parms), &Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "IsBlockedHit", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::AuraAbilitySystemLibrary_eventIsBlockedHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::AuraAbilitySystemLibrary_eventIsBlockedHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics
	{
		struct AuraAbilitySystemLibrary_eventIsCriticalHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AuraAbilitySystemLibrary_eventIsCriticalHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraAbilitySystemLibrary_eventIsCriticalHit_Parms), &Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "IsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::AuraAbilitySystemLibrary_eventIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::AuraAbilitySystemLibrary_eventIsCriticalHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics
	{
		struct AuraAbilitySystemLibrary_eventSetIsBlockedHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsBlockedHit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsBlockedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsBlockedHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventSetIsBlockedHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	void Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit_SetBit(void* Obj)
	{
		((AuraAbilitySystemLibrary_eventSetIsBlockedHit_Parms*)Obj)->bInIsBlockedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit = { "bInIsBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraAbilitySystemLibrary_eventSetIsBlockedHit_Parms), &Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "SetIsBlockedHit", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::AuraAbilitySystemLibrary_eventSetIsBlockedHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::AuraAbilitySystemLibrary_eventSetIsBlockedHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics
	{
		struct AuraAbilitySystemLibrary_eventSetIsCriticalHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsCriticalHit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventSetIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	void Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit(void* Obj)
	{
		((AuraAbilitySystemLibrary_eventSetIsCriticalHit_Parms*)Obj)->bInIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit = { "bInIsCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraAbilitySystemLibrary_eventSetIsCriticalHit_Parms), &Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "SetIsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::AuraAbilitySystemLibrary_eventSetIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::AuraAbilitySystemLibrary_eventSetIsCriticalHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAbilitySystemLibrary);
	UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary_NoRegister()
	{
		return UAuraAbilitySystemLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetAttributeMenuWidgetController, "GetAttributeMenuWidgetController" }, // 3446637329
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetCharacterClassInfo, "GetCharacterClassInfo" }, // 4034405440
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 3080991942
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_GiveStartupAbilities, "GiveStartupAbilities" }, // 2591379809
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_InitializeDefaultAttributes, "InitializeDefaultAttributes" }, // 3572054009
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsBlockedHit, "IsBlockedHit" }, // 2196732682
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_IsCriticalHit, "IsCriticalHit" }, // 3761536091
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsBlockedHit, "SetIsBlockedHit" }, // 3206835183
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_SetIsCriticalHit, "SetIsCriticalHit" }, // 3385614641
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AuraAbilitySystemLibrary.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::ClassParams = {
		&UAuraAbilitySystemLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary()
	{
		if (!Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAbilitySystemLibrary>()
	{
		return UAuraAbilitySystemLibrary::StaticClass();
	}
	UAuraAbilitySystemLibrary::UAuraAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemLibrary);
	UAuraAbilitySystemLibrary::~UAuraAbilitySystemLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemLibrary, UAuraAbilitySystemLibrary::StaticClass, TEXT("UAuraAbilitySystemLibrary"), &Z_Registration_Info_UClass_UAuraAbilitySystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemLibrary), 1451885916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_2736858823(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

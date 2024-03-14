// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Player/AuraPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraPlayerController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraPlayerController();
	AURA_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraInputConfig_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UDamageTextComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(AAuraPlayerController::execShowDamageNumber)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_OBJECT(ACharacter,Z_Param_TargetCharacter);
		P_GET_UBOOL(Z_Param_bBlockedHit);
		P_GET_UBOOL(Z_Param_bCriticalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDamageNumber_Implementation(Z_Param_DamageAmount,Z_Param_TargetCharacter,Z_Param_bBlockedHit,Z_Param_bCriticalHit);
		P_NATIVE_END;
	}
	struct AuraPlayerController_eventShowDamageNumber_Parms
	{
		float DamageAmount;
		ACharacter* TargetCharacter;
		bool bBlockedHit;
		bool bCriticalHit;
	};
	static FName NAME_AAuraPlayerController_ShowDamageNumber = FName(TEXT("ShowDamageNumber"));
	void AAuraPlayerController::ShowDamageNumber(float DamageAmount, ACharacter* TargetCharacter, bool bBlockedHit, bool bCriticalHit)
	{
		AuraPlayerController_eventShowDamageNumber_Parms Parms;
		Parms.DamageAmount=DamageAmount;
		Parms.TargetCharacter=TargetCharacter;
		Parms.bBlockedHit=bBlockedHit ? true : false;
		Parms.bCriticalHit=bCriticalHit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAuraPlayerController_ShowDamageNumber),&Parms);
	}
	void AAuraPlayerController::StaticRegisterNativesAAuraPlayerController()
	{
		UClass* Class = AAuraPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowDamageNumber", &AAuraPlayerController::execShowDamageNumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static void NewProp_bBlockedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockedHit;
		static void NewProp_bCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerController_eventShowDamageNumber_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerController_eventShowDamageNumber_Parms, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bBlockedHit_SetBit(void* Obj)
	{
		((AuraPlayerController_eventShowDamageNumber_Parms*)Obj)->bBlockedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bBlockedHit = { "bBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraPlayerController_eventShowDamageNumber_Parms), &Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bBlockedHit_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bCriticalHit_SetBit(void* Obj)
	{
		((AuraPlayerController_eventShowDamageNumber_Parms*)Obj)->bCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bCriticalHit = { "bCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraPlayerController_eventShowDamageNumber_Parms), &Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_TargetCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bBlockedHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bCriticalHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerController, nullptr, "ShowDamageNumber", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::PropPointers), sizeof(AuraPlayerController_eventShowDamageNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraPlayerController_eventShowDamageNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraPlayerController);
	UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister()
	{
		return AAuraPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAuraPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuraContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuraContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShiftAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShiftAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuraAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuraAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoRunAcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRunAcceptanceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTextComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTextComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAuraPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber, "ShowDamageNumber" }, // 1104750594
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/AuraPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext = { "AuraContext", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction = { "ShiftAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, ShiftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, InputConfig), Z_Construct_UClass_UAuraInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent = { "AuraAbilitySystemComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraAbilitySystemComponent), Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius = { "AutoRunAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AutoRunAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextComponentClass_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextComponentClass = { "DamageTextComponentClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, DamageTextComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageTextComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextComponentClass_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextComponentClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextComponentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams = {
		&AAuraPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraPlayerController()
	{
		if (!Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton, Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraPlayerController>()
	{
		return AAuraPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraPlayerController);
	AAuraPlayerController::~AAuraPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerController, AAuraPlayerController::StaticClass, TEXT("AAuraPlayerController"), &Z_Registration_Info_UClass_AAuraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerController), 4143899123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Player_AuraPlayerController_h_2228570870(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

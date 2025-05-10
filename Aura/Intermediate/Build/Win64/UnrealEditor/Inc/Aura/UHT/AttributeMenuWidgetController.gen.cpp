// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/AttributeMenuWidgetController.h"
#include "Aura/Public/AbilitySystem/Data/AttributeInfo.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeMenuWidgetController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAttributeInfo_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController();
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnPlayerStatChangedSignature__DelegateSignature();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeInfo();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventAttributeInfoSignature_Parms
		{
			FAuraAttributeInfo Info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventAttributeInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FAuraAttributeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData), Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData) }; // 2369328327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "AttributeInfoSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::_Script_Aura_eventAttributeInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::_Script_Aura_eventAttributeInfoSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAttributeInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& AttributeInfoSignature, FAuraAttributeInfo const& Info)
{
	struct _Script_Aura_eventAttributeInfoSignature_Parms
	{
		FAuraAttributeInfo Info;
	};
	_Script_Aura_eventAttributeInfoSignature_Parms Parms;
	Parms.Info=Info;
	AttributeInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAttributeMenuWidgetController::execUpgradeAttribute)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AttributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeAttribute(Z_Param_Out_AttributeTag);
		P_NATIVE_END;
	}
	void UAttributeMenuWidgetController::StaticRegisterNativesUAttributeMenuWidgetController()
	{
		UClass* Class = UAttributeMenuWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpgradeAttribute", &UAttributeMenuWidgetController::execUpgradeAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics
	{
		struct AttributeMenuWidgetController_eventUpgradeAttribute_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::NewProp_AttributeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeMenuWidgetController_eventUpgradeAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::NewProp_AttributeTag_MetaData), Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::NewProp_AttributeTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::NewProp_AttributeTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeMenuWidgetController, nullptr, "UpgradeAttribute", nullptr, nullptr, Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::AttributeMenuWidgetController_eventUpgradeAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::AttributeMenuWidgetController_eventUpgradeAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeMenuWidgetController);
	UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister()
	{
		return UAttributeMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttributeInfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributePointsChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttributePointsChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeMenuWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeMenuWidgetController_UpgradeAttribute, "UpgradeAttribute" }, // 2633464415
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate = { "AttributeInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributeInfoDelegate), Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate_MetaData), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate_MetaData) }; // 1886590260
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributePointsChangedDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributePointsChangedDelegate = { "AttributePointsChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributePointsChangedDelegate), Z_Construct_UDelegateFunction_Aura_OnPlayerStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributePointsChangedDelegate_MetaData), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributePointsChangedDelegate_MetaData) }; // 524648148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo_MetaData[] = {
		{ "Category", "AttributeMenuWidgetController" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributeInfo), Z_Construct_UClass_UAttributeInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo_MetaData), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributePointsChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams = {
		&UAttributeMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttributeMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton, Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAttributeMenuWidgetController>()
	{
		return UAttributeMenuWidgetController::StaticClass();
	}
	UAttributeMenuWidgetController::UAttributeMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeMenuWidgetController);
	UAttributeMenuWidgetController::~UAttributeMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeMenuWidgetController, UAttributeMenuWidgetController::StaticClass, TEXT("UAttributeMenuWidgetController"), &Z_Registration_Info_UClass_UAttributeMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeMenuWidgetController), 3885513007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_2315334772(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

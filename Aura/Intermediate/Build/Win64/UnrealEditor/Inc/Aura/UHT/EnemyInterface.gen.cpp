// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interaction/EnemyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyInterface() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UEnemyInterface();
	AURA_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(IEnemyInterface::execGetCombatTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCombatTarget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnemyInterface::execSetCombatTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_InCombatTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCombatTarget_Implementation(Z_Param_InCombatTarget);
		P_NATIVE_END;
	}
	struct EnemyInterface_eventGetCombatTarget_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		EnemyInterface_eventGetCombatTarget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct EnemyInterface_eventSetCombatTarget_Parms
	{
		AActor* InCombatTarget;
	};
	AActor* IEnemyInterface::GetCombatTarget() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatTarget instead.");
		EnemyInterface_eventGetCombatTarget_Parms Parms;
		return Parms.ReturnValue;
	}
	void IEnemyInterface::SetCombatTarget(AActor* InCombatTarget)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCombatTarget instead.");
	}
	void UEnemyInterface::StaticRegisterNativesUEnemyInterface()
	{
		UClass* Class = UEnemyInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombatTarget", &IEnemyInterface::execGetCombatTarget },
			{ "SetCombatTarget", &IEnemyInterface::execSetCombatTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyInterface_eventGetCombatTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/EnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyInterface, nullptr, "GetCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::PropPointers), sizeof(EnemyInterface_eventGetCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyInterface_eventGetCombatTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyInterface_GetCombatTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCombatTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::NewProp_InCombatTarget = { "InCombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyInterface_eventSetCombatTarget_Parms, InCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::NewProp_InCombatTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/EnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyInterface, nullptr, "SetCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::PropPointers), sizeof(EnemyInterface_eventSetCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyInterface_eventSetCombatTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyInterface_SetCombatTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyInterface);
	UClass* Z_Construct_UClass_UEnemyInterface_NoRegister()
	{
		return UEnemyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyInterface_GetCombatTarget, "GetCombatTarget" }, // 3725934166
		{ &Z_Construct_UFunction_UEnemyInterface_SetCombatTarget, "SetCombatTarget" }, // 588238142
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/EnemyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyInterface_Statics::ClassParams = {
		&UEnemyInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyInterface()
	{
		if (!Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton, Z_Construct_UClass_UEnemyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UEnemyInterface>()
	{
		return UEnemyInterface::StaticClass();
	}
	UEnemyInterface::UEnemyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyInterface);
	UEnemyInterface::~UEnemyInterface() {}
	static FName NAME_UEnemyInterface_GetCombatTarget = FName(TEXT("GetCombatTarget"));
	AActor* IEnemyInterface::Execute_GetCombatTarget(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemyInterface::StaticClass()));
		EnemyInterface_eventGetCombatTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEnemyInterface_GetCombatTarget);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IEnemyInterface*)(O->GetNativeInterfaceAddress(UEnemyInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCombatTarget_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEnemyInterface_SetCombatTarget = FName(TEXT("SetCombatTarget"));
	void IEnemyInterface::Execute_SetCombatTarget(UObject* O, AActor* InCombatTarget)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemyInterface::StaticClass()));
		EnemyInterface_eventSetCombatTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEnemyInterface_SetCombatTarget);
		if (Func)
		{
			Parms.InCombatTarget=InCombatTarget;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEnemyInterface*)(O->GetNativeInterfaceAddress(UEnemyInterface::StaticClass())))
		{
			I->SetCombatTarget_Implementation(InCombatTarget);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyInterface, UEnemyInterface::StaticClass, TEXT("UEnemyInterface"), &Z_Registration_Info_UClass_UEnemyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyInterface), 2879774131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_2452027469(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_EnemyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

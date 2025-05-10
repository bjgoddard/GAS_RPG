// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Character/AuraCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraCharacter() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraCharacter();
	AURA_API UClass* Z_Construct_UClass_AAuraCharacter_NoRegister();
	AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
	AURA_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(AAuraCharacter::execMulticast_LevelUpParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_LevelUpParticles_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AAuraCharacter_Multicast_LevelUpParticles = FName(TEXT("Multicast_LevelUpParticles"));
	void AAuraCharacter::Multicast_LevelUpParticles() const
	{
		const_cast<AAuraCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAuraCharacter_Multicast_LevelUpParticles),NULL);
	}
	void AAuraCharacter::StaticRegisterNativesAAuraCharacter()
	{
		UClass* Class = AAuraCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_LevelUpParticles", &AAuraCharacter::execMulticast_LevelUpParticles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAuraCharacter_Multicast_LevelUpParticles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraCharacter_Multicast_LevelUpParticles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraCharacter_Multicast_LevelUpParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraCharacter, nullptr, "Multicast_LevelUpParticles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacter_Multicast_LevelUpParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraCharacter_Multicast_LevelUpParticles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAuraCharacter_Multicast_LevelUpParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraCharacter_Multicast_LevelUpParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraCharacter);
	UClass* Z_Construct_UClass_AAuraCharacter_NoRegister()
	{
		return AAuraCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAuraCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpNiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelUpNiagaraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAuraCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAuraCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraCharacter_Multicast_LevelUpParticles, "Multicast_LevelUpParticles" }, // 3330996274
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacter_Statics::NewProp_LevelUpNiagaraComponent_MetaData[] = {
		{ "Category", "AuraCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacter_Statics::NewProp_LevelUpNiagaraComponent = { "LevelUpNiagaraComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacter, LevelUpNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::NewProp_LevelUpNiagaraComponent_MetaData), Z_Construct_UClass_AAuraCharacter_Statics::NewProp_LevelUpNiagaraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "Category", "AuraCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_AAuraCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "AuraCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AAuraCharacter_Statics::NewProp_CameraBoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacter_Statics::NewProp_LevelUpNiagaraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacter_Statics::NewProp_CameraBoom,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraCharacter, IPlayerInterface), false },  // 4019876753
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacter_Statics::ClassParams = {
		&AAuraCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAuraCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraCharacter()
	{
		if (!Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton, Z_Construct_UClass_AAuraCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraCharacter>()
	{
		return AAuraCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraCharacter);
	AAuraCharacter::~AAuraCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacter, AAuraCharacter::StaticClass, TEXT("AAuraCharacter"), &Z_Registration_Info_UClass_AAuraCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacter), 4116276676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacter_h_845893017(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Character_AuraCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

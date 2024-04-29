// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AI/AuraAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AURA_API UClass* Z_Construct_UClass_AAuraAIController();
	AURA_API UClass* Z_Construct_UClass_AAuraAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraAIController::StaticRegisterNativesAAuraAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraAIController);
	UClass* Z_Construct_UClass_AAuraAIController_NoRegister()
	{
		return AAuraAIController::StaticClass();
	}
	struct Z_Construct_UClass_AAuraAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTreeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/AuraAIController.h" },
		{ "ModuleRelativePath", "Public/AI/AuraAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraAIController_Statics::NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/AuraAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraAIController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraAIController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraAIController_Statics::NewProp_BehaviorTreeComponent_MetaData), Z_Construct_UClass_AAuraAIController_Statics::NewProp_BehaviorTreeComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraAIController_Statics::NewProp_BehaviorTreeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraAIController_Statics::ClassParams = {
		&AAuraAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAuraAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraAIController()
	{
		if (!Z_Registration_Info_UClass_AAuraAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraAIController.OuterSingleton, Z_Construct_UClass_AAuraAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraAIController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraAIController>()
	{
		return AAuraAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraAIController);
	AAuraAIController::~AAuraAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_AuraAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_AuraAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraAIController, AAuraAIController::StaticClass, TEXT("AAuraAIController"), &Z_Registration_Info_UClass_AAuraAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraAIController), 3748898859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_AuraAIController_h_3528087407(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_AuraAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_AuraAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

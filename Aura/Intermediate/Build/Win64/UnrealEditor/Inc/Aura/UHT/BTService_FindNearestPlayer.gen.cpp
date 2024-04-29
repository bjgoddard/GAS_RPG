// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AI/BTService_FindNearestPlayer.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_FindNearestPlayer() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AURA_API UClass* Z_Construct_UClass_UBTService_FindNearestPlayer();
	AURA_API UClass* Z_Construct_UClass_UBTService_FindNearestPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UBTService_FindNearestPlayer::StaticRegisterNativesUBTService_FindNearestPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_FindNearestPlayer);
	UClass* Z_Construct_UClass_UBTService_FindNearestPlayer_NoRegister()
	{
		return UBTService_FindNearestPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_FindNearestPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetToFollowSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetToFollowSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToTargetSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceToTargetSelector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/BTService_FindNearestPlayer.h" },
		{ "ModuleRelativePath", "Public/AI/BTService_FindNearestPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_TargetToFollowSelector_MetaData[] = {
		{ "Category", "BTService_FindNearestPlayer" },
		{ "ModuleRelativePath", "Public/AI/BTService_FindNearestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_TargetToFollowSelector = { "TargetToFollowSelector", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_FindNearestPlayer, TargetToFollowSelector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_TargetToFollowSelector_MetaData), Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_TargetToFollowSelector_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_DistanceToTargetSelector_MetaData[] = {
		{ "Category", "BTService_FindNearestPlayer" },
		{ "ModuleRelativePath", "Public/AI/BTService_FindNearestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_DistanceToTargetSelector = { "DistanceToTargetSelector", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_FindNearestPlayer, DistanceToTargetSelector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_DistanceToTargetSelector_MetaData), Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_DistanceToTargetSelector_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_TargetToFollowSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::NewProp_DistanceToTargetSelector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_FindNearestPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::ClassParams = {
		&UBTService_FindNearestPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTService_FindNearestPlayer()
	{
		if (!Z_Registration_Info_UClass_UBTService_FindNearestPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_FindNearestPlayer.OuterSingleton, Z_Construct_UClass_UBTService_FindNearestPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_FindNearestPlayer.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UBTService_FindNearestPlayer>()
	{
		return UBTService_FindNearestPlayer::StaticClass();
	}
	UBTService_FindNearestPlayer::UBTService_FindNearestPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_FindNearestPlayer);
	UBTService_FindNearestPlayer::~UBTService_FindNearestPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_BTService_FindNearestPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_BTService_FindNearestPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_FindNearestPlayer, UBTService_FindNearestPlayer::StaticClass, TEXT("UBTService_FindNearestPlayer"), &Z_Registration_Info_UClass_UBTService_FindNearestPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_FindNearestPlayer), 2146872106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_BTService_FindNearestPlayer_h_3562596372(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_BTService_FindNearestPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AI_BTService_FindNearestPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

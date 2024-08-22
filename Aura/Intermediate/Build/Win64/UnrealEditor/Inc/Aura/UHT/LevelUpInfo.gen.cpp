// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Data/LevelUpInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelUpInfo() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_ULevelUpInfo();
	AURA_API UClass* Z_Construct_UClass_ULevelUpInfo_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraLevelUpInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraLevelUpInfo;
class UScriptStruct* FAuraLevelUpInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraLevelUpInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraLevelUpInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraLevelUpInfo, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraLevelUpInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AuraLevelUpInfo.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraLevelUpInfo>()
{
	return FAuraLevelUpInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpRequirement_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelUpRequirement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributePointAward_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributePointAward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillPointAward_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkillPointAward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraLevelUpInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_LevelUpRequirement_MetaData[] = {
		{ "Category", "AuraLevelUpInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_LevelUpRequirement = { "LevelUpRequirement", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraLevelUpInfo, LevelUpRequirement), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_LevelUpRequirement_MetaData), Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_LevelUpRequirement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_AttributePointAward_MetaData[] = {
		{ "Category", "AuraLevelUpInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_AttributePointAward = { "AttributePointAward", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraLevelUpInfo, AttributePointAward), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_AttributePointAward_MetaData), Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_AttributePointAward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_SkillPointAward_MetaData[] = {
		{ "Category", "AuraLevelUpInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_SkillPointAward = { "SkillPointAward", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraLevelUpInfo, SkillPointAward), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_SkillPointAward_MetaData), Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_SkillPointAward_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_LevelUpRequirement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_AttributePointAward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewProp_SkillPointAward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"AuraLevelUpInfo",
		Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::PropPointers),
		sizeof(FAuraLevelUpInfo),
		alignof(FAuraLevelUpInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAuraLevelUpInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AuraLevelUpInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraLevelUpInfo.InnerSingleton, Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AuraLevelUpInfo.InnerSingleton;
	}
	void ULevelUpInfo::StaticRegisterNativesULevelUpInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelUpInfo);
	UClass* Z_Construct_UClass_ULevelUpInfo_NoRegister()
	{
		return ULevelUpInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULevelUpInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelUpInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelUpInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelUpInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Data/LevelUpInfo.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_Inner = { "LevelUpInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuraLevelUpInfo, METADATA_PARAMS(0, nullptr) }; // 2014419253
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData[] = {
		{ "Category", "LevelUpInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation = { "LevelUpInformation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelUpInfo, LevelUpInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData), Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData) }; // 2014419253
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelUpInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelUpInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelUpInfo_Statics::ClassParams = {
		&ULevelUpInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelUpInfo()
	{
		if (!Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton, Z_Construct_UClass_ULevelUpInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<ULevelUpInfo>()
	{
		return ULevelUpInfo::StaticClass();
	}
	ULevelUpInfo::ULevelUpInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelUpInfo);
	ULevelUpInfo::~ULevelUpInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo[] = {
		{ FAuraLevelUpInfo::StaticStruct, Z_Construct_UScriptStruct_FAuraLevelUpInfo_Statics::NewStructOps, TEXT("AuraLevelUpInfo"), &Z_Registration_Info_UScriptStruct_AuraLevelUpInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraLevelUpInfo), 2014419253U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelUpInfo, ULevelUpInfo::StaticClass, TEXT("ULevelUpInfo"), &Z_Registration_Info_UClass_ULevelUpInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelUpInfo), 3359059143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_1791074353(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

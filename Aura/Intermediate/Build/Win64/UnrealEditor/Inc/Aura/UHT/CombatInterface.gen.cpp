// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interaction/CombatInterface.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UCombatInterface();
	AURA_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClass();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedMontage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaggedMontage;
class UScriptStruct* FTaggedMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaggedMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedMontage, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("TaggedMontage"));
	}
	return Z_Registration_Info_UScriptStruct_TaggedMontage.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FTaggedMontage>()
{
	return FTaggedMontage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTaggedMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedMontage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "TaggedMontage" },
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedMontage, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage_MetaData), Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag_MetaData[] = {
		{ "Category", "TaggedMontage" },
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedMontage, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag_MetaData), Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag_MetaData[] = {
		{ "Category", "TaggedMontage" },
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedMontage, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag_MetaData), Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "TaggedMontage" },
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedMontage, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound_MetaData), Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"TaggedMontage",
		Z_Construct_UScriptStruct_FTaggedMontage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::PropPointers),
		sizeof(FTaggedMontage),
		alignof(FTaggedMontage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaggedMontage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTaggedMontage()
	{
		if (!Z_Registration_Info_UScriptStruct_TaggedMontage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaggedMontage.InnerSingleton, Z_Construct_UScriptStruct_FTaggedMontage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TaggedMontage.InnerSingleton;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetCharacterClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterClass*)Z_Param__Result=P_THIS->GetCharacterClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execIncrementMinionCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementMinionCount_Implementation(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetMinionCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinionCount_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetTaggedMontageByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MontageTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTaggedMontage*)Z_Param__Result=P_THIS->GetTaggedMontageByTag_Implementation(Z_Param_Out_MontageTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetBloodEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraSystem**)Z_Param__Result=P_THIS->GetBloodEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetAttackMontages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTaggedMontage>*)Z_Param__Result=P_THIS->GetAttackMontages_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetAvatar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAvatar_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetHitReactMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetHitReactMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetCombatSocketLocation)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MontageTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCombatSocketLocation_Implementation(Z_Param_Out_MontageTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetPlayerLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerLevel_Implementation();
		P_NATIVE_END;
	}
	struct CombatInterface_eventGetAttackMontages_Parms
	{
		TArray<FTaggedMontage> ReturnValue;
	};
	struct CombatInterface_eventGetAvatar_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetAvatar_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CombatInterface_eventGetBloodEffect_Parms
	{
		UNiagaraSystem* ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetBloodEffect_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CombatInterface_eventGetCharacterClass_Parms
	{
		ECharacterClass ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetCharacterClass_Parms()
			: ReturnValue((ECharacterClass)0)
		{
		}
	};
	struct CombatInterface_eventGetCombatSocketLocation_Parms
	{
		FGameplayTag MontageTag;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetCombatSocketLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct CombatInterface_eventGetHitReactMontage_Parms
	{
		UAnimMontage* ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetHitReactMontage_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CombatInterface_eventGetMinionCount_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetMinionCount_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct CombatInterface_eventGetPlayerLevel_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetPlayerLevel_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct CombatInterface_eventGetTaggedMontageByTag_Parms
	{
		FGameplayTag MontageTag;
		FTaggedMontage ReturnValue;
	};
	struct CombatInterface_eventIncrementMinionCount_Parms
	{
		int32 Amount;
	};
	struct CombatInterface_eventIsDead_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventIsDead_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct CombatInterface_eventUpdateFacingTarget_Parms
	{
		FVector Target;
	};
	TArray<FTaggedMontage> ICombatInterface::GetAttackMontages()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttackMontages instead.");
		CombatInterface_eventGetAttackMontages_Parms Parms;
		return Parms.ReturnValue;
	}
	AActor* ICombatInterface::GetAvatar()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAvatar instead.");
		CombatInterface_eventGetAvatar_Parms Parms;
		return Parms.ReturnValue;
	}
	UNiagaraSystem* ICombatInterface::GetBloodEffect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBloodEffect instead.");
		CombatInterface_eventGetBloodEffect_Parms Parms;
		return Parms.ReturnValue;
	}
	ECharacterClass ICombatInterface::GetCharacterClass()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCharacterClass instead.");
		CombatInterface_eventGetCharacterClass_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector ICombatInterface::GetCombatSocketLocation(FGameplayTag const& MontageTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatSocketLocation instead.");
		CombatInterface_eventGetCombatSocketLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	UAnimMontage* ICombatInterface::GetHitReactMontage()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHitReactMontage instead.");
		CombatInterface_eventGetHitReactMontage_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 ICombatInterface::GetMinionCount()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMinionCount instead.");
		CombatInterface_eventGetMinionCount_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 ICombatInterface::GetPlayerLevel()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayerLevel instead.");
		CombatInterface_eventGetPlayerLevel_Parms Parms;
		return Parms.ReturnValue;
	}
	FTaggedMontage ICombatInterface::GetTaggedMontageByTag(FGameplayTag const& MontageTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTaggedMontageByTag instead.");
		CombatInterface_eventGetTaggedMontageByTag_Parms Parms;
		return Parms.ReturnValue;
	}
	void ICombatInterface::IncrementMinionCount(int32 Amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IncrementMinionCount instead.");
	}
	bool ICombatInterface::IsDead() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDead instead.");
		CombatInterface_eventIsDead_Parms Parms;
		return Parms.ReturnValue;
	}
	void ICombatInterface::UpdateFacingTarget(FVector const& Target)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateFacingTarget instead.");
	}
	void UCombatInterface::StaticRegisterNativesUCombatInterface()
	{
		UClass* Class = UCombatInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackMontages", &ICombatInterface::execGetAttackMontages },
			{ "GetAvatar", &ICombatInterface::execGetAvatar },
			{ "GetBloodEffect", &ICombatInterface::execGetBloodEffect },
			{ "GetCharacterClass", &ICombatInterface::execGetCharacterClass },
			{ "GetCombatSocketLocation", &ICombatInterface::execGetCombatSocketLocation },
			{ "GetHitReactMontage", &ICombatInterface::execGetHitReactMontage },
			{ "GetMinionCount", &ICombatInterface::execGetMinionCount },
			{ "GetPlayerLevel", &ICombatInterface::execGetPlayerLevel },
			{ "GetTaggedMontageByTag", &ICombatInterface::execGetTaggedMontageByTag },
			{ "IncrementMinionCount", &ICombatInterface::execIncrementMinionCount },
			{ "IsDead", &ICombatInterface::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaggedMontage, METADATA_PARAMS(0, nullptr) }; // 590290476
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetAttackMontages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 590290476
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetAttackMontages", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::PropPointers), sizeof(CombatInterface_eventGetAttackMontages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetAttackMontages_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetAttackMontages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetAttackMontages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetAvatar", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers), sizeof(CombatInterface_eventGetAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetAvatar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetBloodEffect_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetBloodEffect", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::PropPointers), sizeof(CombatInterface_eventGetBloodEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetBloodEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetBloodEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetBloodEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetCharacterClass_Parms, ReturnValue), Z_Construct_UEnum_Aura_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 2470023363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetCharacterClass", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::PropPointers), sizeof(CombatInterface_eventGetCharacterClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetCharacterClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetCharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetCharacterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetCombatSocketLocation_Parms, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData), Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetCombatSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetCombatSocketLocation", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers), sizeof(CombatInterface_eventGetCombatSocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetCombatSocketLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetHitReactMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetHitReactMontage", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers), sizeof(CombatInterface_eventGetHitReactMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetHitReactMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetHitReactMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetMinionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetMinionCount", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::PropPointers), sizeof(CombatInterface_eventGetMinionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetMinionCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetMinionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetMinionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetPlayerLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetPlayerLevel", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::PropPointers), sizeof(CombatInterface_eventGetPlayerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetPlayerLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetPlayerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetPlayerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetTaggedMontageByTag_Parms, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag_MetaData), Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetTaggedMontageByTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FTaggedMontage, METADATA_PARAMS(0, nullptr) }; // 590290476
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetTaggedMontageByTag", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::PropPointers), sizeof(CombatInterface_eventGetTaggedMontageByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetTaggedMontageByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventIncrementMinionCount_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "IncrementMinionCount", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::PropPointers), sizeof(CombatInterface_eventIncrementMinionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventIncrementMinionCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_IncrementMinionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_IncrementMinionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_IsDead_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CombatInterface_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatInterface_eventIsDead_Parms), &Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers), sizeof(CombatInterface_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventUpdateFacingTarget_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "UpdateFacingTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::PropPointers), sizeof(CombatInterface_eventUpdateFacingTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventUpdateFacingTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
	UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
	{
		return UCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_GetAttackMontages, "GetAttackMontages" }, // 4059534782
		{ &Z_Construct_UFunction_UCombatInterface_GetAvatar, "GetAvatar" }, // 1940562101
		{ &Z_Construct_UFunction_UCombatInterface_GetBloodEffect, "GetBloodEffect" }, // 1078667327
		{ &Z_Construct_UFunction_UCombatInterface_GetCharacterClass, "GetCharacterClass" }, // 1552670424
		{ &Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation, "GetCombatSocketLocation" }, // 2795220162
		{ &Z_Construct_UFunction_UCombatInterface_GetHitReactMontage, "GetHitReactMontage" }, // 161735069
		{ &Z_Construct_UFunction_UCombatInterface_GetMinionCount, "GetMinionCount" }, // 1998373221
		{ &Z_Construct_UFunction_UCombatInterface_GetPlayerLevel, "GetPlayerLevel" }, // 4178088611
		{ &Z_Construct_UFunction_UCombatInterface_GetTaggedMontageByTag, "GetTaggedMontageByTag" }, // 453462142
		{ &Z_Construct_UFunction_UCombatInterface_IncrementMinionCount, "IncrementMinionCount" }, // 1315119870
		{ &Z_Construct_UFunction_UCombatInterface_IsDead, "IsDead" }, // 2762831546
		{ &Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget, "UpdateFacingTarget" }, // 3589962985
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
		&UCombatInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCombatInterface()
	{
		if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UCombatInterface>()
	{
		return UCombatInterface::StaticClass();
	}
	UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
	UCombatInterface::~UCombatInterface() {}
	static FName NAME_UCombatInterface_GetAttackMontages = FName(TEXT("GetAttackMontages"));
	TArray<FTaggedMontage> ICombatInterface::Execute_GetAttackMontages(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetAttackMontages_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetAttackMontages);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAttackMontages_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetAvatar = FName(TEXT("GetAvatar"));
	AActor* ICombatInterface::Execute_GetAvatar(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetAvatar_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetAvatar);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAvatar_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetBloodEffect = FName(TEXT("GetBloodEffect"));
	UNiagaraSystem* ICombatInterface::Execute_GetBloodEffect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetBloodEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetBloodEffect);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBloodEffect_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetCharacterClass = FName(TEXT("GetCharacterClass"));
	ECharacterClass ICombatInterface::Execute_GetCharacterClass(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetCharacterClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetCharacterClass);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCharacterClass_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetCombatSocketLocation = FName(TEXT("GetCombatSocketLocation"));
	FVector ICombatInterface::Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetCombatSocketLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetCombatSocketLocation);
		if (Func)
		{
			Parms.MontageTag=MontageTag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCombatSocketLocation_Implementation(MontageTag);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetHitReactMontage = FName(TEXT("GetHitReactMontage"));
	UAnimMontage* ICombatInterface::Execute_GetHitReactMontage(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetHitReactMontage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetHitReactMontage);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHitReactMontage_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetMinionCount = FName(TEXT("GetMinionCount"));
	int32 ICombatInterface::Execute_GetMinionCount(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetMinionCount_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetMinionCount);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMinionCount_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetPlayerLevel = FName(TEXT("GetPlayerLevel"));
	int32 ICombatInterface::Execute_GetPlayerLevel(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetPlayerLevel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetPlayerLevel);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPlayerLevel_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetTaggedMontageByTag = FName(TEXT("GetTaggedMontageByTag"));
	FTaggedMontage ICombatInterface::Execute_GetTaggedMontageByTag(UObject* O, FGameplayTag const& MontageTag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetTaggedMontageByTag_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetTaggedMontageByTag);
		if (Func)
		{
			Parms.MontageTag=MontageTag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTaggedMontageByTag_Implementation(MontageTag);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_IncrementMinionCount = FName(TEXT("IncrementMinionCount"));
	void ICombatInterface::Execute_IncrementMinionCount(UObject* O, int32 Amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventIncrementMinionCount_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_IncrementMinionCount);
		if (Func)
		{
			Parms.Amount=Amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			I->IncrementMinionCount_Implementation(Amount);
		}
	}
	static FName NAME_UCombatInterface_IsDead = FName(TEXT("IsDead"));
	bool ICombatInterface::Execute_IsDead(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventIsDead_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_IsDead);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsDead_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_UpdateFacingTarget = FName(TEXT("UpdateFacingTarget"));
	void ICombatInterface::Execute_UpdateFacingTarget(UObject* O, FVector const& Target)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventUpdateFacingTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_UpdateFacingTarget);
		if (Func)
		{
			Parms.Target=Target;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_CombatInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_CombatInterface_h_Statics::ScriptStructInfo[] = {
		{ FTaggedMontage::StaticStruct, Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewStructOps, TEXT("TaggedMontage"), &Z_Registration_Info_UScriptStruct_TaggedMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaggedMontage), 590290476U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_CombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 472211273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_CombatInterface_h_4099302941(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_CombatInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_CombatInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_CombatInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

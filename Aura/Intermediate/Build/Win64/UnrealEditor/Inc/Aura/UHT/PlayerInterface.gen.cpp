// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interaction/PlayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInterface() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UPlayerInterface();
	AURA_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerInterface::execLevelUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LevelUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToSpellPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSpellPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToSpellPoints_Implementation(Z_Param_InSpellPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToAttributePoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAttributePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToAttributePoints_Implementation(Z_Param_InAttributePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToPlayerLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToPlayerLevel_Implementation(Z_Param_PlayerLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToXP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InXP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToXP_Implementation(Z_Param_InXP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetSpellPointsReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSpellPointsReward_Implementation(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetAttributePointsReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAttributePointsReward_Implementation(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetXP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetXP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execFindLevelForXP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InXP);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindLevelForXP_Implementation(Z_Param_InXP);
		P_NATIVE_END;
	}
	struct PlayerInterface_eventAddToAttributePoints_Parms
	{
		int32 InAttributePoints;
	};
	struct PlayerInterface_eventAddToPlayerLevel_Parms
	{
		int32 PlayerLevel;
	};
	struct PlayerInterface_eventAddToSpellPoints_Parms
	{
		int32 InSpellPoints;
	};
	struct PlayerInterface_eventAddToXP_Parms
	{
		int32 InXP;
	};
	struct PlayerInterface_eventFindLevelForXP_Parms
	{
		int32 InXP;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventFindLevelForXP_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PlayerInterface_eventGetAttributePointsReward_Parms
	{
		int32 Level;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetAttributePointsReward_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PlayerInterface_eventGetSpellPointsReward_Parms
	{
		int32 Level;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetSpellPointsReward_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PlayerInterface_eventGetXP_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetXP_Parms()
			: ReturnValue(0)
		{
		}
	};
	void IPlayerInterface::AddToAttributePoints(int32 InAttributePoints)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToAttributePoints instead.");
	}
	void IPlayerInterface::AddToPlayerLevel(int32 PlayerLevel)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToPlayerLevel instead.");
	}
	void IPlayerInterface::AddToSpellPoints(int32 InSpellPoints)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToSpellPoints instead.");
	}
	void IPlayerInterface::AddToXP(int32 InXP)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToXP instead.");
	}
	int32 IPlayerInterface::FindLevelForXP(int32 InXP) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FindLevelForXP instead.");
		PlayerInterface_eventFindLevelForXP_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IPlayerInterface::GetAttributePointsReward(int32 Level) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttributePointsReward instead.");
		PlayerInterface_eventGetAttributePointsReward_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IPlayerInterface::GetSpellPointsReward(int32 Level) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSpellPointsReward instead.");
		PlayerInterface_eventGetSpellPointsReward_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IPlayerInterface::GetXP() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetXP instead.");
		PlayerInterface_eventGetXP_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPlayerInterface::LevelUp()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LevelUp instead.");
	}
	void UPlayerInterface::StaticRegisterNativesUPlayerInterface()
	{
		UClass* Class = UPlayerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToAttributePoints", &IPlayerInterface::execAddToAttributePoints },
			{ "AddToPlayerLevel", &IPlayerInterface::execAddToPlayerLevel },
			{ "AddToSpellPoints", &IPlayerInterface::execAddToSpellPoints },
			{ "AddToXP", &IPlayerInterface::execAddToXP },
			{ "FindLevelForXP", &IPlayerInterface::execFindLevelForXP },
			{ "GetAttributePointsReward", &IPlayerInterface::execGetAttributePointsReward },
			{ "GetSpellPointsReward", &IPlayerInterface::execGetSpellPointsReward },
			{ "GetXP", &IPlayerInterface::execGetXP },
			{ "LevelUp", &IPlayerInterface::execLevelUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAttributePoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::NewProp_InAttributePoints = { "InAttributePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToAttributePoints_Parms, InAttributePoints), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::NewProp_InAttributePoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToAttributePoints", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::PropPointers), sizeof(PlayerInterface_eventAddToAttributePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToAttributePoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToPlayerLevel_Parms, PlayerLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::NewProp_PlayerLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToPlayerLevel", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::PropPointers), sizeof(PlayerInterface_eventAddToPlayerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToPlayerLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSpellPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::NewProp_InSpellPoints = { "InSpellPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToSpellPoints_Parms, InSpellPoints), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::NewProp_InSpellPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToSpellPoints", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::PropPointers), sizeof(PlayerInterface_eventAddToSpellPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToSpellPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InXP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::NewProp_InXP = { "InXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToXP_Parms, InXP), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::NewProp_InXP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToXP", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::PropPointers), sizeof(PlayerInterface_eventAddToXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToXP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InXP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::NewProp_InXP = { "InXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventFindLevelForXP_Parms, InXP), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventFindLevelForXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::NewProp_InXP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "FindLevelForXP", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::PropPointers), sizeof(PlayerInterface_eventFindLevelForXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventFindLevelForXP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_FindLevelForXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetAttributePointsReward_Parms, Level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetAttributePointsReward_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetAttributePointsReward", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::PropPointers), sizeof(PlayerInterface_eventGetAttributePointsReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetAttributePointsReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetSpellPointsReward_Parms, Level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetSpellPointsReward_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetSpellPointsReward", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::PropPointers), sizeof(PlayerInterface_eventGetSpellPointsReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetSpellPointsReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetXP_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetXP", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::PropPointers), sizeof(PlayerInterface_eventGetXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetXP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "LevelUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerInterface_LevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInterface);
	UClass* Z_Construct_UClass_UPlayerInterface_NoRegister()
	{
		return UPlayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInterface_AddToAttributePoints, "AddToAttributePoints" }, // 1841497173
		{ &Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel, "AddToPlayerLevel" }, // 2822200219
		{ &Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints, "AddToSpellPoints" }, // 1905354294
		{ &Z_Construct_UFunction_UPlayerInterface_AddToXP, "AddToXP" }, // 1211645191
		{ &Z_Construct_UFunction_UPlayerInterface_FindLevelForXP, "FindLevelForXP" }, // 4253756092
		{ &Z_Construct_UFunction_UPlayerInterface_GetAttributePointsReward, "GetAttributePointsReward" }, // 1973976456
		{ &Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward, "GetSpellPointsReward" }, // 1007220276
		{ &Z_Construct_UFunction_UPlayerInterface_GetXP, "GetXP" }, // 1627808608
		{ &Z_Construct_UFunction_UPlayerInterface_LevelUp, "LevelUp" }, // 2737435880
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInterface_Statics::ClassParams = {
		&UPlayerInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlayerInterface()
	{
		if (!Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton, Z_Construct_UClass_UPlayerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UPlayerInterface>()
	{
		return UPlayerInterface::StaticClass();
	}
	UPlayerInterface::UPlayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInterface);
	UPlayerInterface::~UPlayerInterface() {}
	static FName NAME_UPlayerInterface_AddToAttributePoints = FName(TEXT("AddToAttributePoints"));
	void IPlayerInterface::Execute_AddToAttributePoints(UObject* O, int32 InAttributePoints)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToAttributePoints_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToAttributePoints);
		if (Func)
		{
			Parms.InAttributePoints=InAttributePoints;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToAttributePoints_Implementation(InAttributePoints);
		}
	}
	static FName NAME_UPlayerInterface_AddToPlayerLevel = FName(TEXT("AddToPlayerLevel"));
	void IPlayerInterface::Execute_AddToPlayerLevel(UObject* O, int32 PlayerLevel)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToPlayerLevel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToPlayerLevel);
		if (Func)
		{
			Parms.PlayerLevel=PlayerLevel;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToPlayerLevel_Implementation(PlayerLevel);
		}
	}
	static FName NAME_UPlayerInterface_AddToSpellPoints = FName(TEXT("AddToSpellPoints"));
	void IPlayerInterface::Execute_AddToSpellPoints(UObject* O, int32 InSpellPoints)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToSpellPoints_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToSpellPoints);
		if (Func)
		{
			Parms.InSpellPoints=InSpellPoints;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToSpellPoints_Implementation(InSpellPoints);
		}
	}
	static FName NAME_UPlayerInterface_AddToXP = FName(TEXT("AddToXP"));
	void IPlayerInterface::Execute_AddToXP(UObject* O, int32 InXP)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToXP_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToXP);
		if (Func)
		{
			Parms.InXP=InXP;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToXP_Implementation(InXP);
		}
	}
	static FName NAME_UPlayerInterface_FindLevelForXP = FName(TEXT("FindLevelForXP"));
	int32 IPlayerInterface::Execute_FindLevelForXP(const UObject* O, int32 InXP)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventFindLevelForXP_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_FindLevelForXP);
		if (Func)
		{
			Parms.InXP=InXP;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->FindLevelForXP_Implementation(InXP);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetAttributePointsReward = FName(TEXT("GetAttributePointsReward"));
	int32 IPlayerInterface::Execute_GetAttributePointsReward(const UObject* O, int32 Level)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetAttributePointsReward_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetAttributePointsReward);
		if (Func)
		{
			Parms.Level=Level;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAttributePointsReward_Implementation(Level);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetSpellPointsReward = FName(TEXT("GetSpellPointsReward"));
	int32 IPlayerInterface::Execute_GetSpellPointsReward(const UObject* O, int32 Level)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetSpellPointsReward_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetSpellPointsReward);
		if (Func)
		{
			Parms.Level=Level;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSpellPointsReward_Implementation(Level);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetXP = FName(TEXT("GetXP"));
	int32 IPlayerInterface::Execute_GetXP(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetXP_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetXP);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetXP_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_LevelUp = FName(TEXT("LevelUp"));
	void IPlayerInterface::Execute_LevelUp(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_LevelUp);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->LevelUp_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInterface, UPlayerInterface::StaticClass, TEXT("UPlayerInterface"), &Z_Registration_Info_UClass_UPlayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInterface), 74513824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_773041072(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_muzik_Documents_GitHub_GAS_RPG_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

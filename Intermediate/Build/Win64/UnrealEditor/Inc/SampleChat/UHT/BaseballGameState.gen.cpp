// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/BaseballGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseballGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ABaseballGameState();
SAMPLECHAT_API UClass* Z_Construct_UClass_ABaseballGameState_NoRegister();
SAMPLECHAT_API UFunction* Z_Construct_UDelegateFunction_SampleChat_OnGameMessageChanged__DelegateSignature();
SAMPLECHAT_API UFunction* Z_Construct_UDelegateFunction_SampleChat_OnTurnChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Delegate FOnGameMessageChanged
struct Z_Construct_UDelegateFunction_SampleChat_OnGameMessageChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SampleChat_OnGameMessageChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SampleChat, nullptr, "OnGameMessageChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SampleChat_OnGameMessageChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SampleChat_OnGameMessageChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SampleChat_OnGameMessageChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SampleChat_OnGameMessageChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameMessageChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameMessageChanged)
{
	OnGameMessageChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGameMessageChanged

// Begin Delegate FOnTurnChanged
struct Z_Construct_UDelegateFunction_SampleChat_OnTurnChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SampleChat_OnTurnChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SampleChat, nullptr, "OnTurnChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SampleChat_OnTurnChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SampleChat_OnTurnChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SampleChat_OnTurnChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SampleChat_OnTurnChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTurnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnChanged)
{
	OnTurnChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTurnChanged

// Begin Class ABaseballGameState Function OnRep_CurrentTurn
struct Z_Construct_UFunction_ABaseballGameState_OnRep_CurrentTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseballGameState_OnRep_CurrentTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseballGameState, nullptr, "OnRep_CurrentTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseballGameState_OnRep_CurrentTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseballGameState_OnRep_CurrentTurn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseballGameState_OnRep_CurrentTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseballGameState_OnRep_CurrentTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseballGameState::execOnRep_CurrentTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentTurn();
	P_NATIVE_END;
}
// End Class ABaseballGameState Function OnRep_CurrentTurn

// Begin Class ABaseballGameState Function OnRep_GameMessage
struct Z_Construct_UFunction_ABaseballGameState_OnRep_GameMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseballGameState_OnRep_GameMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseballGameState, nullptr, "OnRep_GameMessage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseballGameState_OnRep_GameMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseballGameState_OnRep_GameMessage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseballGameState_OnRep_GameMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseballGameState_OnRep_GameMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseballGameState::execOnRep_GameMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_GameMessage();
	P_NATIVE_END;
}
// End Class ABaseballGameState Function OnRep_GameMessage

// Begin Class ABaseballGameState
void ABaseballGameState::StaticRegisterNativesABaseballGameState()
{
	UClass* Class = ABaseballGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentTurn", &ABaseballGameState::execOnRep_CurrentTurn },
		{ "OnRep_GameMessage", &ABaseballGameState::execOnRep_GameMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseballGameState);
UClass* Z_Construct_UClass_ABaseballGameState_NoRegister()
{
	return ABaseballGameState::StaticClass();
}
struct Z_Construct_UClass_ABaseballGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BaseballGameState.h" },
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameMessage_MetaData[] = {
		{ "Category", "BaseballGameState" },
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameMessageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurn_MetaData[] = {
		{ "Category", "BaseballGameState" },
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseballGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentGameMessage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameMessageChanged;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTurn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseballGameState_OnRep_CurrentTurn, "OnRep_CurrentTurn" }, // 1785511443
		{ &Z_Construct_UFunction_ABaseballGameState_OnRep_GameMessage, "OnRep_GameMessage" }, // 1317581727
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseballGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseballGameState_Statics::NewProp_CurrentGameMessage = { "CurrentGameMessage", "OnRep_GameMessage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballGameState, CurrentGameMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameMessage_MetaData), NewProp_CurrentGameMessage_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseballGameState_Statics::NewProp_OnGameMessageChanged = { "OnGameMessageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballGameState, OnGameMessageChanged), Z_Construct_UDelegateFunction_SampleChat_OnGameMessageChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameMessageChanged_MetaData), NewProp_OnGameMessageChanged_MetaData) }; // 696938986
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseballGameState_Statics::NewProp_CurrentTurn = { "CurrentTurn", "OnRep_CurrentTurn", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballGameState, CurrentTurn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurn_MetaData), NewProp_CurrentTurn_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseballGameState_Statics::NewProp_OnTurnChanged = { "OnTurnChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballGameState, OnTurnChanged), Z_Construct_UDelegateFunction_SampleChat_OnTurnChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnChanged_MetaData), NewProp_OnTurnChanged_MetaData) }; // 3467206081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseballGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballGameState_Statics::NewProp_CurrentGameMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballGameState_Statics::NewProp_OnGameMessageChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballGameState_Statics::NewProp_CurrentTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballGameState_Statics::NewProp_OnTurnChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseballGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseballGameState_Statics::ClassParams = {
	&ABaseballGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseballGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseballGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseballGameState()
{
	if (!Z_Registration_Info_UClass_ABaseballGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseballGameState.OuterSingleton, Z_Construct_UClass_ABaseballGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseballGameState.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ABaseballGameState>()
{
	return ABaseballGameState::StaticClass();
}
void ABaseballGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentGameMessage(TEXT("CurrentGameMessage"));
	static const FName Name_CurrentTurn(TEXT("CurrentTurn"));
	const bool bIsValid = true
		&& Name_CurrentGameMessage == ClassReps[(int32)ENetFields_Private::CurrentGameMessage].Property->GetFName()
		&& Name_CurrentTurn == ClassReps[(int32)ENetFields_Private::CurrentTurn].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseballGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseballGameState);
ABaseballGameState::~ABaseballGameState() {}
// End Class ABaseballGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseballGameState, ABaseballGameState::StaticClass, TEXT("ABaseballGameState"), &Z_Registration_Info_UClass_ABaseballGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseballGameState), 959888574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_798580078(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

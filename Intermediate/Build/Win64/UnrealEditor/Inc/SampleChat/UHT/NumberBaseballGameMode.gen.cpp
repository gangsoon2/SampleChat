// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/NumberBaseballGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SAMPLECHAT_API UClass* Z_Construct_UClass_ANumberBaseballGameMode();
SAMPLECHAT_API UClass* Z_Construct_UClass_ANumberBaseballGameMode_NoRegister();
SAMPLECHAT_API UFunction* Z_Construct_UDelegateFunction_SampleChat_OnGameStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Delegate FOnGameStateChanged
struct Z_Construct_UDelegateFunction_SampleChat_OnGameStateChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NumberBaseballGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SampleChat_OnGameStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SampleChat, nullptr, "OnGameStateChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SampleChat_OnGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SampleChat_OnGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SampleChat_OnGameStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SampleChat_OnGameStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameStateChanged)
{
	OnGameStateChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGameStateChanged

// Begin Class ANumberBaseballGameMode Function HandleChatCommand
struct Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics
{
	struct NumberBaseballGameMode_eventHandleChatCommand_Parms
	{
		FString PlayerName;
		FString Command;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NumberBaseballGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballGameMode_eventHandleChatCommand_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballGameMode_eventHandleChatCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballGameMode, nullptr, "HandleChatCommand", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::NumberBaseballGameMode_eventHandleChatCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::NumberBaseballGameMode_eventHandleChatCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballGameMode::execHandleChatCommand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChatCommand(Z_Param_PlayerName,Z_Param_Command);
	P_NATIVE_END;
}
// End Class ANumberBaseballGameMode Function HandleChatCommand

// Begin Class ANumberBaseballGameMode
void ANumberBaseballGameMode::StaticRegisterNativesANumberBaseballGameMode()
{
	UClass* Class = ANumberBaseballGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleChatCommand", &ANumberBaseballGameMode::execHandleChatCommand },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumberBaseballGameMode);
UClass* Z_Construct_UClass_ANumberBaseballGameMode_NoRegister()
{
	return ANumberBaseballGameMode::StaticClass();
}
struct Z_Construct_UClass_ANumberBaseballGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NumberBaseballGameMode.h" },
		{ "ModuleRelativePath", "Public/NumberBaseballGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/NumberBaseballGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameMessage_MetaData[] = {
		{ "Category", "NumberBaseballGameMode" },
		{ "ModuleRelativePath", "Public/NumberBaseballGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStateChanged;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentGameMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANumberBaseballGameMode_HandleChatCommand, "HandleChatCommand" }, // 1651809757
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberBaseballGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_OnGameStateChanged = { "OnGameStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameMode, OnGameStateChanged), Z_Construct_UDelegateFunction_SampleChat_OnGameStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameStateChanged_MetaData), NewProp_OnGameStateChanged_MetaData) }; // 446472806
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_CurrentGameMessage = { "CurrentGameMessage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameMode, CurrentGameMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameMessage_MetaData), NewProp_CurrentGameMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumberBaseballGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_OnGameStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_CurrentGameMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANumberBaseballGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::ClassParams = {
	&ANumberBaseballGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANumberBaseballGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumberBaseballGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumberBaseballGameMode()
{
	if (!Z_Registration_Info_UClass_ANumberBaseballGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumberBaseballGameMode.OuterSingleton, Z_Construct_UClass_ANumberBaseballGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumberBaseballGameMode.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ANumberBaseballGameMode>()
{
	return ANumberBaseballGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberBaseballGameMode);
ANumberBaseballGameMode::~ANumberBaseballGameMode() {}
// End Class ANumberBaseballGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_NumberBaseballGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumberBaseballGameMode, ANumberBaseballGameMode::StaticClass, TEXT("ANumberBaseballGameMode"), &Z_Registration_Info_UClass_ANumberBaseballGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumberBaseballGameMode), 760724028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_NumberBaseballGameMode_h_4105530187(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_NumberBaseballGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_NumberBaseballGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

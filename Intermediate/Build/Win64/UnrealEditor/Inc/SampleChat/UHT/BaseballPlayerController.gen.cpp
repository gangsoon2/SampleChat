// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/BaseballPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseballPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SAMPLECHAT_API UClass* Z_Construct_UClass_ABaseballPlayerController();
SAMPLECHAT_API UClass* Z_Construct_UClass_ABaseballPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ABaseballPlayerController Function OnChatMessageReceived
struct Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics
{
	struct BaseballPlayerController_eventOnChatMessageReceived_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseballPlayerController_eventOnChatMessageReceived_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseballPlayerController, nullptr, "OnChatMessageReceived", nullptr, nullptr, Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::BaseballPlayerController_eventOnChatMessageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::BaseballPlayerController_eventOnChatMessageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseballPlayerController::execOnChatMessageReceived)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatMessageReceived(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ABaseballPlayerController Function OnChatMessageReceived

// Begin Class ABaseballPlayerController Function Server_SendChatMessage
struct BaseballPlayerController_eventServer_SendChatMessage_Parms
{
	FString Message;
};
static const FName NAME_ABaseballPlayerController_Server_SendChatMessage = FName(TEXT("Server_SendChatMessage"));
void ABaseballPlayerController::Server_SendChatMessage(const FString& Message)
{
	BaseballPlayerController_eventServer_SendChatMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ABaseballPlayerController_Server_SendChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseballPlayerController_eventServer_SendChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseballPlayerController, nullptr, "Server_SendChatMessage", nullptr, nullptr, Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::PropPointers), sizeof(BaseballPlayerController_eventServer_SendChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseballPlayerController_eventServer_SendChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseballPlayerController::execServer_SendChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SendChatMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ABaseballPlayerController Function Server_SendChatMessage

// Begin Class ABaseballPlayerController
void ABaseballPlayerController::StaticRegisterNativesABaseballPlayerController()
{
	UClass* Class = ABaseballPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatMessageReceived", &ABaseballPlayerController::execOnChatMessageReceived },
		{ "Server_SendChatMessage", &ABaseballPlayerController::execServer_SendChatMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseballPlayerController);
UClass* Z_Construct_UClass_ABaseballPlayerController_NoRegister()
{
	return ABaseballPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABaseballPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BaseballPlayerController.h" },
		{ "ModuleRelativePath", "Public/BaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseballGameWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/BaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/BaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseballGameWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseballPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BaseballGameWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseballGameWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseballPlayerController_OnChatMessageReceived, "OnChatMessageReceived" }, // 3755382392
		{ &Z_Construct_UFunction_ABaseballPlayerController_Server_SendChatMessage, "Server_SendChatMessage" }, // 1727692938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseballPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseballPlayerController_Statics::NewProp_BaseballGameWidgetClass = { "BaseballGameWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballPlayerController, BaseballGameWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseballGameWidgetClass_MetaData), NewProp_BaseballGameWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseballPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseballPlayerController_Statics::NewProp_BaseballGameWidget = { "BaseballGameWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballPlayerController, BaseballGameWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseballGameWidget_MetaData), NewProp_BaseballGameWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseballPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballPlayerController_Statics::NewProp_BaseballGameWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballPlayerController_Statics::NewProp_BaseballGameWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseballPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseballPlayerController_Statics::ClassParams = {
	&ABaseballPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseballPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseballPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseballPlayerController()
{
	if (!Z_Registration_Info_UClass_ABaseballPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseballPlayerController.OuterSingleton, Z_Construct_UClass_ABaseballPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseballPlayerController.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ABaseballPlayerController>()
{
	return ABaseballPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseballPlayerController);
ABaseballPlayerController::~ABaseballPlayerController() {}
// End Class ABaseballPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseballPlayerController, ABaseballPlayerController::StaticClass, TEXT("ABaseballPlayerController"), &Z_Registration_Info_UClass_ABaseballPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseballPlayerController), 3419990032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_3748106166(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

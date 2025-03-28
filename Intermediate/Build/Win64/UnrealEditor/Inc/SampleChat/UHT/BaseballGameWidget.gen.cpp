// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/BaseballGameWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseballGameWidget() {}

// Begin Cross Module References
SAMPLECHAT_API UClass* Z_Construct_UClass_UBaseballGameWidget();
SAMPLECHAT_API UClass* Z_Construct_UClass_UBaseballGameWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UBaseballGameWidget Function FocusChatInputBox
struct Z_Construct_UFunction_UBaseballGameWidget_FocusChatInputBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballGameWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseballGameWidget_FocusChatInputBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseballGameWidget, nullptr, "FocusChatInputBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseballGameWidget_FocusChatInputBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseballGameWidget_FocusChatInputBox_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseballGameWidget_FocusChatInputBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseballGameWidget_FocusChatInputBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseballGameWidget::execFocusChatInputBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusChatInputBox();
	P_NATIVE_END;
}
// End Class UBaseballGameWidget Function FocusChatInputBox

// Begin Class UBaseballGameWidget Function OnTextCommitted
struct Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics
{
	struct BaseballGameWidget_eventOnTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseballGameWidget_eventOnTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseballGameWidget_eventOnTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseballGameWidget, nullptr, "OnTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::BaseballGameWidget_eventOnTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::BaseballGameWidget_eventOnTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseballGameWidget::execOnTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UBaseballGameWidget Function OnTextCommitted

// Begin Class UBaseballGameWidget Function UpdateGameMessage
struct Z_Construct_UFunction_UBaseballGameWidget_UpdateGameMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseballGameWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseballGameWidget_UpdateGameMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseballGameWidget, nullptr, "UpdateGameMessage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseballGameWidget_UpdateGameMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseballGameWidget_UpdateGameMessage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseballGameWidget_UpdateGameMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseballGameWidget_UpdateGameMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseballGameWidget::execUpdateGameMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameMessage();
	P_NATIVE_END;
}
// End Class UBaseballGameWidget Function UpdateGameMessage

// Begin Class UBaseballGameWidget
void UBaseballGameWidget::StaticRegisterNativesUBaseballGameWidget()
{
	UClass* Class = UBaseballGameWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FocusChatInputBox", &UBaseballGameWidget::execFocusChatInputBox },
		{ "OnTextCommitted", &UBaseballGameWidget::execOnTextCommitted },
		{ "UpdateGameMessage", &UBaseballGameWidget::execUpdateGameMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseballGameWidget);
UClass* Z_Construct_UClass_UBaseballGameWidget_NoRegister()
{
	return UBaseballGameWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseballGameWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseballGameWidget.h" },
		{ "ModuleRelativePath", "Public/BaseballGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMessageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseballGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseballGameWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMessageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseballGameWidget_FocusChatInputBox, "FocusChatInputBox" }, // 4285710859
		{ &Z_Construct_UFunction_UBaseballGameWidget_OnTextCommitted, "OnTextCommitted" }, // 674085021
		{ &Z_Construct_UFunction_UBaseballGameWidget_UpdateGameMessage, "UpdateGameMessage" }, // 3787701443
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseballGameWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseballGameWidget_Statics::NewProp_GameMessageText = { "GameMessageText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseballGameWidget, GameMessageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMessageText_MetaData), NewProp_GameMessageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseballGameWidget_Statics::NewProp_ChatInputBox = { "ChatInputBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseballGameWidget, ChatInputBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputBox_MetaData), NewProp_ChatInputBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseballGameWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseballGameWidget_Statics::NewProp_GameMessageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseballGameWidget_Statics::NewProp_ChatInputBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseballGameWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseballGameWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseballGameWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseballGameWidget_Statics::ClassParams = {
	&UBaseballGameWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseballGameWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseballGameWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseballGameWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseballGameWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseballGameWidget()
{
	if (!Z_Registration_Info_UClass_UBaseballGameWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseballGameWidget.OuterSingleton, Z_Construct_UClass_UBaseballGameWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseballGameWidget.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UBaseballGameWidget>()
{
	return UBaseballGameWidget::StaticClass();
}
UBaseballGameWidget::UBaseballGameWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseballGameWidget);
UBaseballGameWidget::~UBaseballGameWidget() {}
// End Class UBaseballGameWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseballGameWidget, UBaseballGameWidget::StaticClass, TEXT("UBaseballGameWidget"), &Z_Registration_Info_UClass_UBaseballGameWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseballGameWidget), 578881854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_1730296098(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

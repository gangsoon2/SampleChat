// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/MyUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}

// Begin Cross Module References
SAMPLECHAT_API UClass* Z_Construct_UClass_UMyUserWidget();
SAMPLECHAT_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UMyUserWidget Function OnTextCommitted
struct Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics
{
	struct MyUserWidget_eventOnTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventOnTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventOnTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "OnTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::MyUserWidget_eventOnTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::MyUserWidget_eventOnTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyUserWidget_OnTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_OnTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execOnTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMyUserWidget Function OnTextCommitted

// Begin Class UMyUserWidget
void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
{
	UClass* Class = UMyUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTextCommitted", &UMyUserWidget::execOnTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyUserWidget);
UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
{
	return UMyUserWidget::StaticClass();
}
struct Z_Construct_UClass_UMyUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyUserWidget.h" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_71_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd (BP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd (BP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_71;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserWidget_OnTextCommitted, "OnTextCommitted" }, // 3419365379
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_EditableTextBox_71 = { "EditableTextBox_71", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, EditableTextBox_71), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_71_MetaData), NewProp_EditableTextBox_71_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_EditableTextBox_71,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
	&UMyUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyUserWidget()
{
	if (!Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UMyUserWidget>()
{
	return UMyUserWidget::StaticClass();
}
UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
UMyUserWidget::~UMyUserWidget() {}
// End Class UMyUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyUserWidget, UMyUserWidget::StaticClass, TEXT("UMyUserWidget"), &Z_Registration_Info_UClass_UMyUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyUserWidget), 1045843853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyUserWidget_h_1983274587(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

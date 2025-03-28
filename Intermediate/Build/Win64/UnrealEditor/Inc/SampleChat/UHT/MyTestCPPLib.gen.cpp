// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/MyTestCPPLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestCPPLib() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAMPLECHAT_API UClass* Z_Construct_UClass_UMyTestCPPLib();
SAMPLECHAT_API UClass* Z_Construct_UClass_UMyTestCPPLib_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UMyTestCPPLib Function CalculateStrikeBallOut
struct Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics
{
	struct MyTestCPPLib_eventCalculateStrikeBallOut_Parms
	{
		TArray<int32> Answer;
		TArray<int32> Guess;
		int32 OutStrikes;
		int32 OutBalls;
		int32 OutOuts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BullsAndCows" },
		{ "ModuleRelativePath", "Public/MyTestCPPLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Answer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Answer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Answer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Guess_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Guess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutStrikes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutBalls;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutOuts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_Answer_Inner = { "Answer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_Answer = { "Answer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestCPPLib_eventCalculateStrikeBallOut_Parms, Answer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Answer_MetaData), NewProp_Answer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_Guess_Inner = { "Guess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestCPPLib_eventCalculateStrikeBallOut_Parms, Guess), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_OutStrikes = { "OutStrikes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestCPPLib_eventCalculateStrikeBallOut_Parms, OutStrikes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_OutBalls = { "OutBalls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestCPPLib_eventCalculateStrikeBallOut_Parms, OutBalls), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_OutOuts = { "OutOuts", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestCPPLib_eventCalculateStrikeBallOut_Parms, OutOuts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_Answer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_Answer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_Guess_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_Guess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_OutStrikes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_OutBalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::NewProp_OutOuts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyTestCPPLib, nullptr, "CalculateStrikeBallOut", nullptr, nullptr, Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::MyTestCPPLib_eventCalculateStrikeBallOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::MyTestCPPLib_eventCalculateStrikeBallOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyTestCPPLib::execCalculateStrikeBallOut)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Answer);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Guess);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutStrikes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutBalls);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutOuts);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyTestCPPLib::CalculateStrikeBallOut(Z_Param_Out_Answer,Z_Param_Out_Guess,Z_Param_Out_OutStrikes,Z_Param_Out_OutBalls,Z_Param_Out_OutOuts);
	P_NATIVE_END;
}
// End Class UMyTestCPPLib Function CalculateStrikeBallOut

// Begin Class UMyTestCPPLib Function GenerateRandomThreeDigit
struct Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics
{
	struct MyTestCPPLib_eventGenerateRandomThreeDigit_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BullsAndCows" },
		{ "ModuleRelativePath", "Public/MyTestCPPLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestCPPLib_eventGenerateRandomThreeDigit_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyTestCPPLib, nullptr, "GenerateRandomThreeDigit", nullptr, nullptr, Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::MyTestCPPLib_eventGenerateRandomThreeDigit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::MyTestCPPLib_eventGenerateRandomThreeDigit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyTestCPPLib::execGenerateRandomThreeDigit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=UMyTestCPPLib::GenerateRandomThreeDigit();
	P_NATIVE_END;
}
// End Class UMyTestCPPLib Function GenerateRandomThreeDigit

// Begin Class UMyTestCPPLib
void UMyTestCPPLib::StaticRegisterNativesUMyTestCPPLib()
{
	UClass* Class = UMyTestCPPLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateStrikeBallOut", &UMyTestCPPLib::execCalculateStrikeBallOut },
		{ "GenerateRandomThreeDigit", &UMyTestCPPLib::execGenerateRandomThreeDigit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyTestCPPLib);
UClass* Z_Construct_UClass_UMyTestCPPLib_NoRegister()
{
	return UMyTestCPPLib::StaticClass();
}
struct Z_Construct_UClass_UMyTestCPPLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestCPPLib.h" },
		{ "ModuleRelativePath", "Public/MyTestCPPLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyTestCPPLib_CalculateStrikeBallOut, "CalculateStrikeBallOut" }, // 3877773620
		{ &Z_Construct_UFunction_UMyTestCPPLib_GenerateRandomThreeDigit, "GenerateRandomThreeDigit" }, // 3573526957
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTestCPPLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyTestCPPLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestCPPLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyTestCPPLib_Statics::ClassParams = {
	&UMyTestCPPLib::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestCPPLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyTestCPPLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyTestCPPLib()
{
	if (!Z_Registration_Info_UClass_UMyTestCPPLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyTestCPPLib.OuterSingleton, Z_Construct_UClass_UMyTestCPPLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyTestCPPLib.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UMyTestCPPLib>()
{
	return UMyTestCPPLib::StaticClass();
}
UMyTestCPPLib::UMyTestCPPLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTestCPPLib);
UMyTestCPPLib::~UMyTestCPPLib() {}
// End Class UMyTestCPPLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyTestCPPLib, UMyTestCPPLib::StaticClass, TEXT("UMyTestCPPLib"), &Z_Registration_Info_UClass_UMyTestCPPLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyTestCPPLib), 879619161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_2390821092(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

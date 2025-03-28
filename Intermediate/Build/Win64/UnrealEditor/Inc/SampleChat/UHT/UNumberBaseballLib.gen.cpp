// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/UNumberBaseballLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNumberBaseballLib() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAMPLECHAT_API UClass* Z_Construct_UClass_UUNumberBaseballLib();
SAMPLECHAT_API UClass* Z_Construct_UClass_UUNumberBaseballLib_NoRegister();
SAMPLECHAT_API UScriptStruct* Z_Construct_UScriptStruct_FGuessResult();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin ScriptStruct FGuessResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GuessResult;
class UScriptStruct* FGuessResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GuessResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GuessResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuessResult, (UObject*)Z_Construct_UPackage__Script_SampleChat(), TEXT("GuessResult"));
	}
	return Z_Registration_Info_UScriptStruct_GuessResult.OuterSingleton;
}
template<> SAMPLECHAT_API UScriptStruct* StaticStruct<FGuessResult>()
{
	return FGuessResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGuessResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UNumberBaseballLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strikes_MetaData[] = {
		{ "Category", "GuessResult" },
		{ "ModuleRelativePath", "Public/UNumberBaseballLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Balls_MetaData[] = {
		{ "Category", "GuessResult" },
		{ "ModuleRelativePath", "Public/UNumberBaseballLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOut_MetaData[] = {
		{ "Category", "GuessResult" },
		{ "ModuleRelativePath", "Public/UNumberBaseballLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWin_MetaData[] = {
		{ "Category", "GuessResult" },
		{ "ModuleRelativePath", "Public/UNumberBaseballLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strikes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Balls;
	static void NewProp_bOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOut;
	static void NewProp_bWin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuessResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_Strikes = { "Strikes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuessResult, Strikes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strikes_MetaData), NewProp_Strikes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_Balls = { "Balls", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuessResult, Balls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Balls_MetaData), NewProp_Balls_MetaData) };
void Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_bOut_SetBit(void* Obj)
{
	((FGuessResult*)Obj)->bOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_bOut = { "bOut", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGuessResult), &Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_bOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOut_MetaData), NewProp_bOut_MetaData) };
void Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_bWin_SetBit(void* Obj)
{
	((FGuessResult*)Obj)->bWin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_bWin = { "bWin", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGuessResult), &Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_bWin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWin_MetaData), NewProp_bWin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuessResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_Strikes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_Balls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_bOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuessResult_Statics::NewProp_bWin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuessResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuessResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
	nullptr,
	&NewStructOps,
	"GuessResult",
	Z_Construct_UScriptStruct_FGuessResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuessResult_Statics::PropPointers),
	sizeof(FGuessResult),
	alignof(FGuessResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuessResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGuessResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGuessResult()
{
	if (!Z_Registration_Info_UScriptStruct_GuessResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GuessResult.InnerSingleton, Z_Construct_UScriptStruct_FGuessResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GuessResult.InnerSingleton;
}
// End ScriptStruct FGuessResult

// Begin Class UUNumberBaseballLib Function CheckGuess
struct Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics
{
	struct UNumberBaseballLib_eventCheckGuess_Parms
	{
		TArray<int32> Answer;
		TArray<int32> Guess;
		FGuessResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UNumberBaseballLib.h" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_Answer_Inner = { "Answer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_Answer = { "Answer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNumberBaseballLib_eventCheckGuess_Parms, Answer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Answer_MetaData), NewProp_Answer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_Guess_Inner = { "Guess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNumberBaseballLib_eventCheckGuess_Parms, Guess), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNumberBaseballLib_eventCheckGuess_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuessResult, METADATA_PARAMS(0, nullptr) }; // 2859884212
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_Answer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_Answer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_Guess_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_Guess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUNumberBaseballLib, nullptr, "CheckGuess", nullptr, nullptr, Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::UNumberBaseballLib_eventCheckGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::UNumberBaseballLib_eventCheckGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUNumberBaseballLib::execCheckGuess)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Answer);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Guess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuessResult*)Z_Param__Result=UUNumberBaseballLib::CheckGuess(Z_Param_Out_Answer,Z_Param_Out_Guess);
	P_NATIVE_END;
}
// End Class UUNumberBaseballLib Function CheckGuess

// Begin Class UUNumberBaseballLib Function GenerateRandomNumber
struct Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics
{
	struct UNumberBaseballLib_eventGenerateRandomNumber_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UNumberBaseballLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNumberBaseballLib_eventGenerateRandomNumber_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUNumberBaseballLib, nullptr, "GenerateRandomNumber", nullptr, nullptr, Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::UNumberBaseballLib_eventGenerateRandomNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::UNumberBaseballLib_eventGenerateRandomNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUNumberBaseballLib::execGenerateRandomNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=UUNumberBaseballLib::GenerateRandomNumber();
	P_NATIVE_END;
}
// End Class UUNumberBaseballLib Function GenerateRandomNumber

// Begin Class UUNumberBaseballLib
void UUNumberBaseballLib::StaticRegisterNativesUUNumberBaseballLib()
{
	UClass* Class = UUNumberBaseballLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckGuess", &UUNumberBaseballLib::execCheckGuess },
		{ "GenerateRandomNumber", &UUNumberBaseballLib::execGenerateRandomNumber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUNumberBaseballLib);
UClass* Z_Construct_UClass_UUNumberBaseballLib_NoRegister()
{
	return UUNumberBaseballLib::StaticClass();
}
struct Z_Construct_UClass_UUNumberBaseballLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UNumberBaseballLib.h" },
		{ "ModuleRelativePath", "Public/UNumberBaseballLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUNumberBaseballLib_CheckGuess, "CheckGuess" }, // 3788006729
		{ &Z_Construct_UFunction_UUNumberBaseballLib_GenerateRandomNumber, "GenerateRandomNumber" }, // 1129678933
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUNumberBaseballLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUNumberBaseballLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUNumberBaseballLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUNumberBaseballLib_Statics::ClassParams = {
	&UUNumberBaseballLib::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUNumberBaseballLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UUNumberBaseballLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUNumberBaseballLib()
{
	if (!Z_Registration_Info_UClass_UUNumberBaseballLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUNumberBaseballLib.OuterSingleton, Z_Construct_UClass_UUNumberBaseballLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUNumberBaseballLib.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UUNumberBaseballLib>()
{
	return UUNumberBaseballLib::StaticClass();
}
UUNumberBaseballLib::UUNumberBaseballLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUNumberBaseballLib);
UUNumberBaseballLib::~UUNumberBaseballLib() {}
// End Class UUNumberBaseballLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGuessResult::StaticStruct, Z_Construct_UScriptStruct_FGuessResult_Statics::NewStructOps, TEXT("GuessResult"), &Z_Registration_Info_UScriptStruct_GuessResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGuessResult), 2859884212U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUNumberBaseballLib, UUNumberBaseballLib::StaticClass, TEXT("UUNumberBaseballLib"), &Z_Registration_Info_UClass_UUNumberBaseballLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUNumberBaseballLib), 1857497268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_1149664365(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

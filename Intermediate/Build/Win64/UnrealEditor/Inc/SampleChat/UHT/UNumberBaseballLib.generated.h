// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UNumberBaseballLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuessResult;
#ifdef SAMPLECHAT_UNumberBaseballLib_generated_h
#error "UNumberBaseballLib.generated.h already included, missing '#pragma once' in UNumberBaseballLib.h"
#endif
#define SAMPLECHAT_UNumberBaseballLib_generated_h

#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGuessResult_Statics; \
	SAMPLECHAT_API static class UScriptStruct* StaticStruct();


template<> SAMPLECHAT_API UScriptStruct* StaticStruct<struct FGuessResult>();

#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckGuess); \
	DECLARE_FUNCTION(execGenerateRandomNumber);


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUNumberBaseballLib(); \
	friend struct Z_Construct_UClass_UUNumberBaseballLib_Statics; \
public: \
	DECLARE_CLASS(UUNumberBaseballLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UUNumberBaseballLib)


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUNumberBaseballLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUNumberBaseballLib(UUNumberBaseballLib&&); \
	UUNumberBaseballLib(const UUNumberBaseballLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUNumberBaseballLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUNumberBaseballLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUNumberBaseballLib) \
	NO_API virtual ~UUNumberBaseballLib();


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_30_PROLOG
#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UUNumberBaseballLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_UNumberBaseballLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

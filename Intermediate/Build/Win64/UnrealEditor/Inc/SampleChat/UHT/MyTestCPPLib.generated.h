// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestCPPLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_MyTestCPPLib_generated_h
#error "MyTestCPPLib.generated.h already included, missing '#pragma once' in MyTestCPPLib.h"
#endif
#define SAMPLECHAT_MyTestCPPLib_generated_h

#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateStrikeBallOut); \
	DECLARE_FUNCTION(execGenerateRandomThreeDigit);


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyTestCPPLib(); \
	friend struct Z_Construct_UClass_UMyTestCPPLib_Statics; \
public: \
	DECLARE_CLASS(UMyTestCPPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UMyTestCPPLib)


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyTestCPPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyTestCPPLib(UMyTestCPPLib&&); \
	UMyTestCPPLib(const UMyTestCPPLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyTestCPPLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyTestCPPLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyTestCPPLib) \
	NO_API virtual ~UMyTestCPPLib();


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_7_PROLOG
#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UMyTestCPPLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_MyTestCPPLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

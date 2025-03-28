// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseballGameWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_BaseballGameWidget_generated_h
#error "BaseballGameWidget.generated.h already included, missing '#pragma once' in BaseballGameWidget.h"
#endif
#define SAMPLECHAT_BaseballGameWidget_generated_h

#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTurnIndicator); \
	DECLARE_FUNCTION(execFocusChatInputBox); \
	DECLARE_FUNCTION(execUpdateGameMessage); \
	DECLARE_FUNCTION(execOnTextCommitted);


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseballGameWidget(); \
	friend struct Z_Construct_UClass_UBaseballGameWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseballGameWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UBaseballGameWidget)


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseballGameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseballGameWidget(UBaseballGameWidget&&); \
	UBaseballGameWidget(const UBaseballGameWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseballGameWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseballGameWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseballGameWidget) \
	NO_API virtual ~UBaseballGameWidget();


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_15_PROLOG
#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UBaseballGameWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

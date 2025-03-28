// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseballPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_BaseballPlayerController_generated_h
#error "BaseballPlayerController.generated.h already included, missing '#pragma once' in BaseballPlayerController.h"
#endif
#define SAMPLECHAT_BaseballPlayerController_generated_h

#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_SendChatMessage_Implementation(const FString& Message); \
	DECLARE_FUNCTION(execOnChatMessageReceived); \
	DECLARE_FUNCTION(execServer_SendChatMessage);


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_CALLBACK_WRAPPERS
#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseballPlayerController(); \
	friend struct Z_Construct_UClass_ABaseballPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABaseballPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ABaseballPlayerController)


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseballPlayerController(ABaseballPlayerController&&); \
	ABaseballPlayerController(const ABaseballPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseballPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseballPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseballPlayerController) \
	NO_API virtual ~ABaseballPlayerController();


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_10_PROLOG
#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_CALLBACK_WRAPPERS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ABaseballPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

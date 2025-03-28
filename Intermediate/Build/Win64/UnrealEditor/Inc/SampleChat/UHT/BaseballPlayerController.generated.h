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

#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatMessageReceived);


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseballPlayerController(); \
	friend struct Z_Construct_UClass_ABaseballPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABaseballPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ABaseballPlayerController)


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseballPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseballPlayerController(ABaseballPlayerController&&); \
	ABaseballPlayerController(const ABaseballPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseballPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseballPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseballPlayerController) \
	NO_API virtual ~ABaseballPlayerController();


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_13_PROLOG
#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ABaseballPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

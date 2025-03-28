// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseballGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_BaseballGameState_generated_h
#error "BaseballGameState.generated.h already included, missing '#pragma once' in BaseballGameState.h"
#endif
#define SAMPLECHAT_BaseballGameState_generated_h

#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_8_DELEGATE \
SAMPLECHAT_API void FOnGameMessageChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameMessageChanged);


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_9_DELEGATE \
SAMPLECHAT_API void FOnTurnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnChanged);


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentTurn); \
	DECLARE_FUNCTION(execOnRep_GameMessage);


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseballGameState(); \
	friend struct Z_Construct_UClass_ABaseballGameState_Statics; \
public: \
	DECLARE_CLASS(ABaseballGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ABaseballGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentGameMessage=NETFIELD_REP_START, \
		CurrentTurn, \
		NETFIELD_REP_END=CurrentTurn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseballGameState(ABaseballGameState&&); \
	ABaseballGameState(const ABaseballGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseballGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseballGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseballGameState) \
	NO_API virtual ~ABaseballGameState();


#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_11_PROLOG
#define FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ABaseballGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gangh_Downloads_SampleChat_SampleChat_Source_SampleChat_Public_BaseballGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

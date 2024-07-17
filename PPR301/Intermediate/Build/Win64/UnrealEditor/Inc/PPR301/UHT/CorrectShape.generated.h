// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CorrectShape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PPR301_CorrectShape_generated_h
#error "CorrectShape.generated.h already included, missing '#pragma once' in CorrectShape.h"
#endif
#define PPR301_CorrectShape_generated_h

#define FID_PPR301_Source_PPR301_Public_CorrectShape_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_PPR301_Source_PPR301_Public_CorrectShape_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACorrectShape(); \
	friend struct Z_Construct_UClass_ACorrectShape_Statics; \
public: \
	DECLARE_CLASS(ACorrectShape, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PPR301"), NO_API) \
	DECLARE_SERIALIZER(ACorrectShape)


#define FID_PPR301_Source_PPR301_Public_CorrectShape_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACorrectShape(ACorrectShape&&); \
	ACorrectShape(const ACorrectShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACorrectShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACorrectShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACorrectShape) \
	NO_API virtual ~ACorrectShape();


#define FID_PPR301_Source_PPR301_Public_CorrectShape_h_12_PROLOG
#define FID_PPR301_Source_PPR301_Public_CorrectShape_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PPR301_Source_PPR301_Public_CorrectShape_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PPR301_Source_PPR301_Public_CorrectShape_h_15_INCLASS_NO_PURE_DECLS \
	FID_PPR301_Source_PPR301_Public_CorrectShape_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PPR301_API UClass* StaticClass<class ACorrectShape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PPR301_Source_PPR301_Public_CorrectShape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

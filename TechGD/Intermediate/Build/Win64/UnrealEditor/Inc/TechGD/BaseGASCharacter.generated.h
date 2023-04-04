// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
#ifdef TECHGD_BaseGASCharacter_generated_h
#error "BaseGASCharacter.generated.h already included, missing '#pragma once' in BaseGASCharacter.h"
#endif
#define TECHGD_BaseGASCharacter_generated_h

#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_SPARSE_DATA
#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeAbility);


#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeAbility);


#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGASCharacter(); \
	friend struct Z_Construct_UClass_ABaseGASCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseGASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechGD"), NO_API) \
	DECLARE_SERIALIZER(ABaseGASCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseGASCharacter*>(this); }


#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseGASCharacter(); \
	friend struct Z_Construct_UClass_ABaseGASCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseGASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechGD"), NO_API) \
	DECLARE_SERIALIZER(ABaseGASCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseGASCharacter*>(this); }


#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGASCharacter(ABaseGASCharacter&&); \
	NO_API ABaseGASCharacter(const ABaseGASCharacter&); \
public:


#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGASCharacter(ABaseGASCharacter&&); \
	NO_API ABaseGASCharacter(const ABaseGASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGASCharacter)


#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_12_PROLOG
#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_SPARSE_DATA \
	FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_RPC_WRAPPERS \
	FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_INCLASS \
	FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_SPARSE_DATA \
	FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECHGD_API UClass* StaticClass<class ABaseGASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

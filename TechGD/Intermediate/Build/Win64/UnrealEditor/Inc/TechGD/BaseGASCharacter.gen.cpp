// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechGD/Public/BaseGASCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGASCharacter() {}
// Cross Module References
	TECHGD_API UClass* Z_Construct_UClass_ABaseGASCharacter_NoRegister();
	TECHGD_API UClass* Z_Construct_UClass_ABaseGASCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TechGD();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseGASCharacter::execInitializeAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToGet);
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAbility(Z_Param_AbilityToGet,Z_Param_AbilityLevel);
		P_NATIVE_END;
	}
	void ABaseGASCharacter::StaticRegisterNativesABaseGASCharacter()
	{
		UClass* Class = ABaseGASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeAbility", &ABaseGASCharacter::execInitializeAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics
	{
		struct BaseGASCharacter_eventInitializeAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityToGet;
			int32 AbilityLevel;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGet;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::NewProp_AbilityToGet = { "AbilityToGet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGASCharacter_eventInitializeAbility_Parms, AbilityToGet), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGASCharacter_eventInitializeAbility_Parms, AbilityLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::NewProp_AbilityToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::NewProp_AbilityLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseCharacter" },
		{ "ModuleRelativePath", "Public/BaseGASCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGASCharacter, nullptr, "InitializeAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::BaseGASCharacter_eventInitializeAbility_Parms), Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGASCharacter);
	UClass* Z_Construct_UClass_ABaseGASCharacter_NoRegister()
	{
		return ABaseGASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TechGD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseGASCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseGASCharacter_InitializeAbility, "InitializeAbility" }, // 3988322326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseGASCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseGASCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGASCharacter_Statics::NewProp_AbilitySystemComp_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGASCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGASCharacter_Statics::NewProp_AbilitySystemComp = { "AbilitySystemComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGASCharacter, AbilitySystemComp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGASCharacter_Statics::NewProp_AbilitySystemComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGASCharacter_Statics::NewProp_AbilitySystemComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGASCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGASCharacter_Statics::NewProp_AbilitySystemComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseGASCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseGASCharacter, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGASCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGASCharacter_Statics::ClassParams = {
		&ABaseGASCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseGASCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGASCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGASCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGASCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGASCharacter()
	{
		if (!Z_Registration_Info_UClass_ABaseGASCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGASCharacter.OuterSingleton, Z_Construct_UClass_ABaseGASCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGASCharacter.OuterSingleton;
	}
	template<> TECHGD_API UClass* StaticClass<ABaseGASCharacter>()
	{
		return ABaseGASCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGASCharacter);
	struct Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGASCharacter, ABaseGASCharacter::StaticClass, TEXT("ABaseGASCharacter"), &Z_Registration_Info_UClass_ABaseGASCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGASCharacter), 46457733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_4243515975(TEXT("/Script/TechGD"),
		Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseGASCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechGD/Public/BaseAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttributeSet() {}
// Cross Module References
	TECHGD_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
	TECHGD_API UClass* Z_Construct_UClass_UBaseAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_TechGD();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	void UBaseAttributeSet::StaticRegisterNativesUBaseAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAttributeSet);
	UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister()
	{
		return UBaseAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_TechGD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseAttributeSet.h" },
		{ "ModuleRelativePath", "Public/BaseAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "BaseAttribute" },
		{ "ModuleRelativePath", "Public/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "BaseAttribute" },
		{ "ModuleRelativePath", "Public/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "BaseAttribute" },
		{ "ModuleRelativePath", "Public/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "BaseAttribute" },
		{ "ModuleRelativePath", "Public/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "BaseAttribute" },
		{ "ModuleRelativePath", "Public/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Stamina_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "BaseAttribute" },
		{ "ModuleRelativePath", "Public/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxStamina_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxStamina,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams = {
		&UBaseAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton, Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton;
	}
	template<> TECHGD_API UClass* StaticClass<UBaseAttributeSet>()
	{
		return UBaseAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttributeSet);
	struct Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributeSet, UBaseAttributeSet::StaticClass, TEXT("UBaseAttributeSet"), &Z_Registration_Info_UClass_UBaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributeSet), 712439099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseAttributeSet_h_4065761176(TEXT("/Script/TechGD"),
		Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TechGD_Source_TechGD_Public_BaseAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

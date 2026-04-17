// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Person.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePerson() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEUTILITY_API UClass* Z_Construct_UClass_UPerson();
GAMEUTILITY_API UClass* Z_Construct_UClass_UPerson_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtility();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPerson ******************************************************************
void UPerson::StaticRegisterNativesUPerson()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPerson;
UClass* UPerson::GetPrivateStaticClass()
{
	using TClass = UPerson;
	if (!Z_Registration_Info_UClass_UPerson.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Person"),
			Z_Registration_Info_UClass_UPerson.InnerSingleton,
			StaticRegisterNativesUPerson,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPerson.InnerSingleton;
}
UClass* Z_Construct_UClass_UPerson_NoRegister()
{
	return UPerson::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Person.h" },
		{ "ModuleRelativePath", "Public/Person.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerson_Statics::ClassParams = {
	&UPerson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerson()
{
	if (!Z_Registration_Info_UClass_UPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerson.OuterSingleton, Z_Construct_UClass_UPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerson.OuterSingleton;
}
UPerson::UPerson(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerson);
UPerson::~UPerson() {}
// ********** End Class UPerson ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Workspace_RonnieJ_Wanted4th_UnrealProjects_UnrealBuildSystem_Plugins_GameUtility_Source_GameUtility_Public_Person_h__Script_GameUtility_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerson, UPerson::StaticClass, TEXT("UPerson"), &Z_Registration_Info_UClass_UPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerson), 162280623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_RonnieJ_Wanted4th_UnrealProjects_UnrealBuildSystem_Plugins_GameUtility_Source_GameUtility_Public_Person_h__Script_GameUtility_664482475(TEXT("/Script/GameUtility"),
	Z_CompiledInDeferFile_FID_Workspace_RonnieJ_Wanted4th_UnrealProjects_UnrealBuildSystem_Plugins_GameUtility_Source_GameUtility_Public_Person_h__Script_GameUtility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_RonnieJ_Wanted4th_UnrealProjects_UnrealBuildSystem_Plugins_GameUtility_Source_GameUtility_Public_Person_h__Script_GameUtility_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoreTiers.h"

#define LOCTEXT_NAMESPACE "FMoreTiersModule"

void FMoreTiersModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FMoreTiersModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMoreTiersModule, MoreTiers)
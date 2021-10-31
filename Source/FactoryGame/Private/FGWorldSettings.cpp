// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWorldSettings.h"
#include "GameFramework/GameNetworkManager.h"
#include "GameFramework/DefaultPhysicsVolume.h"

#if WITH_EDITOR
void AFGWorldSettings::CheckForErrors(){ Super::CheckForErrors(); }
void AFGWorldSettings::PostEditChangeProperty( FPropertyChangedEvent& propertyChangedEvent){ Super::PostEditChangeProperty(propertyChangedEvent); }
#endif 
#if WITH_EDITOR
void AFGWorldSettings::HandleMapChanged( UWorld* newWorld, EMapChangeType mapChangeType){ }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
AFGWorldSettings::AFGWorldSettings() : Super() {
	this->mDefaultHeightFogSettings.FogHeight = 5000.0;
	this->mDefaultHeightFogSettings.FogDensity = 0.02;
	this->mDefaultHeightFogSettings.FogInscatteringColor.R = 0.0;
	this->mDefaultHeightFogSettings.FogInscatteringColor.G = 0.0;
	this->mDefaultHeightFogSettings.FogInscatteringColor.B = 0.0;
	this->mDefaultHeightFogSettings.FogInscatteringColor.A = 1.0;
	this->mDefaultHeightFogSettings.FullyDirectionalInscatteringColorDistance = 100000.0;
	this->mDefaultHeightFogSettings.NonDirectionalInscatteringColorDistance = 1000.0;
	this->mDefaultHeightFogSettings.DirectionalInscatteringExponent = 4.0;
	this->mDefaultHeightFogSettings.DirectionalInscatteringStartDistance = 10000.0;
	this->mDefaultHeightFogSettings.DirectionalInscatteringColor.R = 0.0;
	this->mDefaultHeightFogSettings.DirectionalInscatteringColor.G = 0.0;
	this->mDefaultHeightFogSettings.DirectionalInscatteringColor.B = 0.0;
	this->mDefaultHeightFogSettings.DirectionalInscatteringColor.A = 1.0;
	this->mDefaultHeightFogSettings.FogHeightFalloff = 0.2;
	this->mDefaultHeightFogSettings.FogMaxOpacity = 1.0;
	this->mDefaultHeightFogSettings.StartDistance = 0.0;
	this->mDefaultHeightFogSettings.FogCutoffDistance = 0.0;
	this->mDefaultHeightFogSettings.SecondFogDensity = 0.0;
	this->mDefaultHeightFogSettings.SecondFogHeightFalloff = 0.2;
	this->mDefaultHeightFogSettings.SecondFogHeightOffset = 0.0;
	this->mExponentialHeightFog = nullptr;
	this->mSkyAtmosphere = nullptr;
	this->mSkySphere = nullptr;
	this->mMinimapCaptureActor = nullptr;
	this->mLevelStartedEvent = nullptr;
	this->mDefaultLoadSave = TEXT("");
	this->mStartTimeOfDay = 12.0;
	this->mBuildableSubsystem = nullptr;
	this->mAudioVolumeSubsystem = nullptr;
	this->mFoliageRemovalSubsystem = nullptr;
	this->mConveyorItemSubsystem = nullptr;
	this->mPhotoModeManager = nullptr;
}
void AFGWorldSettings::BeginDestroy(){ Super::BeginDestroy(); }
void AFGWorldSettings::PostActorCreated(){ Super::PostActorCreated(); }
void AFGWorldSettings::PostLoad(){ Super::PostLoad(); }
void AFGWorldSettings::PreInitializeComponents(){ Super::PreInitializeComponents(); }
void AFGWorldSettings::NotifyBeginPlay(){ Super::NotifyBeginPlay(); }
void AFGWorldSettings::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWorldSettings::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWorldSettings::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWorldSettings::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWorldSettings::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGWorldSettings::NeedTransform_Implementation(){ return bool(); }
bool AFGWorldSettings::ShouldSave_Implementation() const{ return bool(); }
AExponentialHeightFog* AFGWorldSettings::GetExponentialHeightFog() const{ return nullptr; }
ASkyAtmosphere* AFGWorldSettings::GetSkyAtmosphere() const{ return nullptr; }
AFGSkySphere* AFGWorldSettings::GetSkySphere() const{ return nullptr; }
void AFGWorldSettings::UpdateWorldBounds(){ }
void AFGWorldSettings::OnActorSpawned(AActor* actor){ }

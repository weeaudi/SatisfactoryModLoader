// This file has been automatically generated by the Unreal Header Implementation tool

#include "Server/FGServerStateListener.h"

void IFGServerStateListener::NativeOnServerStateChanged( UFGServerObject* Server, EServerState State){ }
void IFGServerStateListener::NativeOnServerGameStateChanged( UFGServerObject* Server, const FServerGameState& GameState){ }
void IFGServerStateListener::NativeOnServerConnectionStateChanged( UFGServerObject* Server, EBeaconConnectionState ConnectionState){ }
void IFGServerStateListener::NativeOnServerAuthenticationChanged( UFGServerObject* Server, const FServerAuthenticationToken& AuthToken){ }
void IFGServerStateListener::NativeOnServerRenamed( UFGServerObject* Server, const FString& Name){ }
void IFGServerStateListener::NativeOnServerComplexStateChanged( UFGServerObject* Server, EServerComplexState State){ }
void IFGServerStateListener::NativeOnNewServerConsoleOutput( UFGServerObject* Server, const FString& NewOutput){ }
void IFGServerStateListener::NativeOnServerBasicSettingsUpdate( UFGServerObject* Server, const FServerBasicSettings& BasicSettings){ }

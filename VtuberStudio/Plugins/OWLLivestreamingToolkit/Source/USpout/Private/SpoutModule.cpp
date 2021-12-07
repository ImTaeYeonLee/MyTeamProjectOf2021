// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#include "SpoutModule.h"
#include "Interfaces/IPluginManager.h"
#include "Core.h"

DEFINE_LOG_CATEGORY(OWLSpoutLog);

#define LOCTEXT_NAMESPACE "FSpoutModule"

void FSpoutModule::StartupModule()
{
	FString SpoutBinPath = IPluginManager::Get()
		.FindPlugin("OWLLiveStreamingToolkit")->GetBaseDir()
		.Append(FString(TEXT("/Source/ThirdParty/Spout/Spout2/BUILD/Binaries/x64")));

	FString SpoutDXDLLPath = SpoutBinPath + FString((TEXT("/SpoutDX.dll")));
	FString SpoutDX12DLLPath = SpoutBinPath + FString(TEXT("/SpoutDX12.dll"));
	
	SpoutDXDLLHandle = FPlatformProcess::GetDllHandle(*SpoutDXDLLPath);
	SpoutDX12DLLHandle = FPlatformProcess::GetDllHandle(*SpoutDX12DLLPath);
}

void FSpoutModule::ShutdownModule()
{
	FPlatformProcess::FreeDllHandle(SpoutDXDLLHandle);
	SpoutDXDLLHandle = nullptr;
	FPlatformProcess::FreeDllHandle(SpoutDX12DLLHandle);
	SpoutDX12DLLHandle = nullptr;
}

IMPLEMENT_MODULE(FSpoutModule, USpout)

#undef LOCTEXT_NAMESPACE
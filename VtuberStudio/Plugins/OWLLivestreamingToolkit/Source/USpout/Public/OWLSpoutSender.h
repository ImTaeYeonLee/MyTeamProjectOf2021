// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "OWLSpoutTools.h"
#include "Engine/TextureRenderTarget2D.h"

#include "Windows/AllowWindowsPlatformTypes.h"
THIRD_PARTY_INCLUDES_START
#define WIN32_LEAN_AND_MEAN
#pragma warning(push)
// macro redefinition in DirectX headers from ThirdParty folder while they are already defined by <winerror.h> included 
// from "Windows/AllowWindowsPlatformTypes.h"
#pragma warning(disable: 4005)
#include <d3d11.h>
#include <d3d12.h>
#pragma warning(pop)
THIRD_PARTY_INCLUDES_END
#include "Windows/HideWindowsPlatformTypes.h"

class USPOUT_API OWLSpoutSender
{
private:
	OWLSpoutTools::ERHIType RHIType = OWLSpoutTools::ERHIType::Null;

public:
	class spoutDX* Sender = nullptr;

	bool Initialised = false;
	bool FailedToInitialise = false;

private:
	bool InitDX();
	void Send(FString name, UTextureRenderTarget2D* srcRenderTarget);

public:
	~OWLSpoutSender();
	void SendRenderTarget(FString name, UTextureRenderTarget2D* textureRenderTarget2D);
	void Close();
};
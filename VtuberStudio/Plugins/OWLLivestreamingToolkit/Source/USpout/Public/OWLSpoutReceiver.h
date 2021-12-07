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

class USPOUT_API OWLSpoutReceiver
{
private:
	class spoutDX* Receiver = nullptr;

	ID3D11Texture2D* ReceivedTextureDX11 = nullptr;
	ID3D12Resource* ReceivedResourceDX12 = nullptr;
	FTextureRHIRef ReceivedTextureFromResourceDX12;

	bool AlreadyClear = true;

	OWLSpoutTools::ERHIType RHIType = OWLSpoutTools::ERHIType::Null;

	bool FailedToInitialise = false;

public:
	bool Initialised = false;

private:
	bool InitDX();

	void Receive(FString Name, UTextureRenderTarget2D* DestRenderTarget);
	void CopyResource(UTextureRenderTarget2D* DestRenderTarget);

	FString GetFirstAvailableName() const;
	FTextureRHIRef CreateRHITexture(ID3D12Resource* Resource, EPixelFormat Format);

public:
	~OWLSpoutReceiver();
	void ReceiveRenderTarget(FString name, UTextureRenderTarget2D* textureRenderTarget2D, bool useFirstAvailableSender);
	void Close();
};

class USPOUT_API OWLSpoutNames
{
private:
	static class spoutDX* SpoutInstance;
public:
	static TArray<FString> GetActiveSenderNames();
	static void Cleanup();
};
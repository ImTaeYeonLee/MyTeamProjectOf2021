// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#include "USpout/Public/OWLSpoutReceiver.h"
#include "SpoutModule.h"
#include "ClearQuad.h"
#include "SpoutDX.h"
#include "SpoutDX12/SpoutDX12.h"
#include "D3D12RHIPrivate.h"

void OWLSpoutReceiver::ReceiveRenderTarget(FString name, UTextureRenderTarget2D* textureRenderTarget2D, bool useFirstAvailableSender)
{
	if (FailedToInitialise) return;

	if(!Initialised)
	{
		FString rhiString = GDynamicRHI->GetName();
		RHIType = OWLSpoutTools::StringToRHIType(rhiString);

		if (RHIType == OWLSpoutTools::ERHIType::D3D11 || RHIType == OWLSpoutTools::ERHIType::D3D12)
		{
			InitDX();
		}
		else
		{
			FailedToInitialise = true;
			UE_LOG(OWLSpoutLog, Warning, TEXT("%s is incompatible with the Spout interface. Please use D3D11 or D3D12."), *rhiString);
		}
	}

	const FString ActualName = useFirstAvailableSender ? GetFirstAvailableName() : name;

	Receive(ActualName, textureRenderTarget2D);
}

void OWLSpoutReceiver::Close()
{
	Initialised = false;

	if (!Receiver) return;

	Receiver->ReleaseReceiver();

	if (RHIType == OWLSpoutTools::ERHIType::D3D11)
	{
		Receiver->CloseDirectX11();

		if (ReceivedTextureDX11) ReceivedTextureDX11->Release();
		ReceivedTextureDX11 = nullptr;
	}
	else if (RHIType == OWLSpoutTools::ERHIType::D3D12)
	{
		if (spoutDX12* receiverDX12 = static_cast<spoutDX12*>(Receiver))
		{
			receiverDX12->CloseDirectX12();
		}

		if (ReceivedResourceDX12) ReceivedResourceDX12->Release();
		ReceivedResourceDX12 = nullptr;

		if (ReceivedTextureFromResourceDX12.IsValid())
		{
			ReceivedTextureFromResourceDX12.SafeRelease();
		}
	}
}

FString OWLSpoutReceiver::GetFirstAvailableName() const
{
	unsigned int dummyH, dummyW;
	HANDLE dummyHandle;
	char senderName[256];

	if (Receiver->GetSenderCount() <= 0) return FString("");
	Receiver->sendernames.GetSenderNameInfo(0, senderName, 256, dummyW, dummyH, dummyHandle);

	return FString(ANSI_TO_TCHAR(senderName));
}

bool OWLSpoutReceiver::InitDX()
{
	if (RHIType == OWLSpoutTools::ERHIType::D3D11)
	{
		if (!Receiver)
		{
			Receiver = new spoutDX;
		}

		Initialised = Receiver->OpenDirectX11();
	}
	else if (RHIType == OWLSpoutTools::ERHIType::D3D12)
	{
		if (!Receiver)
		{
			Receiver = new spoutDX12;
		}

		if (spoutDX12* receiverDX12 = static_cast<spoutDX12*>(Receiver))
		{
			Initialised = receiverDX12->OpenDirectX12();
		}
	}

	return Initialised;
}

ETextureRenderTargetFormat GetRTFormatFromDX(DXGI_FORMAT DxFormat)
{
	switch (DxFormat)
	{
		case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
			return ETextureRenderTargetFormat::RTF_RGBA8_SRGB;
		case DXGI_FORMAT_R8G8B8A8_UINT:
			return ETextureRenderTargetFormat::RTF_RGBA8;
		case DXGI_FORMAT_R8G8B8A8_UNORM:
			return ETextureRenderTargetFormat::RTF_RGBA8;
		case DXGI_FORMAT_R16G16B16A16_FLOAT:
			return ETextureRenderTargetFormat::RTF_RGBA16f;
		case DXGI_FORMAT_R32G32B32A32_FLOAT:
			return ETextureRenderTargetFormat::RTF_RGBA32f;
		default:
			return ETextureRenderTargetFormat::RTF_RGBA8_SRGB;
	}
}

void OWLSpoutReceiver::Receive(FString Name, UTextureRenderTarget2D* DestRenderTarget)
{
	if (DestRenderTarget == nullptr
		|| DestRenderTarget->Resource == nullptr
		|| DestRenderTarget->Resource->TextureRHI == nullptr
		|| DestRenderTarget->Resource->TextureRHI->GetTexture2D() == nullptr
		|| !Receiver)
	{
		// this is a safety check in case user is regenerating the resource
		// for example this happens while resizing
		return;
	}

	DXGI_FORMAT format = Receiver->GetSenderFormat();

	ETextureRenderTargetFormat expectedFormat = GetRTFormatFromDX(format);

	if (DestRenderTarget->RenderTargetFormat != expectedFormat)
	{
		DestRenderTarget->RenderTargetFormat = expectedFormat;
		DestRenderTarget->UpdateResource();

		FString targetFormat = UEnum::GetValueAsString(expectedFormat);
		UE_LOG(OWLSpoutLog, Warning, TEXT("Setting format to %s on Render Target %s"), *targetFormat, *DestRenderTarget->GetFName().GetPlainNameString());

		return;
	}
	
	if (Receiver->GetName() != Name)
	{
		Receiver->ReleaseReceiver();
		Receiver->SetReceiverName(TCHAR_TO_ANSI(*Name));
	}

	if (!Receiver->sendernames.FindSenderName(TCHAR_TO_ANSI(*Name)))
	{
		if (!AlreadyClear)
		{
			// no texture to receive so we clear render target
			DestRenderTarget->UpdateResourceImmediate(true);
			AlreadyClear = true;
		}

		return;
	}

	bool Received = false;
	if (RHIType == OWLSpoutTools::ERHIType::D3D11)
	{
		Received = Receiver->ReceiveTexture(&ReceivedTextureDX11);
	}
	else if (RHIType == OWLSpoutTools::ERHIType::D3D12)
	{
		if (spoutDX12* receiverDX12 = static_cast<spoutDX12*>(Receiver))
		{
			Received = receiverDX12->ReceiveDX12Resource(&ReceivedResourceDX12);
		}
	}

	if (Received)
	{
		if (Receiver->IsUpdated()) // If the incoming sender was resized, we need to remake our holding texture
		{
			if (RHIType == OWLSpoutTools::ERHIType::D3D11)
			{
				if (ReceivedTextureDX11) ReceivedTextureDX11->Release();
				ReceivedTextureDX11 = nullptr;

				Receiver->CreateDX11texture(
					Receiver->GetDX11Device(),
					Receiver->GetSenderWidth(),
					Receiver->GetSenderHeight(),
					Receiver->GetSenderFormat(),
					&ReceivedTextureDX11);
			}
			else if (RHIType == OWLSpoutTools::ERHIType::D3D12)
			{
				if (ReceivedResourceDX12) ReceivedResourceDX12->Release();
				ReceivedResourceDX12 = nullptr;

				if (spoutDX12* receiverDX12 = static_cast<spoutDX12*>(Receiver))
				{
					receiverDX12->CreateDX12texture(
						receiverDX12->GetD3D12device(),
						receiverDX12->GetSenderWidth(),
						receiverDX12->GetSenderHeight(),
						D3D12_RESOURCE_STATE_COPY_DEST,
						receiverDX12->GetSenderFormat(),
						&ReceivedResourceDX12);
				}
			}
		}
		
		if (DestRenderTarget->GetSurfaceWidth() != Receiver->GetSenderWidth() ||
			DestRenderTarget->GetSurfaceHeight() != Receiver->GetSenderHeight())
		{
			DestRenderTarget->ResizeTarget(Receiver->GetSenderWidth(), Receiver->GetSenderHeight());
			DestRenderTarget->UpdateResourceImmediate();
		}

		if (!DestRenderTarget)
		{
			return; // Will be null while resizing, give it a chance to finish resizing
		}

		CopyResource(DestRenderTarget);
	}
}

void OWLSpoutReceiver::CopyResource(UTextureRenderTarget2D* DestRenderTarget)
{
	if (!DestRenderTarget || !DestRenderTarget->Resource) return;

	if (RHIType == OWLSpoutTools::ERHIType::D3D11)
	{
		ID3D11Texture2D* TargetTex = static_cast<ID3D11Texture2D*>(DestRenderTarget->Resource->GetTexture2DRHI()->GetNativeResource());

		ENQUEUE_RENDER_COMMAND(RHICmdList)(
		[this, TargetTex](FRHICommandListImmediate& RHICmdList)
		{
			Receiver->GetDX11Context()->CopyResource(TargetTex, ReceivedTextureDX11);
			Receiver->GetDX11Context()->Flush();
		});
	}
	else if (RHIType == OWLSpoutTools::ERHIType::D3D12)
	{
		ENQUEUE_RENDER_COMMAND(RHICmdList)(
	[this, DestRenderTarget](FRHICommandListImmediate& RHICmdList)
		{
		//----------------------------------------------------------------------------------------
			// Would be better if we didn't have to create a new texture every frame, but could copy the contents directly
			// Have 2 methods, but cannot get the specific RHI ID2D12CommandList

			// Option 1: Copy Resource
			// FD3D12DynamicRHI* DynamicRHI = static_cast<FD3D12DynamicRHI*>(GDynamicRHI);
			// FD3D12Device* Device = static_cast<FD3D12Device*>(DynamicRHI->RHIGetNativeDevice());
			// FD3D12CommandListHandle Handle =  DynamicRHI->CreateCommandContext(Device, false, false)->CommandListHandle;
			// Handle->CopyResource(
			// 	static_cast<ID3D12Resource*>(DestRenderTarget->GetResource()->TextureRHI->GetNativeResource()),
			// 	ReceivedResourceDX12
			// 	);

			// Option 2: Copy Texture Region
			// CD3DX12_TEXTURE_COPY_LOCATION Dst(ReceivedResourceDX12, 0);
			// CD3DX12_TEXTURE_COPY_LOCATION Src(static_cast<ID3D12Resource*>(DestRenderTarget->GetResource()->TextureRHI->GetNativeResource()), 0);
			// RHICmdList.CopyTextureRegion(&Dst, 0, 0, 0, &Src, nullptr);
		//----------------------------------------------------------------------------------------

			if (ReceivedTextureFromResourceDX12.IsValid())
			{
				ReceivedTextureFromResourceDX12.SafeRelease();
			}

			ReceivedTextureFromResourceDX12 = CreateRHITexture(ReceivedResourceDX12, EPixelFormat::PF_B8G8R8A8);

			RHICmdList.CopyToResolveTarget(
	ReceivedTextureFromResourceDX12,
	DestRenderTarget->Resource->GetTexture2DRHI(),
			FResolveParams());
		});
	}

	AlreadyClear = false;
}

FTextureRHIRef OWLSpoutReceiver::CreateRHITexture(ID3D12Resource* Resource, EPixelFormat Format)
{
	FD3D12DynamicRHI* DynamicRHI = static_cast<FD3D12DynamicRHI*>(GDynamicRHI);
	ETextureCreateFlags TexCreateFlags = TexCreate_ShaderResource | TexCreate_RenderTargetable |  TexCreate_Shared;
	return DynamicRHI->RHICreateTexture2DFromResource(Format, TexCreateFlags, FClearValueBinding::None, (ID3D12Resource*)Resource).GetReference();
}

OWLSpoutReceiver::~OWLSpoutReceiver()
{
	Close();
}

// OWL SPOUT NAMES
//--------------------------------------------------

spoutDX* OWLSpoutNames::SpoutInstance = nullptr;


TArray<FString> OWLSpoutNames::GetActiveSenderNames()
{
	if (!SpoutInstance)
	{
		SpoutInstance = new spoutDX;
	}

	unsigned int dummyH, dummyW;
	HANDLE dummyHandle;
	int totalSenders = SpoutInstance->GetSenderCount();
	if (totalSenders == 0)
	{
		return TArray<FString>();
	}
	char senderName[256];

	TArray<FString> ActiveSenderNames;
	for (int32 i= 0; i < totalSenders; i++)
	{
		SpoutInstance->sendernames.GetSenderNameInfo(i, senderName, 256, dummyW, dummyH, dummyHandle);
		ActiveSenderNames.Add(FString(ANSI_TO_TCHAR(senderName)));
	}

	return ActiveSenderNames;
}

void OWLSpoutNames::Cleanup()
{
	if (SpoutInstance)
	{
		delete SpoutInstance;
	}
}
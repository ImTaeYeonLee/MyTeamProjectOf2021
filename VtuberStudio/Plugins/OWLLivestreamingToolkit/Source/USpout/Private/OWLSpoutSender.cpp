// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#include "USpout/Public/OWLSpoutSender.h"
#include "SpoutModule.h"
#include "SpoutDX.h"
#include "SpoutDX12/SpoutDX12.h"


void OWLSpoutSender::SendRenderTarget(FString name, UTextureRenderTarget2D* textureRenderTarget2D)
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

	Send(name, textureRenderTarget2D);
}


bool OWLSpoutSender::InitDX()
{
	if (RHIType == OWLSpoutTools::ERHIType::D3D11)
	{
		if (!Sender)
		{
			Sender = new spoutDX;
		}

		if (ID3D11Device* device = static_cast<ID3D11Device*>(GDynamicRHI->RHIGetNativeDevice()))
		{
			Initialised = Sender->OpenDirectX11(device);
		}
	}
	else if (RHIType == OWLSpoutTools::ERHIType::D3D12)
	{
		if (!Sender)
		{
			Sender = new spoutDX12;
		}

		if (spoutDX12* senderDX12 = static_cast<spoutDX12*>(Sender))
		{
			if (ID3D12Device* device = static_cast<ID3D12Device*>(GDynamicRHI->RHIGetNativeDevice()))
			{
				Initialised = senderDX12->OpenDirectX12(device);
			}
		}
	}

	return Initialised;
}

void OWLSpoutSender::Send(FString name, UTextureRenderTarget2D* srcRenderTarget)
{
	if (srcRenderTarget == nullptr
		|| srcRenderTarget->Resource == nullptr
		|| srcRenderTarget->Resource->TextureRHI == nullptr
		|| srcRenderTarget->Resource->TextureRHI->GetTexture2D() == nullptr
		|| !Sender)
	{
		// this is a safety check in case user is regenerating the resource
		// for example this happens while resizing
		return;
	}

	if (srcRenderTarget->RenderTargetFormat != RTF_RGBA16f)
	{
		srcRenderTarget->RenderTargetFormat = RTF_RGBA16f;
		srcRenderTarget->UpdateResource();;
		UE_LOG(OWLSpoutLog, Warning, TEXT("Setting format to RTF_RGBA16f on Render Target %s"), *srcRenderTarget->GetName());
		return;
	}
	
	if (Sender->GetName() != name)
	{
		Sender->ReleaseSender();
		Sender->SetSenderName(TCHAR_TO_ANSI(*name));
	}

	const FRHITexture2D* Src = srcRenderTarget->Resource->GetTexture2DRHI();

	if (RHIType == OWLSpoutTools::D3D11)
	{
		ENQUEUE_RENDER_COMMAND(RHICmdList)(
			[this, Src](FRHICommandListImmediate& RHICmdList)
			{
				if (!Sender) return;

				ID3D11Texture2D* NativeTex = static_cast<ID3D11Texture2D*>(Src->GetNativeResource());
				Sender->SendTexture(NativeTex);
			});
	}
	else if (RHIType == OWLSpoutTools::D3D12)
	{
		ENQUEUE_RENDER_COMMAND(RHICmdList)(
			[this, Src](FRHICommandListImmediate& RHICmdList)
			{
				if (!Sender) return;

				spoutDX12* senderDX12 = static_cast<spoutDX12*>(Sender);
				if (!senderDX12) return;

				// TODO: it is possible that we will only need to wrap it once (or once every resize/ pixel format change) rather than every frame - worth double checking
				ID3D11Resource* WrappedDX11SrcResource = nullptr;
				ID3D12Resource* NativeTex = static_cast<ID3D12Resource*>(Src->GetNativeResource());

				senderDX12->WrapDX12Resource(NativeTex, &WrappedDX11SrcResource, D3D12_RESOURCE_STATE_RENDER_TARGET);
				if (WrappedDX11SrcResource)
				{
					senderDX12->SendDX11Resource(WrappedDX11SrcResource);
				}
			});
	}
}

OWLSpoutSender::~OWLSpoutSender()
{
	Close();
}

void OWLSpoutSender::Close()
{
	Initialised = false;

	if (!Sender) return;

	Sender->ReleaseSender();

	if (RHIType == OWLSpoutTools::D3D11)
	{
		Sender->CloseDirectX11();
	}
	else if (RHIType == OWLSpoutTools::D3D12)
	{
		if (spoutDX12* senderDX12 = static_cast<spoutDX12*>(Sender))
		{
			senderDX12->CloseDirectX12();
		}
	}
}
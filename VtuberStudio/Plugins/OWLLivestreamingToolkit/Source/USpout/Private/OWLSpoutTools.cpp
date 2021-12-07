#include "OWLSpoutTools.h"

namespace OWLSpoutTools
{
	ERHIType StringToRHIType(FString rhiString)
	{
		if (rhiString.Equals("D3D10", ESearchCase::IgnoreCase))
		{
			return ERHIType::D3D10;
		}
		else if (rhiString.Equals("D3D11", ESearchCase::IgnoreCase))
		{
			return ERHIType::D3D11;
		}
		else if (rhiString.Equals("D3D12", ESearchCase::IgnoreCase))
		{
			return ERHIType::D3D12;
		}
		else if (rhiString.Equals("OpenGL", ESearchCase::IgnoreCase))
		{
			return ERHIType::OpenGL;
		}
		else if (rhiString.Equals("OpenGL3", ESearchCase::IgnoreCase))
		{
			return ERHIType::OpenGL3;
		}
		else if (rhiString.Equals("OpenGL4", ESearchCase::IgnoreCase))
		{
			return ERHIType::OpenGL4;
		}
		else if (rhiString.Equals("Vulkan", ESearchCase::IgnoreCase))
		{
			return ERHIType::Vulkan;
		}
		else
		{
			return ERHIType::Null;
		}
	}
}
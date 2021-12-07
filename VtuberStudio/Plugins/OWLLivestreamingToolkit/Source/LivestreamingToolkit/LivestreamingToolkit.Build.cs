// Copyright Off World Live Limited, 2020-2021. All rights reserved.

using UnrealBuildTool;
using System.IO;
using System.Net;
using System;
using Tools.DotNETCommon;

public class LivestreamingToolkit : ModuleRules
{
	public LivestreamingToolkit(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		// add xxhash
		PrivateIncludePaths.AddRange(
			new string[]
			{
				"ThirdParty/xxhash_cpp"
			}
		);

		string AuthUrl = GetOffWorldString("AuthURL", "https://plugin-api.offworld.live");
		PublicDefinitions.Add("OWL_AUTH_URL=\"" + AuthUrl + "\"");

		string PublicKey = "";

		if (!bUsePrecompiled && (PublicKey == null || PublicKey == ""))
		{
			var request = (HttpWebRequest)WebRequest.Create(AuthUrl + "/auth/public-key");
			var response = (HttpWebResponse)request.GetResponse();
			if (response.StatusCode != HttpStatusCode.OK)
			{
				throw new Exception(
					"Failed to request Public Key from " + AuthUrl +
					": received " + response.StatusCode + ",  " +
					response.StatusDescription
				);
			}
			string responseString = new StreamReader(response.GetResponseStream()).ReadToEnd();
			PublicKey = responseString
					.Replace("-----BEGIN PUBLIC KEY-----\n", "")
		.Replace("\n", "")
					.Replace("-----END PUBLIC KEY-----", "");

			if (PublicKey == null || PublicKey == "")
			{
				throw new Exception("No valid public key found");
			}
		}
		if (PublicKey.Contains("BEGIN PUBLIC"))
		{
			throw new Exception("Public key invalid");
		}
		if (!bUsePrecompiled)
		{
			if (PublicKey == null || PublicKey == "")
			{
				throw new Exception("No valid public key found having requested from " + AuthUrl);
			}
		}

		PublicDefinitions.Add("PUBLIC_KEY=" + PublicKey);

		string ReleaseDate = "2021-07-22T11:22:00.000Z";
		string ReleaseBuildEnv = System.Environment.GetEnvironmentVariable("RELEASE_BUILD");
		if (ReleaseBuildEnv == null || ReleaseBuildEnv == "")
		{
			ReleaseDate = DateTime.UtcNow.ToString("yyyy-MM-ddTHH:mm:ss.fffZ");
		}
		PublicDefinitions.Add("RELEASE_DATE=" + ReleaseDate);

		PublicDefinitions.Add("OFFWORLDLIVE_DEBUG=" + (GetOffWorldBoolean("Debug", false) ? "1" : "0"));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"RenderCore",
				"USpout",
				"Projects",
				"Json",
				"JsonUtilities",
				"Http"

				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"RenderCore",
				"USpout",
				"CinematicCamera",
				"Slate",
				"UMG",
				"SlateCore",
				"RenderCore",
				"RSA",
				"OpenSSL",
				"MediaIOCore",
				// ... add private dependencies that you statically link with here ...
			}
		);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.Add("UnrealEd");
		}
	}

	public JsonObject GetOffWorldSettings()
	{
		string RootDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../"));
		string UPluginPath = Path.Combine(RootDir, "OWLLivestreamingToolkit.uplugin");
		string RawString = File.ReadAllText(UPluginPath);
		JsonObject UPluginJson = JsonObject.Parse(RawString);
		return UPluginJson.GetObjectField("OffWorldLive");
	}
	public bool GetOffWorldBoolean(string Key, bool defaultValue = false)
	{
		try
		{
			return GetOffWorldSettings().GetBoolField(Key);
		}
		catch
		{
			return defaultValue;
		}
	}
	public string GetOffWorldString(string Key, string defaultValue = "")
	{
		try
		{
			return GetOffWorldSettings().GetStringField(Key);
		}
		catch
		{
			return defaultValue;
		}
	}
}
#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DiscordRichPresence.DiscordInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDiscordInterface : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TickDiscord();
		void STATIC_SetActivity(const struct FDiscordActivityInfo& Activity);
		void STATIC_RegisterApplicationSteam();
		void STATIC_RegisterApplication(const class FString& Command);
		bool STATIC_InitializeDiscord(const class FString& ClientId);
		void STATIC_ClearActivity();
		void STATIC_BindOnUserSpectate(const class FScriptDelegate& OnDiscordUserSpectate);
		void STATIC_BindOnUserJoinRequest(const class FScriptDelegate& OnDiscordUserJoinRequest);
		void STATIC_BindOnUserJoin(const class FScriptDelegate& OnDiscordUserJoin);
		void STATIC_BindOnUserInvite(const class FScriptDelegate& OnDiscordInvite);
		void STATIC_BindEvents(const class FScriptDelegate& OnDiscordUserJoin, const class FScriptDelegate& OnDiscordUserSpectate, const class FScriptDelegate& OnDiscordUserJoinRequest, const class FScriptDelegate& OnDiscordInvite);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

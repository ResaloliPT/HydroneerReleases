#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class DiscordRichPresence.DiscordInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDiscordInterface : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DiscordRichPresence.DiscordInterface");
		return ptr;
	}



	void STATIC_TickDiscord();
	void STATIC_SetActivity(const struct FDiscordActivityInfo& Activity);
	void STATIC_RegisterApplicationSteam();
	void STATIC_RegisterApplication(const struct FString& Command);
	bool STATIC_InitializeDiscord(const struct FString& ClientId);
	void STATIC_ClearActivity();
	void STATIC_BindOnUserSpectate(const struct FScriptDelegate& OnDiscordUserSpectate);
	void STATIC_BindOnUserJoinRequest(const struct FScriptDelegate& OnDiscordUserJoinRequest);
	void STATIC_BindOnUserJoin(const struct FScriptDelegate& OnDiscordUserJoin);
	void STATIC_BindOnUserInvite(const struct FScriptDelegate& OnDiscordInvite);
	void STATIC_BindEvents(const struct FScriptDelegate& OnDiscordUserJoin, const struct FScriptDelegate& OnDiscordUserSpectate, const struct FScriptDelegate& OnDiscordUserJoinRequest, const struct FScriptDelegate& OnDiscordInvite);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

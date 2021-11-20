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

// Class Mining.CGameInstance
// 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
class UCGameInstance : public UGameInstance
{
public:
	struct FString                                     DiscordClientID;                                           // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                DiscordCallbacksTimerHandle;                               // 0x0178(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Mining.CGameInstance");
		return ptr;
	}



	void OnNetworkError(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<Engine_ENetworkFailure> FailureType, const struct FString& ErrorString);
	void DiscordRunCallbacks();
	void AfterRead();
	void BeforeDelete();

};

// Class Mining.CHydroneerLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCHydroneerLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Mining.CHydroneerLibrary");
		return ptr;
	}



	bool STATIC_StringToClassRef(const struct FString& ClassStringName, class UClass** OutClass);
	struct FString STATIC_GetAppdataLocalDir();
	TArray<struct FString> STATIC_FindFolders(const struct FString& FilePath);
	void AfterRead();
	void BeforeDelete();

};

// Class Mining.LocalCableComponent
// 0x0010 (FullSize[0x0630] - InheritedSize[0x0620])
class ULocalCableComponent : public UCableComponent
{
public:
	unsigned char                                      UnknownData_3A8N[0x10];                                    // 0x0620(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Mining.LocalCableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

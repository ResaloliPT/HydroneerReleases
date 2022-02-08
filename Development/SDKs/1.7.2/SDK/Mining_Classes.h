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
	 * Class Mining.CGameInstance
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class UCGameInstance : public UGameInstance
	{
	public:
		class FString                                              DiscordClientID;                                         // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        DiscordCallbacksTimerHandle;                             // 0x0178(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnNetworkError(class UWorld* World, class UNetDriver* NetDriver, Engine_ENetworkFailure FailureType, const class FString& ErrorString);
		void DiscordRunCallbacks();
		static UClass* StaticClass();
	};

	/**
	 * Class Mining.CHydroneerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCHydroneerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_StringToClassRef(const class FString& ClassStringName, class UClass** OutClass);
		class FString STATIC_GetAppdataLocalDir();
		TArray<class FString> STATIC_FindFolders(const class FString& FilePath);
		static UClass* StaticClass();
	};

	/**
	 * Class Mining.LocalCableComponent
	 * Size -> 0x0010 (FullSize[0x0630] - InheritedSize[0x0620])
	 */
	class ULocalCableComponent : public UCableComponent
	{
	public:
		unsigned char                                              UnknownData_VQ8B[0x10];                                  // 0x0620(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

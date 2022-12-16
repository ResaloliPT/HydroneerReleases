#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
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
	 * BlueprintGeneratedClass BP_FarmGuildToken.BP_FarmGuildToken_C
	 * Size -> 0x001C (FullSize[0x0404] - InheritedSize[0x03E8])
	 */
	class ABP_FarmGuildToken_C : public ABP_ParentCurrency_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UWidgetComponent*                                  Widget;                                                  // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UUI_CoinAmount_C*                                  AmountText;                                              // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		int32_t                                                  Amount;                                                  // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


	public:

		void CreateProxyItem();

		void CombineCoins(
class ABP_FarmGuildToken_C* OtherCoins
);

		void UserConstructionScript();

		void CheckForCostumeChange();

		void RemoveCoins(
int32_t AmountToRemove
);

		void PlayCoinSound();

		void ReceiveBeginPlay();

		void RestackCoins(
TArray<class ABP_FarmGuildToken_C*> Coins
);

		void OverrideLoaded();

		void OverrideHighlighted();

		void OverrideUnhighlighted();

		void OverrideHit(
class AActor* OtherActor
);

		void ExecuteUbergraph_BP_FarmGuildToken(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

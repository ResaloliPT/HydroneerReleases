#ifndef UE4SS_SDK_BP_Coin_HPP
#define UE4SS_SDK_BP_Coin_HPP

class ABP_Coin_C : public ABP_ParentCurrency_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0468 (size: 0x8)
    class UUI_CoinAmount_C* AmountText;                                               // 0x0470 (size: 0x8)
    int32 Amount;                                                                     // 0x0478 (size: 0x4)

    void InitAmount(int32 NewAmount, bool Track);
    void CreateProxyItem();
    void CombineCoins(class ABP_Coin_C* OtherCoins);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void CheckForCostumeChange();
    void RemoveCoins(int32 AmountToRemove);
    void PlayCoinSound();
    void RestackCoins(const TArray<class ABP_Coin_C*>& Coins);
    void OverrideLoaded();
    void OverrideHighlighted();
    void OverrideUnhighlighted();
    void OverrideHit(class AActor* OtherActor);
    void OverrideItemStored(class UAC_Storage_C* Storage);
    void ExecuteUbergraph_BP_Coin(int32 EntryPoint);
}; // Size: 0x47C

#endif

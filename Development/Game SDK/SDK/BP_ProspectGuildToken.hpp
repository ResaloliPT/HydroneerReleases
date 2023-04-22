#ifndef UE4SS_SDK_BP_ProspectGuildToken_HPP
#define UE4SS_SDK_BP_ProspectGuildToken_HPP

class ABP_ProspectGuildToken_C : public ABP_ParentCurrency_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UUI_CoinAmount_C* AmountText;
    int32 Amount;

    void CreateProxyItem();
    void CombineCoins(class ABP_ProspectGuildToken_C* OtherCoins);
    void UserConstructionScript();
    void CheckForCostumeChange();
    void RemoveCoins(int32 AmountToRemove);
    void PlayCoinSound();
    void ReceiveBeginPlay();
    void RestackCoins(const TArray<class ABP_ProspectGuildToken_C*>& Coins);
    void OverrideLoaded();
    void OverrideHighlighted();
    void OverrideUnhighlighted();
    void OverrideHit(class AActor* OtherActor);
    void ExecuteUbergraph_BP_ProspectGuildToken(int32 EntryPoint);
};

#endif

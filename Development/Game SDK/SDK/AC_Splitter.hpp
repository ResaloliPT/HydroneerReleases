#ifndef UE4SS_SDK_AC_Splitter_HPP
#define UE4SS_SDK_AC_Splitter_HPP

class UAC_Splitter_C : public UActorComponent
{
    TArray<class TSubclassOf<ABP_ParentItem_C>> ParentClassCanSplit;

    void SplitGem(class ABP_ParentGem_C* Gem);
    void SplitProspectingTokens(class ABP_ProspectGuildToken_C* Tokens);
    void SplitSeedBag(class ABP_ParentSeedBag_C* SeedBag);
    void SplitCutVeg(class ABP_ParentCutVeg_C* CutVeg);
    void SplitFarmTokens(class ABP_FarmGuildToken_C* Tokens);
    void SplitDirt(class ABP_DirtResource_C* Dirt);
    void SplitCoins(class ABP_Coin_C* Coins);
    void SplitBar(class ABP_ParentBar_C* Bar);
    void TrySplitItem(class ABP_ParentItem_C* Item, bool& Splitted?);
};

#endif

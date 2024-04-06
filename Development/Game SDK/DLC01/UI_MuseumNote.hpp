#ifndef UE4SS_SDK_UI_MuseumNote_HPP
#define UE4SS_SDK_UI_MuseumNote_HPP

class UUI_MuseumNote_C : public UUserWidget
{
    class UTextBlock* TextBlock_Progress;                                             // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_Reward;                                               // 0x0268 (size: 0x8)
    TArray<FString> NewVar_0;                                                         // 0x0270 (size: 0x10)
    FString NewVar_1;                                                                 // 0x0280 (size: 0x10)

    void UpdateRequest(int32 Deposited, int32 Required, TSubclassOf<class ABP_ParentItem_C> RewardClass, int32 RewardAmount);
}; // Size: 0x290

#endif

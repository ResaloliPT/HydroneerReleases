#ifndef UE4SS_SDK_UI_DeliveryNote_HPP
#define UE4SS_SDK_UI_DeliveryNote_HPP

class UUI_DeliveryNote_C : public UUserWidget
{
    class UImage* Image_LocationIcon;                                                 // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_NPC;                                                  // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_Reward;                                               // 0x0270 (size: 0x8)
    TArray<FString> NewVar_0;                                                         // 0x0278 (size: 0x10)
    FString NewVar_1;                                                                 // 0x0288 (size: 0x10)

    void UpdateRequest(const FST_NPC_Request_Delivery& Delivery);
}; // Size: 0x298

#endif

#ifndef UE4SS_SDK_UIW_RequestNote_HPP
#define UE4SS_SDK_UIW_RequestNote_HPP

class UUIW_RequestNote_C : public UUserWidget
{
    class UImage* Image_Item;                                                         // 0x0260 (size: 0x8)
    class USizeBox* SizeBox_ItemImage;                                                // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_Item;                                                 // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_NPC;                                                  // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_Req1;                                                 // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_Req2;                                                 // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_Req3;                                                 // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_Requirement01;                                        // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_Requirement02;                                        // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_Requirement03;                                        // 0x02A8 (size: 0x8)
    class UTextBlock* TextBlock_Reward;                                               // 0x02B0 (size: 0x8)

    FText GetDTName(FString inString);
    void UpdateRequest(FST_NPC_Request Request, FText NPC Name);
}; // Size: 0x2B8

#endif

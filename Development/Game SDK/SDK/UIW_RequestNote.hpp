#ifndef UE4SS_SDK_UIW_RequestNote_HPP
#define UE4SS_SDK_UIW_RequestNote_HPP

class UUIW_RequestNote_C : public UUserWidget
{
    class UImage* Image_Item;
    class UTextBlock* TextBlock_Item;
    class UTextBlock* TextBlock_NPC;
    class UTextBlock* TextBlock_Req1;
    class UTextBlock* TextBlock_Req2;
    class UTextBlock* TextBlock_Req3;
    class UTextBlock* TextBlock_Requirement01;
    class UTextBlock* TextBlock_Requirement02;
    class UTextBlock* TextBlock_Requirement03;
    class UTextBlock* TextBlock_Reward;

    FText GetDTName(FString inString);
    void UpdateRequest(FST_NPC_Request Request, FName NPC Name);
};

#endif

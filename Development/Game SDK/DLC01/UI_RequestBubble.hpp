#ifndef UE4SS_SDK_UI_RequestBubble_HPP
#define UE4SS_SDK_UI_RequestBubble_HPP

class UUI_RequestBubble_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ScaleIn;                                                  // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Body;                                             // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_HasRequest;                                       // 0x0278 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Main;                                             // 0x0280 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_Location;                                 // 0x0288 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_NPC;                                      // 0x0290 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_NPC_Name;                                 // 0x0298 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RequiredResources;                            // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_BubbleSmall;                                                  // 0x02B0 (size: 0x8)
    class UImage* Image_Receive;                                                      // 0x02B8 (size: 0x8)
    class UUI_RequestIcon_C* UI_RequestIcon_Main;                                     // 0x02C0 (size: 0x8)
    class UUI_RequestIcon_C* UI_RequestIcon_Resource1;                                // 0x02C8 (size: 0x8)
    class UUI_RequestIcon_C* UI_RequestIcon_Resource2;                                // 0x02D0 (size: 0x8)
    class UUI_RequestIcon_C* UI_RequestIcon_Resource3;                                // 0x02D8 (size: 0x8)
    class UUI_RequestIcon_C* UI_RequestIcon_Reward;                                   // 0x02E0 (size: 0x8)
    class UUI_RequestIcon_C* UI_RequestIcon_Reward_SmallBubble;                       // 0x02E8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_RequestBody;                                // 0x02F0 (size: 0x8)
    FUI_RequestBubble_COnHidden OnHidden;                                             // 0x02F8 (size: 0x10)
    void OnHidden();
    class UWidget* CustomContents;                                                    // 0x0308 (size: 0x8)

    void SetRewardIcon(TSubclassOf<class ABP_ParentItem_C> RewardClass, int32 RewardAmount);
    void FindIcon(TSubclassOf<class ABP_ParentResource_C> Class, FString Type, TSoftObjectPtr<UTexture2D>& Icon);
    void TogglePendingRequestVisibility(bool Visible?);
    void ToggleContentsVisibility(bool Visible?);
    void SetCustomContents(class UWidget* Widget, TSubclassOf<class ABP_ParentItem_C> RewardClass, int32 RewardAmount, FName NPC Name);
    void SetDeliveryContents(FST_NPC_Request_Delivery Delivery, FName NPC Name, bool Receiver);
    void SetRequestContents(FST_NPC_Request Request, TEnumAsByte<E_NPC_RequestType::Type> RequestType, FName NPC Name);
    void Finished_ED982C7B431213DDA9CC8E968283411F();
    void Play ScaleIn(TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode);
    void ExecuteUbergraph_UI_RequestBubble(int32 EntryPoint);
    void OnHidden__DelegateSignature();
}; // Size: 0x310

#endif

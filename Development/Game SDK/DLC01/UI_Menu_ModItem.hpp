#ifndef UE4SS_SDK_UI_Menu_ModItem_HPP
#define UE4SS_SDK_UI_Menu_ModItem_HPP

class UUI_Menu_ModItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ModWarning;                                               // 0x0268 (size: 0x8)
    class UBorder* Border_Body;                                                       // 0x0270 (size: 0x8)
    class UBorder* Border_Status;                                                     // 0x0278 (size: 0x8)
    class UH_ButtonMetal2_C* H_ButtonMetal2_Sub;                                      // 0x0280 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_C_Subscribe;                              // 0x0288 (size: 0x8)
    class UH_TextTitle_C* H_TextTitle_C_ModName;                                      // 0x0290 (size: 0x8)
    class UHCheckbox_C* HCheckbox_C_Enabled;                                          // 0x0298 (size: 0x8)
    class UImage* Image_Background;                                                   // 0x02A0 (size: 0x8)
    class UImage* Image_ModWarning;                                                   // 0x02A8 (size: 0x8)
    class UImage* Image_Preview;                                                      // 0x02B0 (size: 0x8)
    class UProgressBar* ProgressBar_Download;                                         // 0x02B8 (size: 0x8)
    class UThrobber* Throbber_Downloading;                                            // 0x02C0 (size: 0x8)
    FUI_Menu_ModItem_CSubscribe Subscribe;                                            // 0x02C8 (size: 0x10)
    void Subscribe();
    FUI_Menu_ModItem_CUnsubscribe Unsubscribe;                                        // 0x02D8 (size: 0x10)
    void Unsubscribe();
    FSteamUGCDetails ModDetails;                                                      // 0x02E8 (size: 0xA8)
    FTimerHandle CheckDownloadTimer;                                                  // 0x0390 (size: 0x8)
    bool Subscribed?;                                                                 // 0x0398 (size: 0x1)
    bool Installed?;                                                                  // 0x0399 (size: 0x1)
    bool Initialized?;                                                                // 0x039A (size: 0x1)
    FUI_Menu_ModItem_COnUpdate OnUpdate;                                              // 0x03A0 (size: 0x10)
    void OnUpdate();
    bool Mounted?;                                                                    // 0x03B0 (size: 0x1)
    bool Enabled?;                                                                    // 0x03B1 (size: 0x1)
    FUI_Menu_ModItem_COnClicked OnClicked;                                            // 0x03B8 (size: 0x10)
    void OnClicked(FSteamUGCDetails ModDetails);
    FTimerHandle DownloadCheckTimer;                                                  // 0x03C8 (size: 0x8)

    void SetCheckBox(bool IsChecked);
    class UTexture2D* FindThumbnail(const FString Directory);
    void ToggleEnable(bool Enable);
    FEventReply On_Border_Body_MouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool HasDiscrepancy?();
    void CheckMountStatus(bool& Mounted?);
    void UpdateBorder();
    void InitEnabledCheckState();
    void GetModPreviewImage();
    void UpdateSubscribeText();
    void SubscribeResult(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    void UnsubscribeResult(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    void BndEvt__UI_Menu_ModItem_H_ButtonMetal2_Sub_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__UI_Menu_ModItem_HCheckbox_C_Enabled_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void DownloadCheck();
    void CheckModDownloadStatus();
    void ExecuteUbergraph_UI_Menu_ModItem(int32 EntryPoint);
    void OnClicked__DelegateSignature(FSteamUGCDetails ModDetails);
    void OnUpdate__DelegateSignature();
    void Unsubscribe__DelegateSignature();
    void Subscribe__DelegateSignature();
}; // Size: 0x3D0

#endif

#ifndef UE4SS_SDK_UI_Menu_ModItem_HPP
#define UE4SS_SDK_UI_Menu_ModItem_HPP

class UUI_Menu_ModItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ModWarning;
    class UBorder* Border_Body;
    class UBorder* Border_Status;
    class UH_ButtonMetal2_C* H_ButtonMetal2_Sub;
    class UH_TextSubTitle_C* H_TextSubTitle_C_Subscribe;
    class UH_TextTitle_C* H_TextTitle_C_ModName;
    class UHCheckbox_C* HCheckbox_C_Enabled;
    class UImage* Image_Background;
    class UImage* Image_ModWarning;
    class UImage* Image_Preview;
    FUI_Menu_ModItem_CSubscribe Subscribe;
    void Subscribe();
    FUI_Menu_ModItem_CUnsubscribe Unsubscribe;
    void Unsubscribe();
    FSteamUGCDetails ModDetails;
    FTimerHandle CheckDownloadTimer;
    class UTexture2D* ModTexture;
    bool Subscribed?;
    bool Installed?;
    bool Initialized?;
    FUI_Menu_ModItem_COnUpdate OnUpdate;
    void OnUpdate();
    bool Mounted?;
    bool Enabled?;
    FUI_Menu_ModItem_COnClicked OnClicked;
    void OnClicked(FSteamUGCDetails ModDetails);

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
    void ExecuteUbergraph_UI_Menu_ModItem(int32 EntryPoint);
    void OnClicked__DelegateSignature(FSteamUGCDetails ModDetails);
    void OnUpdate__DelegateSignature();
    void Unsubscribe__DelegateSignature();
    void Subscribe__DelegateSignature();
};

#endif

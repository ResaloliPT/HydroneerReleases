#ifndef UE4SS_SDK_UI_Menu_Mods_HPP
#define UE4SS_SDK_UI_Menu_Mods_HPP

class UUI_Menu_Mods_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UH_ButtonMetal2_C* Button_UploadUpdate;                                     // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Uploading;                                        // 0x0270 (size: 0x8)
    class UH_EditableText_C* EditableText_ChangeNotes;                                // 0x0278 (size: 0x8)
    class UH_EditableText_C* EditableText_ModDirectory;                               // 0x0280 (size: 0x8)
    class UH_EditableText_C* EditableText_ModID;                                      // 0x0288 (size: 0x8)
    class UH_EditableText_C* EditableText_ModTitle;                                   // 0x0290 (size: 0x8)
    class UH_EditableText_C* EditableText_Tags;                                       // 0x0298 (size: 0x8)
    class UH_EditableText_C* EditableText_ThumbnailImage;                             // 0x02A0 (size: 0x8)
    class UH_Background1000x700_C* H_Background1000x700_C;                            // 0x02A8 (size: 0x8)
    class UH_ButtonWood1_C* H_ButtonWood1_DisableAllMods;                             // 0x02B0 (size: 0x8)
    class UH_ButtonWood1_C* H_ButtonWood1_EnableAllMods;                              // 0x02B8 (size: 0x8)
    class UH_ButtonWood1_C* H_ButtonWood1_ReloadMods;                                 // 0x02C0 (size: 0x8)
    class UH_ComboBox_C* H_ComboBox_C_Tags;                                           // 0x02C8 (size: 0x8)
    class UH_ComboBox_C* H_ComboBox_C_Visibility;                                     // 0x02D0 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C;                                  // 0x02D8 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C_1;                                // 0x02E0 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C_2;                                // 0x02E8 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C_3;                                // 0x02F0 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C_4;                                // 0x02F8 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C_5;                                // 0x0300 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C_6;                                // 0x0308 (size: 0x8)
    class UH_TextMultiLine_C* H_TextMultiLine_InstalledModDetailsDescription;         // 0x0310 (size: 0x8)
    class UH_TextMultiLine_C* H_TextMultiLine_ModDetailsDescription;                  // 0x0318 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_C_ModDirectory_Error;                     // 0x0320 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_C_UploadStatus;                           // 0x0328 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_ModDescription;                           // 0x0330 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_ModTitle;                                 // 0x0338 (size: 0x8)
    class UH_TextTitle_C* H_TextTitle_ImageFileSizeWarning;                           // 0x0340 (size: 0x8)
    class UH_TextTitle_C* H_TextTitle_InstalledModDetailsTitle;                       // 0x0348 (size: 0x8)
    class UH_TextTitle_C* H_TextTitle_ModDetailsTitle;                                // 0x0350 (size: 0x8)
    class UH_TextTitle_C* H_TextTitle_UploaderTitle;                                  // 0x0358 (size: 0x8)
    class UH_ButtonSettingsTab_C* HButton_InstalledMods;                              // 0x0360 (size: 0x8)
    class UH_ButtonSettingsTab_C* HButton_PopularMods;                                // 0x0368 (size: 0x8)
    class UH_ButtonSettingsTab_C* HButton_UploadMod;                                  // 0x0370 (size: 0x8)
    class UH_TextSubTitle_C* HTextBlock_C_1_UploadUpdateModText;                      // 0x0378 (size: 0x8)
    class UImage* Image_MainMenuPreview;                                              // 0x0380 (size: 0x8)
    class UImage* Image_Thumbnail;                                                    // 0x0388 (size: 0x8)
    class UMultiLineEditableText* MultiLineEditableText_ModDescription;               // 0x0390 (size: 0x8)
    class UProgressBar* ProgressBar_UploadStatus;                                     // 0x0398 (size: 0x8)
    class UThrobber* Throbber_Uploading;                                              // 0x03A0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_ModTabs;                                    // 0x03A8 (size: 0x8)
    class UWrapBox* WrapBox_InstalledMods;                                            // 0x03B0 (size: 0x8)
    class UWrapBox* WrapBox_Mods;                                                     // 0x03B8 (size: 0x8)
    TArray<FString> ModFolderList;                                                    // 0x03C0 (size: 0x10)
    int32 Total Matching Results;                                                     // 0x03D0 (size: 0x4)
    FString UploadingMod;                                                             // 0x03D8 (size: 0x10)
    bool OnInstallPage?;                                                              // 0x03E8 (size: 0x1)
    FUGCQueryHandle UGC Query Handle;                                                 // 0x03F0 (size: 0x8)
    FUGCUpdateHandle UGC Update Handle;                                               // 0x03F8 (size: 0x8)
    bool ValidModPath;                                                                // 0x0400 (size: 0x1)
    bool ValidImagePath;                                                              // 0x0401 (size: 0x1)
    bool IsUploading?;                                                                // 0x0402 (size: 0x1)
    FTimerHandle CheckUpdateTimer;                                                    // 0x0408 (size: 0x8)
    FPublishedFileID ModPublishedFileID;                                              // 0x0410 (size: 0x8)

    void ToggleEnableMods(bool Enable);
    FText SanitizeModTitle(const FText& InText);
    void UpdateSelectedTab(class UH_ButtonSettingsTab_C* Tab);
    void UpdateModDetails(FSteamUGCDetails ModDetails);
    void UpdateInstalledModDetails(FSteamUGCDetails ModDetails);
    void CheckInstalledModDiscrepancies();
    void SetTextColor(bool invalidEntry?, class UTextBlock* Text);
    void CheckUpdate();
    FText LimitCharacterCount(const FText& InText, int32 Count);
    class UTexture2D* FindThumbnail(const FString Directory);
    void SetModFileID(FPublishedFileID FileID);
    void GenerateMetadata();
    void CheckImagePath(const FString Path, bool& Valid?, class UTexture2D*& ImageTexture);
    void InitComboBox_Visibility();
    void EvaluateUpload();
    void SetModVisibility();
    void SetModPreview();
    void SetModTags();
    void SetModDescription();
    void SetModTitle();
    void QueryReceived(const FSteamUGCQueryCompleted& Data, bool bWasSuccessful, class UPanelWidget* Target);
    void Init();
    void OnCallback_50E16AF84B7BEC154FE5C5B55718BB72(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    void RefreshUGC();
    void CB_CreateItem(const FCreateItemResult& Data, bool bWasSuccessful);
    void RefreshInstalledMods();
    void Construct();
    void ItemUpdated(const FSubmitItemUpdateResult& Data, bool bWasSuccessful);
    void UGCRequest Callback(const FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
    void BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void UpdateMod(FPublishedFileID PublishedFileID);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Menu_Mods_H_ButtonWood1_DisableAllMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Menu_Mods_H_ButtonWood1_EnableAllMods_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Menu_Mods(int32 EntryPoint);
}; // Size: 0x418

#endif

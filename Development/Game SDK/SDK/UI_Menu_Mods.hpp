#ifndef UE4SS_SDK_UI_Menu_Mods_HPP
#define UE4SS_SDK_UI_Menu_Mods_HPP

class UUI_Menu_Mods_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UH_ButtonMetal2_C* Button_UploadUpdate;
    class UCanvasPanel* CanvasPanel_Uploading;
    class UH_EditableText_C* EditableText_ChangeNotes;
    class UH_EditableText_C* EditableText_ModDirectory;
    class UH_EditableText_C* EditableText_ModID;
    class UH_EditableText_C* EditableText_ModTitle;
    class UH_EditableText_C* EditableText_Tags;
    class UH_EditableText_C* EditableText_ThumbnailImage;
    class UH_Background1000x700_C* H_Background1000x700_C;
    class UH_ButtonWood1_C* H_ButtonWood1_ReloadMods;
    class UH_ComboBox_C* H_ComboBox_C_Tags;
    class UH_ComboBox_C* H_ComboBox_C_Visibility;
    class UH_Midground400x40_C* H_Midground400x40_C;
    class UH_Midground400x40_C* H_Midground400x40_C_1;
    class UH_Midground400x40_C* H_Midground400x40_C_2;
    class UH_Midground400x40_C* H_Midground400x40_C_3;
    class UH_Midground400x40_C* H_Midground400x40_C_4;
    class UH_Midground400x40_C* H_Midground400x40_C_5;
    class UH_Midground400x40_C* H_Midground400x40_C_6;
    class UH_TextMultiLine_C* H_TextMultiLine_InstalledModDetailsDescription;
    class UH_TextMultiLine_C* H_TextMultiLine_ModDetailsDescription;
    class UH_TextSubTitle_C* H_TextSubTitle_C_ModDirectory_Error;
    class UH_TextSubTitle_C* H_TextSubTitle_C_UploadStatus;
    class UH_TextSubTitle_C* H_TextSubTitle_ModDescription;
    class UH_TextSubTitle_C* H_TextSubTitle_ModTitle;
    class UH_TextTitle_C* H_TextTitle_ImageFileSizeWarning;
    class UH_TextTitle_C* H_TextTitle_InstalledModDetailsTitle;
    class UH_TextTitle_C* H_TextTitle_ModDetailsTitle;
    class UH_TextTitle_C* H_TextTitle_UploaderTitle;
    class UH_ButtonSettingsTab_C* HButton_InstalledMods;
    class UH_ButtonSettingsTab_C* HButton_PopularMods;
    class UH_ButtonSettingsTab_C* HButton_UploadMod;
    class UH_TextSubTitle_C* HTextBlock_C_1_UploadUpdateModText;
    class UImage* Image_MainMenuPreview;
    class UImage* Image_Thumbnail;
    class UMultiLineEditableText* MultiLineEditableText_ModDescription;
    class UProgressBar* ProgressBar_UploadStatus;
    class UThrobber* Throbber_Uploading;
    class UWidgetSwitcher* WidgetSwitcher_ModTabs;
    class UWrapBox* WrapBox_InstalledMods;
    class UWrapBox* WrapBox_Mods;
    TArray<FString> ModFolderList;
    int32 Total Matching Results;
    FString UploadingMod;
    bool OnInstallPage?;
    FUGCQueryHandle UGC Query Handle;
    FUGCUpdateHandle UGC Update Handle;
    bool ValidModPath;
    bool ValidImagePath;
    bool IsUploading?;
    FTimerHandle CheckUpdateTimer;
    FPublishedFileID ModPublishedFileID;

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
    void ExecuteUbergraph_UI_Menu_Mods(int32 EntryPoint);
};

#endif

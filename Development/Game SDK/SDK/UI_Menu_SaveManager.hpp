#ifndef UE4SS_SDK_UI_Menu_SaveManager_HPP
#define UE4SS_SDK_UI_Menu_SaveManager_HPP

class UUI_Menu_SaveManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SlapUpUI;
    class UWidgetAnimation* WiggleText;
    class UHCheckbox_C* BackupVisibility;
    class UH_ButtonMetal1_C* ButtonDeleteSave;
    class UH_ButtonMetal2_C* ButtonLoadSave;
    class UH_ButtonMetal1_C* ButtonRenameSave;
    class UCanvasPanel* CanvasPanel_CloudSaveConflict;
    class UHCheckbox_C* CheckboxCloud;
    class UHCheckbox_C* CheckboxCreative;
    class UH_TextSubTitle_C* DeleteSaveText;
    class UH_TextSubTitle_C* DeleteSaveText_1;
    class UH_TextSubTitle_C* DeleteSaveText_2;
    class UH_Background1000x700_C* H_Background1000x700_C_3;
    class UH_ButtonMetal1_C* H_ButtonMetal1_KeepCloud;
    class UH_ButtonMetal1_C* H_ButtonMetal1_KeepLocal;
    class UH_Midground400x40_C* H_Midground400x40_C_0;
    class UH_TextBody_C* H_TextBody_CloudTime;
    class UH_TextBody_C* H_TextBody_LocalTime;
    class UH_EditableText_C* SaveFileName;
    class UScrollBox* ScrollBox_0;
    FString CurrentSelectedSave;
    int32 DeleteButtonPress;
    bool ShowBackups?;

    void ShowCloudSaveConflictWarning?(bool Show?, FText CloudTime, FText LocalTime);
    void OnCompleted_C53FDA2E40F890A4277525AEB4F182D7();
    void Construct();
    void SaveSelected(FString Save);
    void RefreshList();
    void AnimateText();
    void RestoreDelete Button();
    void BndEvt__UI_Menu_SaveManager_BackupVisibility_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_C_2_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_Menu_SaveManager_ButtonDeleteSave_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_Menu_SaveManager_H_ButtonMetal2_C_1_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepLocal_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepCloud_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Menu_SaveManager(int32 EntryPoint);
};

#endif

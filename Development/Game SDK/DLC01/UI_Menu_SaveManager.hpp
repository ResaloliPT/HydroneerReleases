#ifndef UE4SS_SDK_UI_Menu_SaveManager_HPP
#define UE4SS_SDK_UI_Menu_SaveManager_HPP

class UUI_Menu_SaveManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SlapUpUI;                                                 // 0x0268 (size: 0x8)
    class UWidgetAnimation* WiggleText;                                               // 0x0270 (size: 0x8)
    class UHCheckbox_C* BackupVisibility;                                             // 0x0278 (size: 0x8)
    class UH_ButtonMetal1_C* ButtonDeleteSave;                                        // 0x0280 (size: 0x8)
    class UH_ButtonMetal2_C* ButtonLoadSave;                                          // 0x0288 (size: 0x8)
    class UH_ButtonMetal1_C* ButtonRenameSave;                                        // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_CloudSaveConflict;                                // 0x0298 (size: 0x8)
    class UHCheckbox_C* CheckboxCloud;                                                // 0x02A0 (size: 0x8)
    class UHCheckbox_C* CheckboxCreative;                                             // 0x02A8 (size: 0x8)
    class UHCheckbox_C* CheckboxResourceClearer;                                      // 0x02B0 (size: 0x8)
    class UH_TextSubTitle_C* DeleteSaveText;                                          // 0x02B8 (size: 0x8)
    class UH_TextSubTitle_C* DeleteSaveText_1;                                        // 0x02C0 (size: 0x8)
    class UH_TextSubTitle_C* DeleteSaveText_2;                                        // 0x02C8 (size: 0x8)
    class UH_Background1000x700_C* H_Background1000x700_C_3;                          // 0x02D0 (size: 0x8)
    class UH_ButtonMetal1_C* H_ButtonMetal1_KeepCloud;                                // 0x02D8 (size: 0x8)
    class UH_ButtonMetal1_C* H_ButtonMetal1_KeepLocal;                                // 0x02E0 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C_0;                                // 0x02E8 (size: 0x8)
    class UH_TextBody_C* H_TextBody_CloudTime;                                        // 0x02F0 (size: 0x8)
    class UH_TextBody_C* H_TextBody_LocalTime;                                        // 0x02F8 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_GameType;                                 // 0x0300 (size: 0x8)
    class UH_TextSubTitle_C* HTextBlock_AchievementsWarning;                          // 0x0308 (size: 0x8)
    class UH_EditableText_C* SaveFileName;                                            // 0x0310 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0318 (size: 0x8)
    class UUI_CanAchieve_C* UI_CanAchieve;                                            // 0x0320 (size: 0x8)
    FString CurrentSelectedSave;                                                      // 0x0328 (size: 0x10)
    int32 DeleteButtonPress;                                                          // 0x0338 (size: 0x4)
    bool ShowBackups?;                                                                // 0x033C (size: 0x1)
    bool IsCurrentSaveCreative;                                                       // 0x033D (size: 0x1)

    void VerifySetGameType();
    void ContinueDLC01();
    void ContinueMainGame();
    void SetGameTypeDisplay();
    void ToggleAchievementWarning(bool Visible);
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
    void BndEvt__UI_Menu_SaveManager_CheckboxCreative_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Menu_SaveManager(int32 EntryPoint);
}; // Size: 0x33E

#endif

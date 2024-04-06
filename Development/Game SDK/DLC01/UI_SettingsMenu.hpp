#ifndef UE4SS_SDK_UI_SettingsMenu_HPP
#define UE4SS_SDK_UI_SettingsMenu_HPP

class UUI_SettingsMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SlapUpUI;                                                 // 0x0268 (size: 0x8)
    class UH_ButtonSettingsTab_C* AudioButton;                                        // 0x0270 (size: 0x8)
    class UAudioSettingsPage_C* AudioSettingsPage;                                    // 0x0278 (size: 0x8)
    class UWidgetSwitcher* CategorySwitcher;                                          // 0x0280 (size: 0x8)
    class UH_ButtonSettingsTab_C* GameplayButton;                                     // 0x0288 (size: 0x8)
    class UGameplaySettingsPage_C* GameplaySettingsPage;                              // 0x0290 (size: 0x8)
    class UH_ButtonSettingsTab_C* InputButton;                                        // 0x0298 (size: 0x8)
    class UInputSettingsPage_C* InputSettingsPage;                                    // 0x02A0 (size: 0x8)
    class UH_ButtonSettingsTab_C* VideoButton;                                        // 0x02A8 (size: 0x8)
    class UVideoSettingsPage_C* VideoSettingsPage;                                    // 0x02B0 (size: 0x8)
    FUI_SettingsMenu_CCloseRequested CloseRequested;                                  // 0x02B8 (size: 0x10)
    void CloseRequested();

    void Construct();
    void BndEvt__SettingsUI_VideoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SettingsUI_AudioButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SettingsUI_InputButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SettingsUI_GameplayButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SettingsMenu(int32 EntryPoint);
    void CloseRequested__DelegateSignature();
}; // Size: 0x2C8

#endif

#ifndef UE4SS_SDK_UI_SettingsMenu_HPP
#define UE4SS_SDK_UI_SettingsMenu_HPP

class UUI_SettingsMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SlapUpUI;
    class UH_ButtonSettingsTab_C* AudioButton;
    class UAudioSettingsPage_C* AudioSettingsPage;
    class UWidgetSwitcher* CategorySwitcher;
    class UH_ButtonSettingsTab_C* GameplayButton;
    class UGameplaySettingsPage_C* GameplaySettingsPage;
    class UH_ButtonSettingsTab_C* InputButton;
    class UInputSettingsPage_C* InputSettingsPage;
    class UH_ButtonSettingsTab_C* VideoButton;
    class UVideoSettingsPage_C* VideoSettingsPage;
    FUI_SettingsMenu_CCloseRequested CloseRequested;
    void CloseRequested();

    void Construct();
    void BndEvt__SettingsUI_VideoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SettingsUI_AudioButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SettingsUI_InputButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SettingsUI_GameplayButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SettingsMenu(int32 EntryPoint);
    void CloseRequested__DelegateSignature();
};

#endif

#ifndef UE4SS_SDK_UI_CustomizationTab_HPP
#define UE4SS_SDK_UI_CustomizationTab_HPP

class UUI_CustomizationTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_Option;                                                     // 0x0268 (size: 0x8)
    class UTextBlock* Text_Option;                                                    // 0x0270 (size: 0x8)
    FText Text;                                                                       // 0x0278 (size: 0x18)
    FUI_CustomizationTab_COnPressed OnPressed;                                        // 0x0290 (size: 0x10)
    void OnPressed();

    void OnSelected();
    void UpdateSelection(class UWidget* Widget);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_CustomizationOption_Button_Option_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_CustomizationTab(int32 EntryPoint);
    void OnPressed__DelegateSignature();
}; // Size: 0x2A0

#endif

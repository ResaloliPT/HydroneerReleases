#ifndef UE4SS_SDK_UI_CustomizationTab_HPP
#define UE4SS_SDK_UI_CustomizationTab_HPP

class UUI_CustomizationTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Option;
    class UTextBlock* Text_Option;
    FText Text;
    FUI_CustomizationTab_COnPressed OnPressed;
    void OnPressed();

    void OnSelected();
    void UpdateSelection(class UWidget* Widget);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_CustomizationOption_Button_Option_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_CustomizationTab(int32 EntryPoint);
    void OnPressed__DelegateSignature();
};

#endif

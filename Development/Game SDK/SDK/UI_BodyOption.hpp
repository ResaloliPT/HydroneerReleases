#ifndef UE4SS_SDK_UI_BodyOption_HPP
#define UE4SS_SDK_UI_BodyOption_HPP

class UUI_BodyOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Option;
    class UImage* Image_OptionIcon;
    class UImage* Image_OptionIconHighlight;
    FUI_BodyOption_COnPressed OnPressed;
    void OnPressed(class UWidget* Widget, FName BodyID);
    FName BodyID;
    class USoundBase* PressSound;

    void ToggleSelection(bool isSelected?);
    void Construct();
    void BndEvt__UI_StyleOption_Button_Option_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BodyOption(int32 EntryPoint);
    void OnPressed__DelegateSignature(class UWidget* Widget, FName BodyID);
};

#endif

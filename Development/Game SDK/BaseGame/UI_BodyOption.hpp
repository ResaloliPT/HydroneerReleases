#ifndef UE4SS_SDK_UI_BodyOption_HPP
#define UE4SS_SDK_UI_BodyOption_HPP

class UUI_BodyOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_Option;                                                     // 0x0268 (size: 0x8)
    class UImage* Image_OptionIcon;                                                   // 0x0270 (size: 0x8)
    class UImage* Image_OptionIconHighlight;                                          // 0x0278 (size: 0x8)
    FUI_BodyOption_COnPressed OnPressed;                                              // 0x0280 (size: 0x10)
    void OnPressed(class UWidget* Widget, FName BodyID);
    FName BodyID;                                                                     // 0x0290 (size: 0x8)
    class USoundBase* PressSound;                                                     // 0x0298 (size: 0x8)

    void ToggleSelection(bool isSelected?);
    void Construct();
    void BndEvt__UI_StyleOption_Button_Option_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BodyOption(int32 EntryPoint);
    void OnPressed__DelegateSignature(class UWidget* Widget, FName BodyID);
}; // Size: 0x2A0

#endif

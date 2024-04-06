#ifndef UE4SS_SDK_UI_StyleOption_HPP
#define UE4SS_SDK_UI_StyleOption_HPP

class UUI_StyleOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Option;
    class UImage* Image_OptionIcon;
    class UImage* Image_OptionIconHighlight;
    class UPData_Customizable_Base_C* DataAsset;
    TEnumAsByte<E_ClothingSlots::Type> ClothingSlot;
    FUI_StyleOption_COnPressed OnPressed;
    void OnPressed(class UWidget* Widget);
    class USoundBase* PressSound;

    void ToggleSelection(bool isSelected?);
    void Construct();
    void BndEvt__UI_StyleOption_Button_Option_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_StyleOption(int32 EntryPoint);
    void OnPressed__DelegateSignature(class UWidget* Widget);
};

#endif

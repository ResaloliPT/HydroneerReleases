#ifndef UE4SS_SDK_StyledSliderSetting_HPP
#define UE4SS_SDK_StyledSliderSetting_HPP

class UStyledSliderSetting_C : public UNativeSliderSetting
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEditableTextBox* TextBox;
    float LabelMultiplier;
    int32 LabelFractionalDigits;

    void Construct();
    void TextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__StyledSliderSetting_HSlider_C_63_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_StyledSliderSetting(int32 EntryPoint);
};

#endif

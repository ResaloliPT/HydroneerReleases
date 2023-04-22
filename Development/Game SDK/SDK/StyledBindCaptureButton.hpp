#ifndef UE4SS_SDK_StyledBindCaptureButton_HPP
#define UE4SS_SDK_StyledBindCaptureButton_HPP

class UStyledBindCaptureButton_C : public UBindCaptureButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UNamedSlot* Content;

    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_StyledBindCaptureButton(int32 EntryPoint);
};

#endif

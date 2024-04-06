#ifndef UE4SS_SDK_UI_RemotePlay_HPP
#define UE4SS_SDK_UI_RemotePlay_HPP

class UUI_RemotePlay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UH_Background1000x700_C* H_Background1000x700_C_0;
    class UH_ButtonMetal3_C* HButton_No;
    class UH_ButtonMetal1_C* HButton_Yes;

    void Construct();
    void BndEvt__UI_RemotePlay_HButton_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_RemotePlay_HButton_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_RemotePlay(int32 EntryPoint);
};

#endif

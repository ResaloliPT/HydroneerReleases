#ifndef UE4SS_SDK_UI_DevTool_HPP
#define UE4SS_SDK_UI_DevTool_HPP

class UUI_DevTool_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_Load;                                                       // 0x0268 (size: 0x8)
    class UEditableText* EditableText_SaveSlot;                                       // 0x0270 (size: 0x8)

    void Construct();
    void BndEvt__UI_DevTool_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_DevTool(int32 EntryPoint);
}; // Size: 0x278

#endif

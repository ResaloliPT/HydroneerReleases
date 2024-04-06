#ifndef UE4SS_SDK_UI_SaveEntry_HPP
#define UE4SS_SDK_UI_SaveEntry_HPP

class UUI_SaveEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UH_TextTitle_C* HTextBlock_C_0;                                             // 0x0270 (size: 0x8)
    FString SaveName;                                                                 // 0x0278 (size: 0x10)
    class UUI_Menu_SaveManager_C* Parent;                                             // 0x0288 (size: 0x8)

    void Construct();
    void BndEvt__UI_SaveEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SaveEntry(int32 EntryPoint);
}; // Size: 0x290

#endif

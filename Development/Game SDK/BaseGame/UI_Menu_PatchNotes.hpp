#ifndef UE4SS_SDK_UI_Menu_PatchNotes_HPP
#define UE4SS_SDK_UI_Menu_PatchNotes_HPP

class UUI_Menu_PatchNotes_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SlapUpUI;                                                 // 0x0268 (size: 0x8)
    class UH_Background1000x700_C* H_Background1000x700_C_0;                          // 0x0270 (size: 0x8)
    class UHScrollBox_C* HScrollBox_C_2;                                              // 0x0278 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UI_Menu_PatchNotes(int32 EntryPoint);
}; // Size: 0x280

#endif

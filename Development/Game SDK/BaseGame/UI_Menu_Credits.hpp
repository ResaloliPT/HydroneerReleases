#ifndef UE4SS_SDK_UI_Menu_Credits_HPP
#define UE4SS_SDK_UI_Menu_Credits_HPP

class UUI_Menu_Credits_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SlapUpUI;                                                 // 0x0268 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UI_Menu_Credits(int32 EntryPoint);
}; // Size: 0x270

#endif

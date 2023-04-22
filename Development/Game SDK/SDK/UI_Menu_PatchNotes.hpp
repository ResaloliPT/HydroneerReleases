#ifndef UE4SS_SDK_UI_Menu_PatchNotes_HPP
#define UE4SS_SDK_UI_Menu_PatchNotes_HPP

class UUI_Menu_PatchNotes_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SlapUpUI;
    class UH_Background1000x700_C* H_Background1000x700_C_0;
    class UHScrollBox_C* HScrollBox_C_2;

    void Construct();
    void ExecuteUbergraph_UI_Menu_PatchNotes(int32 EntryPoint);
};

#endif

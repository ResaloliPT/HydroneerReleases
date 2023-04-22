#ifndef UE4SS_SDK_UI_Menu_Credits_HPP
#define UE4SS_SDK_UI_Menu_Credits_HPP

class UUI_Menu_Credits_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SlapUpUI;

    void Construct();
    void ExecuteUbergraph_UI_Menu_Credits(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_UI_SaveEntry_HPP
#define UE4SS_SDK_UI_SaveEntry_HPP

class UUI_SaveEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UH_TextTitle_C* HTextBlock_C_0;
    FString SaveName;
    class UUI_Menu_SaveManager_C* Parent;

    void Construct();
    void BndEvt__UI_SaveEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SaveEntry(int32 EntryPoint);
};

#endif

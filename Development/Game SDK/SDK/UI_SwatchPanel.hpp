#ifndef UE4SS_SDK_UI_SwatchPanel_HPP
#define UE4SS_SDK_UI_SwatchPanel_HPP

class UUI_SwatchPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Description;
    class UWrapBox* WrapBox_Swatches;
    FUI_SwatchPanel_COnUpdate OnUpdate;
    void OnUpdate(FName ColorID);
    FS_Customization_SwatchPanel SwatchPanel;

    void UpdateSelectionColorVisual(FName ColorID);
    void Init();
    void UpdateSelectionColor(FName ColorID);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_SwatchPanel(int32 EntryPoint);
    void OnUpdate__DelegateSignature(FName ColorID);
};

#endif

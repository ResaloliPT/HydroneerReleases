#ifndef UE4SS_SDK_UI_SwatchPanel_HPP
#define UE4SS_SDK_UI_SwatchPanel_HPP

class UUI_SwatchPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Text_Description;                                               // 0x0268 (size: 0x8)
    class UWrapBox* WrapBox_Swatches;                                                 // 0x0270 (size: 0x8)
    FUI_SwatchPanel_COnUpdate OnUpdate;                                               // 0x0278 (size: 0x10)
    void OnUpdate(FName ColorID);
    FS_Customization_SwatchPanel SwatchPanel;                                         // 0x0288 (size: 0x20)

    void UpdateSelectionColorVisual(FName ColorID);
    void Init();
    void UpdateSelectionColor(FName ColorID);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_SwatchPanel(int32 EntryPoint);
    void OnUpdate__DelegateSignature(FName ColorID);
}; // Size: 0x2A8

#endif

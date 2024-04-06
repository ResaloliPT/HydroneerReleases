#ifndef UE4SS_SDK_UI_SwatchColor_HPP
#define UE4SS_SDK_UI_SwatchColor_HPP

class UUI_SwatchColor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_Outline;                                                    // 0x0268 (size: 0x8)
    class UButton* Button_Swatch;                                                     // 0x0270 (size: 0x8)
    FS_PaletteOption Color;                                                           // 0x0278 (size: 0x20)
    FName ColorID;                                                                    // 0x0298 (size: 0x8)
    bool isSelected?;                                                                 // 0x02A0 (size: 0x1)
    FUI_SwatchColor_COnSelected OnSelected;                                           // 0x02A8 (size: 0x10)
    void OnSelected(FName ColorID);

    void SetSwatchColor();
    void UpdateSelection(FName ColorID);
    void OnSelect();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_ColorSwatch_Button_Swatch_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_ColorSwatch_Button_Swatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_SwatchColor_Button_Swatch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SwatchColor(int32 EntryPoint);
    void OnSelected__DelegateSignature(FName ColorID);
}; // Size: 0x2B8

#endif

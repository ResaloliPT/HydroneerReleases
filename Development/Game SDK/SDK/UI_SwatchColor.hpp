#ifndef UE4SS_SDK_UI_SwatchColor_HPP
#define UE4SS_SDK_UI_SwatchColor_HPP

class UUI_SwatchColor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_Outline;
    class UButton* Button_Swatch;
    FS_PaletteOption Color;
    FName ColorID;
    bool isSelected?;
    FUI_SwatchColor_COnSelected OnSelected;
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
};

#endif

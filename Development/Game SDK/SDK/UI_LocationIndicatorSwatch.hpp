#ifndef UE4SS_SDK_UI_LocationIndicatorSwatch_HPP
#define UE4SS_SDK_UI_LocationIndicatorSwatch_HPP

class UUI_LocationIndicatorSwatch_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_SwatchColor_C* UI_SwatchColor;
    FString Value;
    FLinearColor Color;
    bool isSelected?;
    FUI_LocationIndicatorSwatch_COnSelected OnSelected;
    void OnSelected(FString Value);

    void Construct();
    void LocationIndicatorColorChange(FString NewValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_LocationIndicatorSwatch_UI_SwatchColor_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(FName ColorID);
    void ExecuteUbergraph_UI_LocationIndicatorSwatch(int32 EntryPoint);
    void OnSelected__DelegateSignature(FString Value);
};

#endif

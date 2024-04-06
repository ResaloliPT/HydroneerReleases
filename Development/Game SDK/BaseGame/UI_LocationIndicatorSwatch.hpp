#ifndef UE4SS_SDK_UI_LocationIndicatorSwatch_HPP
#define UE4SS_SDK_UI_LocationIndicatorSwatch_HPP

class UUI_LocationIndicatorSwatch_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UUI_SwatchColor_C* UI_SwatchColor;                                          // 0x0268 (size: 0x8)
    FString Value;                                                                    // 0x0270 (size: 0x10)
    FLinearColor Color;                                                               // 0x0280 (size: 0x10)
    bool isSelected?;                                                                 // 0x0290 (size: 0x1)
    FUI_LocationIndicatorSwatch_COnSelected OnSelected;                               // 0x0298 (size: 0x10)
    void OnSelected(FString Value);

    void Construct();
    void LocationIndicatorColorChange(FString NewValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_LocationIndicatorSwatch_UI_SwatchColor_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(FName ColorID);
    void ExecuteUbergraph_UI_LocationIndicatorSwatch(int32 EntryPoint);
    void OnSelected__DelegateSignature(FString Value);
}; // Size: 0x2A8

#endif

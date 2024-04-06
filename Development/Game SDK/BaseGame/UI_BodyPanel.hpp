#ifndef UE4SS_SDK_UI_BodyPanel_HPP
#define UE4SS_SDK_UI_BodyPanel_HPP

class UUI_BodyPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Text_Description;                                               // 0x0268 (size: 0x8)
    class UWrapBox* WrapBox_Options;                                                  // 0x0270 (size: 0x8)
    FText Text;                                                                       // 0x0278 (size: 0x18)
    TEnumAsByte<E_ClothingSlots::Type> ClothingSlot;                                  // 0x0290 (size: 0x1)
    FUI_BodyPanel_COnUpdateBody OnUpdateBody;                                         // 0x0298 (size: 0x10)
    void OnUpdateBody(FName BodyID);
    class UUI_CustomizationMenu_C* CustomizationMenu;                                 // 0x02A8 (size: 0x8)
    class USoundBase* Sound;                                                          // 0x02B0 (size: 0x8)

    void UpdateSelectionVisual(FName SelectedOption);
    void Update(class UWidget* Widget, FName BodyID);
    void Init(TArray<FName>& BodyOptions, FName SelectedOption);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BodyPanel(int32 EntryPoint);
    void OnUpdateBody__DelegateSignature(FName BodyID);
}; // Size: 0x2B8

#endif

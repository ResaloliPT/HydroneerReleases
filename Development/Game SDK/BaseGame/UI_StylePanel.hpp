#ifndef UE4SS_SDK_UI_StylePanel_HPP
#define UE4SS_SDK_UI_StylePanel_HPP

class UUI_StylePanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Text_Description;                                               // 0x0268 (size: 0x8)
    class UWrapBox* WrapBox_Options;                                                  // 0x0270 (size: 0x8)
    TArray<class UPData_Customizable_Base_C*> Options;                                // 0x0278 (size: 0x10)
    FText Text;                                                                       // 0x0288 (size: 0x18)
    TEnumAsByte<E_ClothingSlots::Type> ClothingSlot;                                  // 0x02A0 (size: 0x1)
    FUI_StylePanel_COnUpdateStyle OnUpdateStyle;                                      // 0x02A8 (size: 0x10)
    void OnUpdateStyle(int32 StyleIndex);
    class USoundBase* Sound;                                                          // 0x02B8 (size: 0x8)

    void UpdateSelectionVisual(int32 Index);
    void Update(class UWidget* Widget);
    void Init(TArray<class UPData_Customizable_Base_C*>& Options, int32 SelectedOptionIndex);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_StylePanel(int32 EntryPoint);
    void OnUpdateStyle__DelegateSignature(int32 StyleIndex);
}; // Size: 0x2C0

#endif

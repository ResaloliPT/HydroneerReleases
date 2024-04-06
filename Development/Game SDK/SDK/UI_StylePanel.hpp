#ifndef UE4SS_SDK_UI_StylePanel_HPP
#define UE4SS_SDK_UI_StylePanel_HPP

class UUI_StylePanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Description;
    class UWrapBox* WrapBox_Options;
    TArray<class UPData_Customizable_Base_C*> Options;
    FText Text;
    TEnumAsByte<E_ClothingSlots::Type> ClothingSlot;
    FUI_StylePanel_COnUpdateStyle OnUpdateStyle;
    void OnUpdateStyle(int32 StyleIndex);
    class USoundBase* Sound;

    void UpdateSelectionVisual(int32 Index);
    void Update(class UWidget* Widget);
    void Init(TArray<class UPData_Customizable_Base_C*>& Options, int32 SelectedOptionIndex);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_StylePanel(int32 EntryPoint);
    void OnUpdateStyle__DelegateSignature(int32 StyleIndex);
};

#endif

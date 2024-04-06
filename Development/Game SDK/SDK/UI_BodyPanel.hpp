#ifndef UE4SS_SDK_UI_BodyPanel_HPP
#define UE4SS_SDK_UI_BodyPanel_HPP

class UUI_BodyPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Description;
    class UWrapBox* WrapBox_Options;
    FText Text;
    TEnumAsByte<E_ClothingSlots::Type> ClothingSlot;
    FUI_BodyPanel_COnUpdateBody OnUpdateBody;
    void OnUpdateBody(FName BodyID);
    class UUI_CustomizationMenu_C* CustomizationMenu;
    class USoundBase* Sound;

    void UpdateSelectionVisual(FName SelectedOption);
    void Update(class UWidget* Widget, FName BodyID);
    void Init(TArray<FName>& BodyOptions, FName SelectedOption);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BodyPanel(int32 EntryPoint);
    void OnUpdateBody__DelegateSignature(FName BodyID);
};

#endif

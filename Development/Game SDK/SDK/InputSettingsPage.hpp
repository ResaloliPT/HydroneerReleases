#ifndef UE4SS_SDK_InputSettingsPage_HPP
#define UE4SS_SDK_InputSettingsPage_HPP

class UInputSettingsPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalRadioSelect_C* PresetSelector;
    class USettingRow_C* SettingRow;

    void Construct();
    void BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_InputSettingsPage(int32 EntryPoint);
};

#endif

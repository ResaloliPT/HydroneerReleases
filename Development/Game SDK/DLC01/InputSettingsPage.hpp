#ifndef UE4SS_SDK_InputSettingsPage_HPP
#define UE4SS_SDK_InputSettingsPage_HPP

class UInputSettingsPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalRadioSelect_C* PresetSelector;                                   // 0x0268 (size: 0x8)
    class USettingRow_C* SettingRow;                                                  // 0x0270 (size: 0x8)

    void Construct();
    void BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_InputSettingsPage(int32 EntryPoint);
}; // Size: 0x278

#endif

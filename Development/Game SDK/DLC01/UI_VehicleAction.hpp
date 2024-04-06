#ifndef UE4SS_SDK_UI_VehicleAction_HPP
#define UE4SS_SDK_UI_VehicleAction_HPP

class UUI_VehicleAction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UStyledActionLabel_C* StyledActionLabel;                                    // 0x0268 (size: 0x8)
    class UStyledAxisLabel_C* StyledAxisLabel;                                        // 0x0270 (size: 0x8)
    class UH_TextBody_C* VehicleText;                                                 // 0x0278 (size: 0x8)
    FText ActionText;                                                                 // 0x0280 (size: 0x18)
    FName ActionName;                                                                 // 0x0298 (size: 0x8)
    float Axis;                                                                       // 0x02A0 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_UI_VehicleAction(int32 EntryPoint);
}; // Size: 0x2A4

#endif

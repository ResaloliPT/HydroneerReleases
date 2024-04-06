#ifndef UE4SS_SDK_BP_HydroTruck_MK2_HPP
#define UE4SS_SDK_BP_HydroTruck_MK2_HPP

class ABP_HydroTruck_MK2_C : public ABP_HydroTruck_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    TEnumAsByte<E_PaintTruck::Type> Paint;                                            // 0x0828 (size: 0x1)

    void UserConstructionScript();
    void ActorLoaded();
    void ExecuteUbergraph_BP_HydroTruck_MK2(int32 EntryPoint);
}; // Size: 0x829

#endif

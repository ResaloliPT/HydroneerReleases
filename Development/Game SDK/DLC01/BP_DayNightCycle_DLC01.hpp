#ifndef UE4SS_SDK_BP_DayNightCycle_DLC01_HPP
#define UE4SS_SDK_BP_DayNightCycle_DLC01_HPP

class ABP_DayNightCycle_DLC01_C : public ABP_DayNightCycle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UCurveFloat* AuroraCurve;                                                   // 0x02C8 (size: 0x8)

    void Update();
    void ExecuteUbergraph_BP_DayNightCycle_DLC01(int32 EntryPoint);
}; // Size: 0x2D0

#endif

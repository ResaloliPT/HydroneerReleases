#ifndef UE4SS_SDK_BP_HydroTruck_MK2_HPP
#define UE4SS_SDK_BP_HydroTruck_MK2_HPP

class ABP_HydroTruck_MK2_C : public ABP_HydroTruck_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<E_PaintTruck::Type> Paint;

    void UserConstructionScript();
    void ActorLoaded();
    void ExecuteUbergraph_BP_HydroTruck_MK2(int32 EntryPoint);
};

#endif

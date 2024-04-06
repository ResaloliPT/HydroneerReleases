#ifndef UE4SS_SDK_BP_ShipTicket_HPP
#define UE4SS_SDK_BP_ShipTicket_HPP

class ABP_ShipTicket_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    float Timeline_0_RotLerp_89526A10436FD6EC59D82884C8EC8C9B;                        // 0x0468 (size: 0x4)
    float Timeline_0_MovLerp_89526A10436FD6EC59D82884C8EC8C9B;                        // 0x046C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_89526A10436FD6EC59D82884C8EC8C9B; // 0x0470 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0478 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MachineEject(class USceneComponent* TicketOfficeSpawn);
    void ExecuteUbergraph_BP_ShipTicket(int32 EntryPoint);
}; // Size: 0x480

#endif

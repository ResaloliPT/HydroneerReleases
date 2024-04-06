#ifndef UE4SS_SDK_BP_QuestActor_CastleDoor_HPP
#define UE4SS_SDK_BP_QuestActor_CastleDoor_HPP

class ABP_QuestActor_CastleDoor_C : public ABP_QuestActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Gate;                                                 // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Door_R;                                               // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Door_L;                                               // 0x0268 (size: 0x8)
    float Timeline_Open_DoorAlpha_5C2A89A24395FDE719C4038F17463D93;                   // 0x0270 (size: 0x4)
    float Timeline_Open_GateAlpha_5C2A89A24395FDE719C4038F17463D93;                   // 0x0274 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Open__Direction_5C2A89A24395FDE719C4038F17463D93; // 0x0278 (size: 0x1)
    class UTimelineComponent* Timeline_Open;                                          // 0x0280 (size: 0x8)

    void Timeline_Open__FinishedFunc();
    void Timeline_Open__UpdateFunc();
    void Trigger();
    void ExecuteUbergraph_BP_QuestActor_CastleDoor(int32 EntryPoint);
}; // Size: 0x288

#endif

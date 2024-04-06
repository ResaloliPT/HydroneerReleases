#ifndef UE4SS_SDK_BP_QuestActor_CastleDoor_HPP
#define UE4SS_SDK_BP_QuestActor_CastleDoor_HPP

class ABP_QuestActor_CastleDoor_C : public ABP_QuestActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Gate;
    class UStaticMeshComponent* Door_R;
    class UStaticMeshComponent* Door_L;
    float Timeline_Open_DoorAlpha_5C2A89A24395FDE719C4038F17463D93;
    float Timeline_Open_GateAlpha_5C2A89A24395FDE719C4038F17463D93;
    TEnumAsByte<ETimelineDirection::Type> Timeline_Open__Direction_5C2A89A24395FDE719C4038F17463D93;
    class UTimelineComponent* Timeline_Open;

    void Timeline_Open__FinishedFunc();
    void Timeline_Open__UpdateFunc();
    void Trigger();
    void ExecuteUbergraph_BP_QuestActor_CastleDoor(int32 EntryPoint);
};

#endif

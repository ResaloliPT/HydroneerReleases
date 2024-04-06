#ifndef UE4SS_SDK_BP_ForgeMark_HPP
#define UE4SS_SDK_BP_ForgeMark_HPP

class ABP_ForgeMark_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    float Timeline_0_NewTrack_0_F553D85841120F189EFBE38D9D59E26E;                     // 0x0468 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F553D85841120F189EFBE38D9D59E26E; // 0x046C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0470 (size: 0x8)
    TArray<TEnumAsByte<E_Buffs::Type>> Buffs;                                         // 0x0478 (size: 0x10)

    void RollRandomBuff(TEnumAsByte<E_Buffs::Type>& Buff);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OverridePickedup();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ForgeMark(int32 EntryPoint);
}; // Size: 0x488

#endif

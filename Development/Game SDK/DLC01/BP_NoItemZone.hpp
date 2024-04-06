#ifndef UE4SS_SDK_BP_NoItemZone_HPP
#define UE4SS_SDK_BP_NoItemZone_HPP

class ABP_NoItemZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_NoItemZone(int32 EntryPoint);
}; // Size: 0x238

#endif

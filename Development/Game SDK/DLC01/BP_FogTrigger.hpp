#ifndef UE4SS_SDK_BP_FogTrigger_HPP
#define UE4SS_SDK_BP_FogTrigger_HPP

class ABP_FogTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)

    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_FogTrigger(int32 EntryPoint);
}; // Size: 0x230

#endif

#ifndef UE4SS_SDK_BP_UnstuckTestrCapsule_HPP
#define UE4SS_SDK_BP_UnstuckTestrCapsule_HPP

class ABP_UnstuckTestrCapsule_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_UnstuckTestrCapsule(int32 EntryPoint);
}; // Size: 0x230

#endif

#ifndef UE4SS_SDK_BP_UnstuckTestrCapsule_HPP
#define UE4SS_SDK_BP_UnstuckTestrCapsule_HPP

class ABP_UnstuckTestrCapsule_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_UnstuckTestrCapsule(int32 EntryPoint);
};

#endif

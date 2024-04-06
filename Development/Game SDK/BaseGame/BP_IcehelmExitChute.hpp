#ifndef UE4SS_SDK_BP_IcehelmExitChute_HPP
#define UE4SS_SDK_BP_IcehelmExitChute_HPP

class ABP_IcehelmExitChute_C : public AActor
{
    class USceneComponent* ExitPoint;                                                 // 0x0220 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_Chute_Entry_Attachment;                            // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TArray<class ABP_ParentItem_C*> ItemsToMove;                                      // 0x0240 (size: 0x10)
    FTimerHandle ConveyorTimerHandle;                                                 // 0x0250 (size: 0x8)

}; // Size: 0x258

#endif

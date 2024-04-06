#ifndef UE4SS_SDK_BP_IcehelmExitChute_HPP
#define UE4SS_SDK_BP_IcehelmExitChute_HPP

class ABP_IcehelmExitChute_C : public AActor
{
    class USceneComponent* ExitPoint;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* SM_Chute_Entry_Attachment;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_ParentItem_C*> ItemsToMove;
    FTimerHandle ConveyorTimerHandle;

};

#endif

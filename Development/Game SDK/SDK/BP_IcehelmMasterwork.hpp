#ifndef UE4SS_SDK_BP_IcehelmMasterwork_HPP
#define UE4SS_SDK_BP_IcehelmMasterwork_HPP

class ABP_IcehelmMasterwork_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TroughLava;
    class UAC_Animator_C* AC_Animator2;
    class UStaticMeshComponent* CraneArms;
    class USceneComponent* CraneParent;
    class UAC_Animator_C* AC_Animator1;
    class UStaticMeshComponent* LiquidMesh;
    class UStaticMeshComponent* Lever;
    class USceneComponent* LeverRoot;
    class UStaticMeshComponent* Crucible;
    class USphereComponent* CrucibleCollision;
    class USceneComponent* AdditionalBar2;
    class USceneComponent* AdditionalBar;
    class USceneComponent* ItemSpawnLocation;
    class UAC_Animator_C* AC_Animator;
    class UBoxComponent* DesignBox;
    class UStaticMeshComponent* BigHammer;
    bool Ready?;
    class ABP_MasterworkDesign_C* DesignToMake;
    TArray<FS_ResourceEnumAndWeight> Contents;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void SpitOutBars();
    void Add to Contents(FS_ResourceEnumAndWeight Resource);
    void IsClassInOurRequirements?(TSubclassOf<class ABP_ParentResource_C> Resource, bool& IsRequired?, TEnumAsByte<E_MetalType::Type>& Type);
    void FindWeightNeededOfSpecific(TEnumAsByte<E_MetalType::Type> Type, float& Weight);
    void RemoveMatsFromContents();
    void Has All Required Contents?(bool& HasAllRequirements?);
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void PlayAnimationAndSounds();
    void SpawnItem(TSubclassOf<class AActor> Class);
    void ResetAll();
    void BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActorSaved();
    void ActorPreSave();
    void ActorLoaded();
    void PlayEmptyAnimAndSounds();
    void ExecuteUbergraph_BP_IcehelmMasterwork(int32 EntryPoint);
};

#endif

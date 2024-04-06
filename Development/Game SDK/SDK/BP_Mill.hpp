#ifndef UE4SS_SDK_BP_Mill_HPP
#define UE4SS_SDK_BP_Mill_HPP

class ABP_Mill_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* S_SeedMill_Idle;
    class UStaticMeshComponent* GrinderDisk1 ( Rot Z- );
    class UStaticMeshComponent* GrinderDisk ( Rot Z+ );
    class UBoxComponent* IntakeBox;
    class UStaticMeshComponent* PipeNub;
    class USceneComponent* SpawnLocation;
    class UBoxComponent* Box;

    void SpawnSeeds(TSubclassOf<class ABP_ParentSeedBag_C> SeedBag, float Weight);
    void BndEvt__BP_Mill_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void OverrideEmptyWaterPipe();
    void ExecuteUbergraph_BP_Mill(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_BP_Mill_HPP
#define UE4SS_SDK_BP_Mill_HPP

class ABP_Mill_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UAudioComponent* S_SeedMill_Idle;                                           // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* GrinderDisk1 ( Rot Z- );                              // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* GrinderDisk ( Rot Z+ );                               // 0x04D8 (size: 0x8)
    class UBoxComponent* IntakeBox;                                                   // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* PipeNub;                                              // 0x04E8 (size: 0x8)
    class USceneComponent* SpawnLocation;                                             // 0x04F0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04F8 (size: 0x8)

    void SpawnSeeds(TSubclassOf<class ABP_ParentSeedBag_C> SeedBag, float Weight);
    void BndEvt__BP_Mill_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideLiquidIn(class USceneComponent* Component, float RootPressure);
    void OverrideEmptyLiquidPipe();
    void ExecuteUbergraph_BP_Mill(int32 EntryPoint);
}; // Size: 0x500

#endif

#ifndef UE4SS_SDK_BP_IcehelmMasterwork_HPP
#define UE4SS_SDK_BP_IcehelmMasterwork_HPP

class ABP_IcehelmMasterwork_C : public ABP_ParentMasterwork_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* SM_MasterworkAnvilStatic;                             // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* TroughLava;                                           // 0x02B8 (size: 0x8)
    class UAC_Animator_C* AC_Animator2;                                               // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* CraneArms;                                            // 0x02C8 (size: 0x8)
    class USceneComponent* CraneParent;                                               // 0x02D0 (size: 0x8)
    class UAC_Animator_C* AC_Animator1;                                               // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Crucible;                                             // 0x02E8 (size: 0x8)
    class USphereComponent* CrucibleCollision;                                        // 0x02F0 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* BigHammer;                                            // 0x0300 (size: 0x8)

    void BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideSetLiquidMeshVis(bool Visibility);
    void OverridePlayAnimAndSounds();
    void OverridePlayEmptyingAnimAndSounds();
    void ExecuteUbergraph_BP_IcehelmMasterwork(int32 EntryPoint);
}; // Size: 0x308

#endif

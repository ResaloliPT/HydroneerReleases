#ifndef UE4SS_SDK_BP_VolcalidusMasterwork_HPP
#define UE4SS_SDK_BP_VolcalidusMasterwork_HPP

class ABP_VolcalidusMasterwork_C : public ABP_ParentMasterwork_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* SM_Granvil_Design_Pillar;                             // 0x02B0 (size: 0x8)
    class UAC_Animator_C* AC_Animator4_Hammer2;                                       // 0x02B8 (size: 0x8)
    class UAC_Animator_C* AC_Animator4_Hammer1;                                       // 0x02C0 (size: 0x8)
    class UAC_Animator_C* AC_Animator3_Crucible;                                      // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Cog2;                                                 // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cog1;                                                 // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Inner;                                                // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Crucible;                                             // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* SM_MasterworkAnvilStatic;                             // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* lava;                                                 // 0x02F8 (size: 0x8)
    class UAC_Animator_C* AC_Animator2_Cog2;                                          // 0x0300 (size: 0x8)
    class USceneComponent* CrucibleRoot;                                              // 0x0308 (size: 0x8)
    class UAC_Animator_C* AC_Animator1_Cog1;                                          // 0x0310 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x0318 (size: 0x8)
    class USphereComponent* CrucibleCollision;                                        // 0x0320 (size: 0x8)
    class UAC_Animator_C* AC_Animator_Lever;                                          // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Outer;                                                // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideSetLiquidMeshVis(bool Visibility);
    void OverridePlayAnimAndSounds();
    void OverridePlayEmptyingAnimAndSounds();
    void PlayAnimAndSounds(bool Emptying?);
    void ExecuteUbergraph_BP_VolcalidusMasterwork(int32 EntryPoint);
}; // Size: 0x338

#endif

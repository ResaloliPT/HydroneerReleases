#ifndef UE4SS_SDK_BP_Lava_Spline_Generator_HPP
#define UE4SS_SDK_BP_Lava_Spline_Generator_HPP

class ABP_Lava_Spline_Generator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float SectionLength;                                                              // 0x0238 (size: 0x4)
    float ScaledSectionLength;                                                        // 0x023C (size: 0x4)
    TArray<class USplineMeshComponent*> SplineMeshes;                                 // 0x0240 (size: 0x10)
    class UStaticMesh* MiddleMesh;                                                    // 0x0250 (size: 0x8)
    class UMaterialInterface* MiddleMeshMaterial;                                     // 0x0258 (size: 0x8)
    class UStaticMesh* StartMesh;                                                     // 0x0260 (size: 0x8)
    class UMaterialInterface* StartMeshMaterial;                                      // 0x0268 (size: 0x8)
    FRotator StartMeshRotation;                                                       // 0x0270 (size: 0xC)
    class UStaticMesh* EndMesh;                                                       // 0x0280 (size: 0x8)
    class UMaterialInterface* EndMeshMaterial;                                        // 0x0288 (size: 0x8)
    FRotator EndMeshRotation;                                                         // 0x0290 (size: 0xC)
    bool AddStartMesh?;                                                               // 0x029C (size: 0x1)
    bool AddEndMesh?;                                                                 // 0x029D (size: 0x1)

    void FlipSplineDirection();
    void MeshSetup();
    void UserConstructionScript();
    void BndEvt__BP_Lava_Spline_Generator_Spline_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Lava_Spline_Generator(int32 EntryPoint);
}; // Size: 0x29E

#endif

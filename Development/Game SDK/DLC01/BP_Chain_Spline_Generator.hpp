#ifndef UE4SS_SDK_BP_Chain_Spline_Generator_HPP
#define UE4SS_SDK_BP_Chain_Spline_Generator_HPP

class ABP_Chain_Spline_Generator_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    float SectionLength;                                                              // 0x0230 (size: 0x4)
    float ScaledSectionLength;                                                        // 0x0234 (size: 0x4)
    TArray<class USplineMeshComponent*> SplineMeshes;                                 // 0x0238 (size: 0x10)
    class UStaticMesh* MiddleMesh;                                                    // 0x0248 (size: 0x8)
    class UMaterialInterface* MiddleMeshMaterial;                                     // 0x0250 (size: 0x8)
    class UStaticMesh* StartMesh;                                                     // 0x0258 (size: 0x8)
    class UMaterialInterface* StartMeshMaterial;                                      // 0x0260 (size: 0x8)
    FRotator StartMeshRotation;                                                       // 0x0268 (size: 0xC)
    class UStaticMesh* EndMesh;                                                       // 0x0278 (size: 0x8)
    class UMaterialInterface* EndMeshMaterial;                                        // 0x0280 (size: 0x8)
    FRotator EndMeshRotation;                                                         // 0x0288 (size: 0xC)
    bool AddStartMesh?;                                                               // 0x0294 (size: 0x1)
    bool AddEndMesh?;                                                                 // 0x0295 (size: 0x1)

    void EndMeshSetup();
    void StartMeshSetup();
    void MiddleMeshSetup();
    void UserConstructionScript();
}; // Size: 0x296

#endif

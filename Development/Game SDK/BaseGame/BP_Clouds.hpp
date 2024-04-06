#ifndef UE4SS_SDK_BP_Clouds_HPP
#define UE4SS_SDK_BP_Clouds_HPP

class ABP_Clouds_C : public AActor
{
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class UMaterialInstanceDynamic* Emissive0;                                        // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* Emissive1;                                        // 0x0250 (size: 0x8)
    class UMaterialInstanceDynamic* Emissive2;                                        // 0x0258 (size: 0x8)
    class UMaterialInstanceDynamic* Emissive3;                                        // 0x0260 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x268

#endif

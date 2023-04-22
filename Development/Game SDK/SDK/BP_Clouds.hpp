#ifndef UE4SS_SDK_BP_Clouds_HPP
#define UE4SS_SDK_BP_Clouds_HPP

class ABP_Clouds_C : public AActor
{
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* Emissive0;
    class UMaterialInstanceDynamic* Emissive1;
    class UMaterialInstanceDynamic* Emissive2;
    class UMaterialInstanceDynamic* Emissive3;

    void UserConstructionScript();
};

#endif

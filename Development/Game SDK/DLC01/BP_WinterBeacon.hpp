#ifndef UE4SS_SDK_BP_WinterBeacon_HPP
#define UE4SS_SDK_BP_WinterBeacon_HPP

class ABP_WinterBeacon_C : public ABP_LightingParent_C
{
    class UNiagaraComponent* Niagara;                                                 // 0x0230 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0248 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x250

#endif

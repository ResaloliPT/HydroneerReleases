#ifndef UE4SS_SDK_BP_WorldBrazier_HPP
#define UE4SS_SDK_BP_WorldBrazier_HPP

class ABP_WorldBrazier_C : public ABP_LightingParent_C
{
    class UNiagaraComponent* Niagara;                                                 // 0x0230 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)

}; // Size: 0x248

#endif

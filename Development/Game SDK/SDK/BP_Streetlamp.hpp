#ifndef UE4SS_SDK_BP_Streetlamp_HPP
#define UE4SS_SDK_BP_Streetlamp_HPP

class ABP_Streetlamp_C : public ABP_LightingParent_C
{
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;
    class UMaterialInstanceDynamic* DynamicMaterial;

};

#endif

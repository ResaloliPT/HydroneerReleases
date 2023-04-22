#ifndef UE4SS_SDK_BP_Brazier_HPP
#define UE4SS_SDK_BP_Brazier_HPP

class ABP_Brazier_C : public ABP_LightingParent_C
{
    class UNiagaraComponent* Niagara;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;

};

#endif

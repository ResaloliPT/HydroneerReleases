#ifndef UE4SS_SDK_BP_Sky_Sphere_HPP
#define UE4SS_SDK_BP_Sky_Sphere_HPP

class ABP_Sky_Sphere_C : public AActor
{
    class UStaticMeshComponent* SkySphereMesh;
    class USceneComponent* Base;
    class UMaterialInstanceDynamic* Sky material;
    bool Refresh material;
    class ADirectionalLight* Directional light actor;
    bool Colors determined by sun position;
    float Sun height;
    float Sun brightness;
    float Horizon Falloff;
    FLinearColor Zenith color;
    FLinearColor Horizon color;
    FLinearColor Cloud color;
    FLinearColor Overall color;
    float Cloud speed;
    float Cloud opacity;
    float Stars brightness;
    class UCurveLinearColor* Horizon color curve;
    class UCurveLinearColor* Zenith color curve;
    class UCurveLinearColor* Cloud color curve;

    void RefreshMaterial();
    void UpdateSunDirection();
    void UserConstructionScript();
};

#endif

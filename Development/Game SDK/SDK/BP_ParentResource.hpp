#ifndef UE4SS_SDK_BP_ParentResource_HPP
#define UE4SS_SDK_BP_ParentResource_HPP

class ABP_ParentResource_C : public ABP_ParentItem_C
{
    float Weight;
    int32 BaseValue;
    bool DoNotClear;
    float MinScaleSize;
    float MaxScaleSize;
    float ScaleMultiplyer;

    void SetDoNotClear(bool DoNotClear);
    void CreateProxyItem();
    void SetResourceSize();
    void UserConstructionScript();
};

#endif

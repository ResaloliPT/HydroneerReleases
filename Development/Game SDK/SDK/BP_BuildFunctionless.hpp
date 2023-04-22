#ifndef UE4SS_SDK_BP_BuildFunctionless_HPP
#define UE4SS_SDK_BP_BuildFunctionless_HPP

class ABP_BuildFunctionless_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<E_Functionless::Type> ItemName;

    void CreateProxyItem();
    void InitFunctionless();
    void UserConstructionScript();
    void OnCompleted_D538ED274E83FD01D03359B3237A5FEE();
    void ActorLoaded();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildFunctionless(int32 EntryPoint);
};

#endif

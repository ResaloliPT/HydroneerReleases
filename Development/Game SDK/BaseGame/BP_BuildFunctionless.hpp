#ifndef UE4SS_SDK_BP_BuildFunctionless_HPP
#define UE4SS_SDK_BP_BuildFunctionless_HPP

class ABP_BuildFunctionless_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    TEnumAsByte<E_Functionless::Type> ItemName;                                       // 0x0490 (size: 0x1)

    void GetSpecialType(FString& Type);
    void CreateProxyItem();
    void InitFunctionless();
    void UserConstructionScript();
    void OnCompleted_D538ED274E83FD01D03359B3237A5FEE();
    void ActorLoaded();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildFunctionless(int32 EntryPoint);
}; // Size: 0x491

#endif

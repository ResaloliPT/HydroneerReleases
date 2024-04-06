#ifndef UE4SS_SDK_BP_Bone_HPP
#define UE4SS_SDK_BP_Bone_HPP

class ABP_Bone_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0458 (size: 0x8)
    TEnumAsByte<E_BoneType::Type> BoneType;                                           // 0x0460 (size: 0x1)
    bool PickedUp?;                                                                   // 0x0461 (size: 0x1)

    void CreateProxyItem();
    void InitBone();
    void UserConstructionScript();
    void ActorLoaded();
    void OverridePickedup();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Bone(int32 EntryPoint);
}; // Size: 0x462

#endif

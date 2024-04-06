#ifndef UE4SS_SDK_ABP_Dummy_HPP
#define UE4SS_SDK_ABP_Dummy_HPP

class UABP_Dummy_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x02F8 (size: 0x80)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;                            // 0x0378 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0440 (size: 0x80)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x04C0 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;                            // 0x0538 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0600 (size: 0x80)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x0680 (size: 0xC8)
    float FemAlpha;                                                                   // 0x0748 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Dummy(int32 EntryPoint);
}; // Size: 0x74C

#endif

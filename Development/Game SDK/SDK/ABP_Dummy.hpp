#ifndef UE4SS_SDK_ABP_Dummy_HPP
#define UE4SS_SDK_ABP_Dummy_HPP

class UABP_Dummy_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    float FemAlpha;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Dummy(int32 EntryPoint);
};

#endif

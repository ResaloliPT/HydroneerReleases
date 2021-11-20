// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FVoxelPin::AfterRead()
{
}

void FVoxelPin::BeforeDelete()
{
}

void FFunctionSeparatorType::AfterRead()
{
}

void FFunctionSeparatorType::BeforeDelete()
{
}

void FBiomeMapElement::AfterRead()
{
}

void FBiomeMapElement::BeforeDelete()
{
}

void FVoxelGraphOutput::AfterRead()
{
}

void FVoxelGraphOutput::BeforeDelete()
{
}

void FFlowMergeType::AfterRead()
{
}

void FFlowMergeType::BeforeDelete()
{
}

void FVoxelPinNameAndType::AfterRead()
{
}

void FVoxelPinNameAndType::BeforeDelete()
{
}

void FVoxelPortalNodeSelector::AfterRead()
{
}

void FVoxelPortalNodeSelector::BeforeDelete()
{
}

void UVoxelNode::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Graph, UVoxelGraphGenerator);
}

void UVoxelNode::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Graph);
}

void UVoxelNode_BiomeMerge::AfterRead()
{
	UVoxelNode::AfterRead();

}

void UVoxelNode_BiomeMerge::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

}

void UVoxelNodeHelper::AfterRead()
{
	UVoxelNode::AfterRead();

}

void UVoxelNodeHelper::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

}

void UVoxelMaterialNode::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelMaterialNode::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelFloatNode::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelFloatNode::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelIntNode::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelIntNode::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelEditNodeBase::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelEditNodeBase::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNoiseNodeBase::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNoiseNodeBase::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelExposedNode::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelExposedNode::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_BiomeMapSampler::AfterRead()
{
	UVoxelExposedNode::AfterRead();

	READ_PTR_FULL(Texture, UTexture2D);
}

void UVoxelNode_BiomeMapSampler::BeforeDelete()
{
	UVoxelExposedNode::BeforeDelete();

	DELE_PTR_FULL(Texture);
}

void UVoxelNode_Curve::AfterRead()
{
	UVoxelExposedNode::AfterRead();

	READ_PTR_FULL(Curve, UCurveFloat);
}

void UVoxelNode_Curve::BeforeDelete()
{
	UVoxelExposedNode::BeforeDelete();

	DELE_PTR_FULL(Curve);
}

void UVoxelNode_CurveColor::AfterRead()
{
	UVoxelExposedNode::AfterRead();

	READ_PTR_FULL(Curve, UCurveLinearColor);
}

void UVoxelNode_CurveColor::BeforeDelete()
{
	UVoxelExposedNode::BeforeDelete();

	DELE_PTR_FULL(Curve);
}

void UVoxelNode_XF::AfterRead()
{
	UVoxelFloatNode::AfterRead();

}

void UVoxelNode_XF::BeforeDelete()
{
	UVoxelFloatNode::BeforeDelete();

}

void UVoxelNode_YF::AfterRead()
{
	UVoxelFloatNode::AfterRead();

}

void UVoxelNode_YF::BeforeDelete()
{
	UVoxelFloatNode::BeforeDelete();

}

void UVoxelNode_ZF::AfterRead()
{
	UVoxelFloatNode::AfterRead();

}

void UVoxelNode_ZF::BeforeDelete()
{
	UVoxelFloatNode::BeforeDelete();

}

void UVoxelNode_XI::AfterRead()
{
	UVoxelIntNode::AfterRead();

}

void UVoxelNode_XI::BeforeDelete()
{
	UVoxelIntNode::BeforeDelete();

}

void UVoxelNode_YI::AfterRead()
{
	UVoxelIntNode::AfterRead();

}

void UVoxelNode_YI::BeforeDelete()
{
	UVoxelIntNode::BeforeDelete();

}

void UVoxelNode_ZI::AfterRead()
{
	UVoxelIntNode::AfterRead();

}

void UVoxelNode_ZI::BeforeDelete()
{
	UVoxelIntNode::BeforeDelete();

}

void UVoxelNode_GetColor::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_GetColor::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_MakeMaterialFromColor::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_MakeMaterialFromColor::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_GetIndex::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_GetIndex::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_MakeMaterialFromSingleIndex::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_MakeMaterialFromSingleIndex::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_GetDoubleIndex::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_GetDoubleIndex::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_MakeMaterialFromDoubleIndex::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_MakeMaterialFromDoubleIndex::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_FMax::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FMax::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FMin::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FMin::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IMax::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IMax::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IMin::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IMin::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FLess::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FLess::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FLessEqual::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FLessEqual::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FGreater::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FGreater::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FGreaterEqual::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FGreaterEqual::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FEqual::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FEqual::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FNotEqual::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FNotEqual::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_ILess::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_ILess::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_ILessEqual::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_ILessEqual::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IGreater::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IGreater::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IGreaterEqual::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IGreaterEqual::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IEqual::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IEqual::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_INotEqual::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_INotEqual::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FAdd::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FAdd::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FMultiply::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FMultiply::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FSubstract::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FSubstract::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FDivide::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FDivide::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IAdd::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IAdd::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IMultiply::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IMultiply::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_ISubstract::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_ISubstract::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IDivide::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IDivide::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_ILeftBitShift::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_ILeftBitShift::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IRightBitShift::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IRightBitShift::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FloatOfInt::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FloatOfInt::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Round::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Round::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Lerp::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Lerp::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_SafeLerp::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_SafeLerp::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Clamp::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Clamp::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_BAnd::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_BAnd::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_BOr::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_BOr::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_BNot::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_BNot::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_SwitchInt::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_SwitchInt::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_SwitchFloat::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_SwitchFloat::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_1MinusX::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_1MinusX::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_OneOverX::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_OneOverX::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_MinusX::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_MinusX::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Sqrt::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Sqrt::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Pow::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Pow::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IMod::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IMod::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FMod::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FMod::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FAbs::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FAbs::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IAbs::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_IAbs::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Ceil::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Ceil::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Floor::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Floor::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_VectorLength::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_VectorLength::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Fraction::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Fraction::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FSign::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_FSign::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_ISign::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_ISign::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_InvSqrt::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_InvSqrt::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Loge::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Loge::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Exp::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Exp::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Sin::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Sin::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Asin::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Asin::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Sinh::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Sinh::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Cos::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Cos::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Acos::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Acos::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Tan::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Tan::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Atan::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Atan::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Atan2::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Atan2::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_VectorRotateAngleAxis::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_VectorRotateAngleAxis::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_PerlinWormDistance::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_PerlinWormDistance::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_LOD::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_LOD::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_RandomFloat::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_RandomFloat::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_RandomInt::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_RandomInt::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_VoxelSize::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_VoxelSize::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_WorldSize::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_WorldSize::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_If::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_If::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_IfWithDefaultToFalse::AfterRead()
{
	UVoxelNode_If::AfterRead();

}

void UVoxelNode_IfWithDefaultToFalse::BeforeDelete()
{
	UVoxelNode_If::BeforeDelete();

}

void UVoxelNode_IfWithDefaultToTrue::AfterRead()
{
	UVoxelNode_If::AfterRead();

}

void UVoxelNode_IfWithDefaultToTrue::BeforeDelete()
{
	UVoxelNode_If::BeforeDelete();

}

void UVoxelNode_SetValue::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_SetValue::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_SetColor::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_SetColor::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_SetDoubleIndex::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_SetDoubleIndex::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_SetSingleIndex::AfterRead()
{
	UVoxelMaterialNode::AfterRead();

}

void UVoxelNode_SetSingleIndex::BeforeDelete()
{
	UVoxelMaterialNode::BeforeDelete();

}

void UVoxelNode_SetNode::AfterRead()
{
	UVoxelNode::AfterRead();

}

void UVoxelNode_SetNode::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

}

void UVoxelNode_FunctionSeparator::AfterRead()
{
	UVoxelNode::AfterRead();

}

void UVoxelNode_FunctionSeparator::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

}

void UVoxelNode_FlowMerge::AfterRead()
{
	UVoxelNode::AfterRead();

}

void UVoxelNode_FlowMerge::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

}

void UVoxelOptionallyExposedNode::AfterRead()
{
	UVoxelExposedNode::AfterRead();

}

void UVoxelOptionallyExposedNode::BeforeDelete()
{
	UVoxelExposedNode::BeforeDelete();

}

void UVoxelNode_NoiseNode::AfterRead()
{
	UVoxelNoiseNodeBase::AfterRead();

}

void UVoxelNode_NoiseNode::BeforeDelete()
{
	UVoxelNoiseNodeBase::BeforeDelete();

}

void UVoxelNode_2DGradientPerturb::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_2DGradientPerturb::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_NoiseNodeFractal::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_NoiseNodeFractal::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_2DGradientPerturbFractal::AfterRead()
{
	UVoxelNode_NoiseNodeFractal::AfterRead();

}

void UVoxelNode_2DGradientPerturbFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeFractal::BeforeDelete();

}

void UVoxelNode_3DGradientPerturb::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_3DGradientPerturb::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_3DGradientPerturbFractal::AfterRead()
{
	UVoxelNode_NoiseNodeFractal::AfterRead();

}

void UVoxelNode_3DGradientPerturbFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeFractal::BeforeDelete();

}

void UVoxelEditNode::AfterRead()
{
	UVoxelEditNodeBase::AfterRead();

}

void UVoxelEditNode::BeforeDelete()
{
	UVoxelEditNodeBase::BeforeDelete();

}

void UVoxelNode_EditGetValue::AfterRead()
{
	UVoxelEditNode::AfterRead();

}

void UVoxelNode_EditGetValue::BeforeDelete()
{
	UVoxelEditNode::BeforeDelete();

}

void UVoxelNode_EditGetMaterial::AfterRead()
{
	UVoxelEditNode::AfterRead();

}

void UVoxelNode_EditGetMaterial::BeforeDelete()
{
	UVoxelEditNode::BeforeDelete();

}

void UVoxelNode_EditGetCustomOutput::AfterRead()
{
	UVoxelEditNode::AfterRead();

}

void UVoxelNode_EditGetCustomOutput::BeforeDelete()
{
	UVoxelEditNode::BeforeDelete();

}

void UVoxelNode_EditGetHardness::AfterRead()
{
	UVoxelEditNodeBase::AfterRead();

}

void UVoxelNode_EditGetHardness::BeforeDelete()
{
	UVoxelEditNodeBase::BeforeDelete();

}

void UVoxelNode_LocalToGlobal::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_LocalToGlobal::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_GlobalToLocal::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_GlobalToLocal::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_GlobalX::AfterRead()
{
	UVoxelFloatNode::AfterRead();

}

void UVoxelNode_GlobalX::BeforeDelete()
{
	UVoxelFloatNode::BeforeDelete();

}

void UVoxelNode_GlobalY::AfterRead()
{
	UVoxelFloatNode::AfterRead();

}

void UVoxelNode_GlobalY::BeforeDelete()
{
	UVoxelFloatNode::BeforeDelete();

}

void UVoxelNode_GlobalZ::AfterRead()
{
	UVoxelFloatNode::AfterRead();

}

void UVoxelNode_GlobalZ::BeforeDelete()
{
	UVoxelFloatNode::BeforeDelete();

}

// Function:
//		Offset -> 0x003F9440
//		Name   -> Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphIntParameter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UVoxelWorldGenerator*                        WorldGenerator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       UniqueName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelGraphBlueprintTools::STATIC_SetVoxelGraphIntParameter(class UVoxelWorldGenerator* WorldGenerator, const struct FName& UniqueName, int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphIntParameter");

	UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Params params {};
	params.WorldGenerator = WorldGenerator;
	params.UniqueName = UniqueName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F9340
//		Name   -> Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphFloatParameter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UVoxelWorldGenerator*                        WorldGenerator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       UniqueName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelGraphBlueprintTools::STATIC_SetVoxelGraphFloatParameter(class UVoxelWorldGenerator* WorldGenerator, const struct FName& UniqueName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphFloatParameter");

	UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Params params {};
	params.WorldGenerator = WorldGenerator;
	params.UniqueName = UniqueName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F92D0
//		Name   -> Function VoxelGraph.VoxelGraphBlueprintTools.ClearConstantsOverrides
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UVoxelWorldGenerator*                        WorldGenerator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelGraphBlueprintTools::STATIC_ClearConstantsOverrides(class UVoxelWorldGenerator* WorldGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoxelGraph.VoxelGraphBlueprintTools.ClearConstantsOverrides");

	UVoxelGraphBlueprintTools_ClearConstantsOverrides_Params params {};
	params.WorldGenerator = WorldGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UVoxelGraphBlueprintTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelGraphBlueprintTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UVoxelGraphGenerator::AfterRead()
{
	UVoxelTransformableWorldGenerator::AfterRead();

	READ_PTR_FULL(Outputs, UVoxelGraphOutputsConfig);
	READ_PTR_FULL(FirstNode, UVoxelNode);
}

void UVoxelGraphGenerator::BeforeDelete()
{
	UVoxelTransformableWorldGenerator::BeforeDelete();

	DELE_PTR_FULL(Outputs);
	DELE_PTR_FULL(FirstNode);
}

void UVoxelGraphGeneratorHelper::AfterRead()
{
	UVoxelTransformableWorldGenerator::AfterRead();

}

void UVoxelGraphGeneratorHelper::BeforeDelete()
{
	UVoxelTransformableWorldGenerator::BeforeDelete();

}

void UVoxelGraphMacroInputOutputNode::AfterRead()
{
	UVoxelNode::AfterRead();

	READ_PTR_FULL(Macro, UVoxelGraphMacro);
}

void UVoxelGraphMacroInputOutputNode::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

	DELE_PTR_FULL(Macro);
}

void UVoxelGraphMacroInputNode::AfterRead()
{
	UVoxelGraphMacroInputOutputNode::AfterRead();

}

void UVoxelGraphMacroInputNode::BeforeDelete()
{
	UVoxelGraphMacroInputOutputNode::BeforeDelete();

}

void UVoxelGraphMacroOutputNode::AfterRead()
{
	UVoxelGraphMacroInputOutputNode::AfterRead();

}

void UVoxelGraphMacroOutputNode::BeforeDelete()
{
	UVoxelGraphMacroInputOutputNode::BeforeDelete();

}

void UVoxelGraphMacro::AfterRead()
{
	UVoxelGraphGenerator::AfterRead();

	READ_PTR_FULL(InputNode, UVoxelGraphMacroInputNode);
	READ_PTR_FULL(OutputNode, UVoxelGraphMacroOutputNode);
}

void UVoxelGraphMacro::BeforeDelete()
{
	UVoxelGraphGenerator::BeforeDelete();

	DELE_PTR_FULL(InputNode);
	DELE_PTR_FULL(OutputNode);
}

void UVoxelGraphMacroNode::AfterRead()
{
	UVoxelNode::AfterRead();

	READ_PTR_FULL(Macro, UVoxelGraphMacro);
}

void UVoxelGraphMacroNode::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

	DELE_PTR_FULL(Macro);
}

void UVoxelGraphOutputsConfig::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelGraphOutputsConfig::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelGraphPreviewSettings::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Mesh, UStaticMesh);
	READ_PTR_FULL(Material, UMaterialInterface);
	READ_PTR_FULL(Graph, UVoxelGraphGenerator);
}

void UVoxelGraphPreviewSettings::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(Material);
	DELE_PTR_FULL(Graph);
}

void UVoxelNode_HeightmapSampler::AfterRead()
{
	UVoxelExposedNode::AfterRead();

	READ_PTR_FULL(HeightmapFloat, UVoxelHeightmapAssetFloat);
	READ_PTR_FULL(HeightmapUINT16, UVoxelHeightmapAssetUINT16);
}

void UVoxelNode_HeightmapSampler::BeforeDelete()
{
	UVoxelExposedNode::BeforeDelete();

	DELE_PTR_FULL(HeightmapFloat);
	DELE_PTR_FULL(HeightmapUINT16);
}

void UVoxelLocalVariableBase::AfterRead()
{
	UVoxelNode::AfterRead();

}

void UVoxelLocalVariableBase::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

}

void UVoxelLocalVariableDeclaration::AfterRead()
{
	UVoxelLocalVariableBase::AfterRead();

}

void UVoxelLocalVariableDeclaration::BeforeDelete()
{
	UVoxelLocalVariableBase::BeforeDelete();

}

void UVoxelLocalVariableUsage::AfterRead()
{
	UVoxelLocalVariableBase::AfterRead();

	READ_PTR_FULL(Declaration, UVoxelLocalVariableDeclaration);
}

void UVoxelLocalVariableUsage::BeforeDelete()
{
	UVoxelLocalVariableBase::BeforeDelete();

	DELE_PTR_FULL(Declaration);
}

void UVoxelGraphNodeInterface::AfterRead()
{
	UEdGraphNode::AfterRead();

}

void UVoxelGraphNodeInterface::BeforeDelete()
{
	UEdGraphNode::BeforeDelete();

}

void UVoxelNode_NoiseNodeWithDerivative::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_NoiseNodeWithDerivative::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_NoiseNodeWithDerivativeFractal::AfterRead()
{
	UVoxelNode_NoiseNodeFractal::AfterRead();

}

void UVoxelNode_NoiseNodeWithDerivativeFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeFractal::BeforeDelete();

}

void UVoxelNode_2DValueNoise::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivative::AfterRead();

}

void UVoxelNode_2DValueNoise::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivative::BeforeDelete();

}

void UVoxelNode_2DValueNoiseFractal::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::AfterRead();

}

void UVoxelNode_2DValueNoiseFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::BeforeDelete();

}

void UVoxelNode_2DPerlinNoise::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivative::AfterRead();

}

void UVoxelNode_2DPerlinNoise::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivative::BeforeDelete();

}

void UVoxelNode_2DPerlinNoiseFractal::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::AfterRead();

}

void UVoxelNode_2DPerlinNoiseFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::BeforeDelete();

}

void UVoxelNode_2DSimplexNoise::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_2DSimplexNoise::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_2DSimplexNoiseFractal::AfterRead()
{
	UVoxelNode_NoiseNodeFractal::AfterRead();

}

void UVoxelNode_2DSimplexNoiseFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeFractal::BeforeDelete();

}

void UVoxelNode_2DCubicNoise::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_2DCubicNoise::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_2DCubicNoiseFractal::AfterRead()
{
	UVoxelNode_NoiseNodeFractal::AfterRead();

}

void UVoxelNode_2DCubicNoiseFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeFractal::BeforeDelete();

}

void UVoxelNode_3DValueNoise::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivative::AfterRead();

}

void UVoxelNode_3DValueNoise::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivative::BeforeDelete();

}

void UVoxelNode_3DValueNoiseFractal::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::AfterRead();

}

void UVoxelNode_3DValueNoiseFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::BeforeDelete();

}

void UVoxelNode_3DPerlinNoise::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivative::AfterRead();

}

void UVoxelNode_3DPerlinNoise::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivative::BeforeDelete();

}

void UVoxelNode_3DPerlinNoiseFractal::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::AfterRead();

}

void UVoxelNode_3DPerlinNoiseFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::BeforeDelete();

}

void UVoxelNode_3DSimplexNoise::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_3DSimplexNoise::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_3DSimplexNoiseFractal::AfterRead()
{
	UVoxelNode_NoiseNodeFractal::AfterRead();

}

void UVoxelNode_3DSimplexNoiseFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeFractal::BeforeDelete();

}

void UVoxelNode_3DCubicNoise::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_3DCubicNoise::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_3DCubicNoiseFractal::AfterRead()
{
	UVoxelNode_NoiseNodeFractal::AfterRead();

}

void UVoxelNode_3DCubicNoiseFractal::BeforeDelete()
{
	UVoxelNode_NoiseNodeFractal::BeforeDelete();

}

void UVoxelNode_CellularNoise::AfterRead()
{
	UVoxelNode_NoiseNode::AfterRead();

}

void UVoxelNode_CellularNoise::BeforeDelete()
{
	UVoxelNode_NoiseNode::BeforeDelete();

}

void UVoxelNode_2DCellularNoise::AfterRead()
{
	UVoxelNode_CellularNoise::AfterRead();

}

void UVoxelNode_2DCellularNoise::BeforeDelete()
{
	UVoxelNode_CellularNoise::BeforeDelete();

}

void UVoxelNode_3DCellularNoise::AfterRead()
{
	UVoxelNode_CellularNoise::AfterRead();

}

void UVoxelNode_3DCellularNoise::BeforeDelete()
{
	UVoxelNode_CellularNoise::BeforeDelete();

}

void UVoxelNode_IQNoiseBase::AfterRead()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::AfterRead();

}

void UVoxelNode_IQNoiseBase::BeforeDelete()
{
	UVoxelNode_NoiseNodeWithDerivativeFractal::BeforeDelete();

}

void UVoxelNode_2DIQNoiseBase::AfterRead()
{
	UVoxelNode_IQNoiseBase::AfterRead();

}

void UVoxelNode_2DIQNoiseBase::BeforeDelete()
{
	UVoxelNode_IQNoiseBase::BeforeDelete();

}

void UVoxelNode_ColorParameter::AfterRead()
{
	UVoxelOptionallyExposedNode::AfterRead();

}

void UVoxelNode_ColorParameter::BeforeDelete()
{
	UVoxelOptionallyExposedNode::BeforeDelete();

}

void UVoxelSeedNode::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelSeedNode::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Seed::AfterRead()
{
	UVoxelSeedNode::AfterRead();

}

void UVoxelNode_Seed::BeforeDelete()
{
	UVoxelSeedNode::BeforeDelete();

}

void UVoxelNode_AddSeeds::AfterRead()
{
	UVoxelSeedNode::AfterRead();

}

void UVoxelNode_AddSeeds::BeforeDelete()
{
	UVoxelSeedNode::BeforeDelete();

}

void UVoxelNode_TextureSampler::AfterRead()
{
	UVoxelExposedNode::AfterRead();

	READ_PTR_FULL(Texture, UTexture2D);
}

void UVoxelNode_TextureSampler::BeforeDelete()
{
	UVoxelExposedNode::BeforeDelete();

	DELE_PTR_FULL(Texture);
}

void UVoxelNode_VoronoiNoiseBase::AfterRead()
{
	UVoxelNoiseNodeBase::AfterRead();

}

void UVoxelNode_VoronoiNoiseBase::BeforeDelete()
{
	UVoxelNoiseNodeBase::BeforeDelete();

}

void UVoxelNode_2DVoronoiNoise::AfterRead()
{
	UVoxelNode_VoronoiNoiseBase::AfterRead();

}

void UVoxelNode_2DVoronoiNoise::BeforeDelete()
{
	UVoxelNode_VoronoiNoiseBase::BeforeDelete();

}

void UVoxelNode_2DWhiteNoise::AfterRead()
{
	UVoxelNoiseNodeBase::AfterRead();

}

void UVoxelNode_2DWhiteNoise::BeforeDelete()
{
	UVoxelNoiseNodeBase::BeforeDelete();

}

void UVoxelNode_3DWhiteNoise::AfterRead()
{
	UVoxelNoiseNodeBase::AfterRead();

}

void UVoxelNode_3DWhiteNoise::BeforeDelete()
{
	UVoxelNoiseNodeBase::BeforeDelete();

}

void UVoxelNode_WorldGeneratorSamplerBase::AfterRead()
{
	UVoxelExposedNode::AfterRead();

}

void UVoxelNode_WorldGeneratorSamplerBase::BeforeDelete()
{
	UVoxelExposedNode::BeforeDelete();

}

void UVoxelNode_GetWorldGeneratorValue::AfterRead()
{
	UVoxelNode_WorldGeneratorSamplerBase::AfterRead();

}

void UVoxelNode_GetWorldGeneratorValue::BeforeDelete()
{
	UVoxelNode_WorldGeneratorSamplerBase::BeforeDelete();

}

void UVoxelNode_GetWorldGeneratorMaterial::AfterRead()
{
	UVoxelNode_WorldGeneratorSamplerBase::AfterRead();

}

void UVoxelNode_GetWorldGeneratorMaterial::BeforeDelete()
{
	UVoxelNode_WorldGeneratorSamplerBase::BeforeDelete();

}

void UVoxelNode_WorldGeneratorSampler::AfterRead()
{
	UVoxelExposedNode::AfterRead();

}

void UVoxelNode_WorldGeneratorSampler::BeforeDelete()
{
	UVoxelExposedNode::BeforeDelete();

}

void UVoxelNode_3DIQNoiseBase::AfterRead()
{
	UVoxelNode_IQNoiseBase::AfterRead();

}

void UVoxelNode_3DIQNoiseBase::BeforeDelete()
{
	UVoxelNode_IQNoiseBase::BeforeDelete();

}

void UVoxelNode_2DIQNoise::AfterRead()
{
	UVoxelNode_2DIQNoiseBase::AfterRead();

}

void UVoxelNode_2DIQNoise::BeforeDelete()
{
	UVoxelNode_2DIQNoiseBase::BeforeDelete();

}

void UVoxelNode_3DIQNoise::AfterRead()
{
	UVoxelNode_3DIQNoiseBase::AfterRead();

}

void UVoxelNode_3DIQNoise::BeforeDelete()
{
	UVoxelNode_3DIQNoiseBase::BeforeDelete();

}

void UVoxelNode_LODSwitch::AfterRead()
{
	UVoxelNode::AfterRead();

}

void UVoxelNode_LODSwitch::BeforeDelete()
{
	UVoxelNode::BeforeDelete();

}

void UVoxelNode_StaticClampFloat::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_StaticClampFloat::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_RangeAnalysisDebuggerFloat::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_RangeAnalysisDebuggerFloat::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_Sleep::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_Sleep::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_TargetSelector::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_TargetSelector::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_RangeUnion::AfterRead()
{
	UVoxelNodeHelper::AfterRead();

}

void UVoxelNode_RangeUnion::BeforeDelete()
{
	UVoxelNodeHelper::BeforeDelete();

}

void UVoxelNode_FloatParameter::AfterRead()
{
	UVoxelOptionallyExposedNode::AfterRead();

}

void UVoxelNode_FloatParameter::BeforeDelete()
{
	UVoxelOptionallyExposedNode::BeforeDelete();

}

void UVoxelNode_IntParameter::AfterRead()
{
	UVoxelOptionallyExposedNode::AfterRead();

}

void UVoxelNode_IntParameter::BeforeDelete()
{
	UVoxelOptionallyExposedNode::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

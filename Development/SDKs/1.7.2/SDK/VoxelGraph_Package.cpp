/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BiomeMerge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BiomeMerge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BiomeMerge");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNodeHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNodeHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNodeHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMaterialNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMaterialNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelMaterialNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFloatNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFloatNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelFloatNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelIntNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelIntNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelIntNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelEditNodeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelEditNodeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelEditNodeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNoiseNodeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNoiseNodeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNoiseNodeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExposedNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExposedNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExposedNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BiomeMapSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BiomeMapSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BiomeMapSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Curve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Curve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Curve");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CurveColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CurveColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CurveColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_XF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_XF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_XF");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_YF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_YF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_YF");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ZF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ZF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ZF");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_XI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_XI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_XI");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_YI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_YI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_YI");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ZI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ZI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ZI");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeMaterialFromColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeMaterialFromColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeMaterialFromSingleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeMaterialFromSingleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromSingleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetDoubleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetDoubleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetDoubleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeMaterialFromDoubleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromDoubleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FMax.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FMax::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMax");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FMin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FMin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMin");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IMax.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IMax::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMax");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IMin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IMin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMin");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FLess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FLess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FLess");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FLessEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FLessEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FLessEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FGreater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FGreater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FGreater");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FGreaterEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FGreaterEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FGreaterEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FNotEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FNotEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FNotEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ILess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ILess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILess");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ILessEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ILessEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILessEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IGreater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IGreater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IGreater");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IGreaterEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IGreaterEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IGreaterEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_INotEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_INotEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_INotEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FAdd.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FAdd::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FAdd");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FMultiply.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FMultiply::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMultiply");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FSubstract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FSubstract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FSubstract");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FDivide.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FDivide::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FDivide");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IAdd.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IAdd::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IAdd");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IMultiply.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IMultiply::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMultiply");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ISubstract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ISubstract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ISubstract");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IDivide.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IDivide::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IDivide");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ILeftBitShift.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ILeftBitShift::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILeftBitShift");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IRightBitShift.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IRightBitShift::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IRightBitShift");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FloatOfInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FloatOfInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FloatOfInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Round.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Round::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Round");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Lerp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Lerp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Lerp");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SafeLerp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SafeLerp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SafeLerp");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Clamp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Clamp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Clamp");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BAnd.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BAnd::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BAnd");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BOr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BOr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BOr");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BNot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BNot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BNot");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SwitchInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SwitchInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SwitchInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SwitchFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SwitchFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SwitchFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_1MinusX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_1MinusX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_1MinusX");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_OneOverX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_OneOverX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_OneOverX");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MinusX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MinusX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MinusX");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Sqrt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Sqrt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sqrt");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Pow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Pow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Pow");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IMod.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IMod::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMod");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FMod.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FMod::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMod");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FAbs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FAbs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FAbs");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IAbs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IAbs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IAbs");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Ceil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Ceil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Ceil");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Floor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Floor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Floor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VectorLength.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VectorLength::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VectorLength");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Fraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Fraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Fraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FSign.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FSign::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FSign");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ISign.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ISign::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ISign");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_InvSqrt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_InvSqrt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_InvSqrt");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Loge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Loge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Loge");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Exp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Exp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Exp");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Sin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Sin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sin");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Asin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Asin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Asin");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Sinh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Sinh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sinh");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Cos.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Cos::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Cos");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Acos.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Acos::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Acos");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Tan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Tan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Tan");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Atan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Atan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Atan");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Atan2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Atan2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Atan2");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VectorRotateAngleAxis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VectorRotateAngleAxis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VectorRotateAngleAxis");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_PerlinWormDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_PerlinWormDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_PerlinWormDistance");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_LOD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_LOD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LOD");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RandomFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RandomFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RandomFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RandomInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RandomInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RandomInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VoxelSize.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VoxelSize::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VoxelSize");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_WorldSize.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_WorldSize::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_WorldSize");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_If.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_If::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_If");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IfWithDefaultToFalse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IfWithDefaultToFalse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IfWithDefaultToFalse");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IfWithDefaultToTrue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IfWithDefaultToTrue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IfWithDefaultToTrue");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetDoubleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetDoubleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetDoubleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetSingleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetSingleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetSingleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FunctionSeparator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FunctionSeparator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FunctionSeparator");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FlowMerge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FlowMerge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FlowMerge");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelOptionallyExposedNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelOptionallyExposedNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelOptionallyExposedNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NoiseNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NoiseNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DGradientPerturb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DGradientPerturb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DGradientPerturb");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NoiseNodeFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NoiseNodeFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DGradientPerturbFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DGradientPerturbFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DGradientPerturbFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DGradientPerturb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DGradientPerturb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DGradientPerturb");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DGradientPerturbFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DGradientPerturbFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DGradientPerturbFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelEditNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelEditNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelEditNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EditGetValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EditGetValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EditGetMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EditGetMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EditGetCustomOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EditGetCustomOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetCustomOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EditGetHardness.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EditGetHardness::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetHardness");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_LocalToGlobal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_LocalToGlobal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LocalToGlobal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GlobalToLocal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GlobalToLocal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalToLocal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GlobalX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GlobalX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalX");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GlobalY.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GlobalY::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalY");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GlobalZ.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GlobalZ::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalZ");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x003F9440
	 * 		Name   -> Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphIntParameter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVoxelWorldGenerator*                        WorldGenerator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        UniqueName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelGraphBlueprintTools::STATIC_SetVoxelGraphIntParameter(class UVoxelWorldGenerator* WorldGenerator, const class FName& UniqueName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphIntParameter");
		
		UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Params params {};
		params.WorldGenerator = WorldGenerator;
		params.UniqueName = UniqueName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x003F9340
	 * 		Name   -> Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphFloatParameter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVoxelWorldGenerator*                        WorldGenerator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        UniqueName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelGraphBlueprintTools::STATIC_SetVoxelGraphFloatParameter(class UVoxelWorldGenerator* WorldGenerator, const class FName& UniqueName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphFloatParameter");
		
		UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Params params {};
		params.WorldGenerator = WorldGenerator;
		params.UniqueName = UniqueName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x003F92D0
	 * 		Name   -> Function VoxelGraph.VoxelGraphBlueprintTools.ClearConstantsOverrides
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVoxelWorldGenerator*                        WorldGenerator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelGraphBlueprintTools::STATIC_ClearConstantsOverrides(class UVoxelWorldGenerator* WorldGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VoxelGraph.VoxelGraphBlueprintTools.ClearConstantsOverrides");
		
		UVoxelGraphBlueprintTools_ClearConstantsOverrides_Params params {};
		params.WorldGenerator = WorldGenerator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphBlueprintTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphBlueprintTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphBlueprintTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphGeneratorHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphGeneratorHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphGeneratorHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacroInputOutputNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacroInputOutputNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroInputOutputNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacroInputNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacroInputNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroInputNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacroOutputNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacroOutputNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroOutputNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacro.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacro::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacro");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacroNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacroNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphOutputsConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphOutputsConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphOutputsConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphPreviewSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphPreviewSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphPreviewSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_HeightmapSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_HeightmapSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_HeightmapSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLocalVariableBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLocalVariableBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLocalVariableDeclaration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLocalVariableDeclaration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableDeclaration");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLocalVariableUsage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLocalVariableUsage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableUsage");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphNodeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphNodeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphNodeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NoiseNodeWithDerivative.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NoiseNodeWithDerivative::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeWithDerivative");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NoiseNodeWithDerivativeFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NoiseNodeWithDerivativeFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeWithDerivativeFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DValueNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DValueNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DValueNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DValueNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DValueNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DValueNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DPerlinNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DPerlinNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DPerlinNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DPerlinNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DPerlinNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DPerlinNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DSimplexNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DSimplexNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DSimplexNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DSimplexNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DSimplexNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DSimplexNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DCubicNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DCubicNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCubicNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DCubicNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DCubicNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCubicNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DValueNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DValueNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DValueNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DValueNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DValueNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DValueNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DPerlinNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DPerlinNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DPerlinNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DPerlinNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DPerlinNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DPerlinNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DSimplexNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DSimplexNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DSimplexNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DSimplexNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DSimplexNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DSimplexNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DCubicNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DCubicNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCubicNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DCubicNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DCubicNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCubicNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CellularNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CellularNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CellularNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DCellularNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DCellularNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCellularNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DCellularNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DCellularNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCellularNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IQNoiseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IQNoiseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IQNoiseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DIQNoiseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DIQNoiseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DIQNoiseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DIQNoiseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DIQNoiseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DIQNoiseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DIQNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DIQNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DIQNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DIQNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DIQNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DIQNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_LODSwitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_LODSwitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LODSwitch");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_StaticClampFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_StaticClampFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_StaticClampFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RangeAnalysisDebuggerFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RangeAnalysisDebuggerFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Sleep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Sleep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sleep");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_TargetSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_TargetSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_TargetSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RangeUnion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RangeUnion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RangeUnion");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FloatParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FloatParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FloatParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IntParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IntParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IntParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ColorParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ColorParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ColorParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSeedNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSeedNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelSeedNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Seed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Seed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Seed");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_AddSeeds.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_AddSeeds::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_AddSeeds");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_TextureSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_TextureSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_TextureSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VoronoiNoiseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VoronoiNoiseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VoronoiNoiseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DVoronoiNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DVoronoiNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DVoronoiNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DWhiteNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DWhiteNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DWhiteNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DWhiteNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DWhiteNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DWhiteNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_WorldGeneratorSamplerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_WorldGeneratorSamplerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_WorldGeneratorSamplerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetWorldGeneratorValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetWorldGeneratorValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetWorldGeneratorValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetWorldGeneratorMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetWorldGeneratorMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetWorldGeneratorMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_WorldGeneratorSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_WorldGeneratorSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_WorldGeneratorSampler");
		return ptr;
	}

}



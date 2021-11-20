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

void FAxis::AfterRead()
{
}

void FAxis::BeforeDelete()
{
}

void FConstraintDescriptor::AfterRead()
{
}

void FConstraintDescriptor::BeforeDelete()
{
}

void FConstraintData::AfterRead()
{
}

void FConstraintData::BeforeDelete()
{
}

void FFilterOptionPerAxis::AfterRead()
{
}

void FFilterOptionPerAxis::BeforeDelete()
{
}

void FConstraintDescriptionEx::AfterRead()
{
}

void FConstraintDescriptionEx::BeforeDelete()
{
}

void FAimConstraintDescription::AfterRead()
{
	FConstraintDescriptionEx::AfterRead();

}

void FAimConstraintDescription::BeforeDelete()
{
	FConstraintDescriptionEx::BeforeDelete();

}

void FTransformConstraintDescription::AfterRead()
{
	FConstraintDescriptionEx::AfterRead();

}

void FTransformConstraintDescription::BeforeDelete()
{
	FConstraintDescriptionEx::BeforeDelete();

}

void FConstraintDescription::AfterRead()
{
}

void FConstraintDescription::BeforeDelete()
{
}

void FTransformConstraint::AfterRead()
{
}

void FTransformConstraint::BeforeDelete()
{
}

void FConstraintOffset::AfterRead()
{
}

void FConstraintOffset::BeforeDelete()
{
}

void FTransformFilter::AfterRead()
{
}

void FTransformFilter::BeforeDelete()
{
}

void FEulerTransform::AfterRead()
{
}

void FEulerTransform::BeforeDelete()
{
}

void FNodeChain::AfterRead()
{
}

void FNodeChain::BeforeDelete()
{
}

void FNodeObject::AfterRead()
{
}

void FNodeObject::BeforeDelete()
{
}

void FNodeHierarchyData::AfterRead()
{
}

void FNodeHierarchyData::BeforeDelete()
{
}

void FNodeHierarchyWithUserData::AfterRead()
{
}

void FNodeHierarchyWithUserData::BeforeDelete()
{
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

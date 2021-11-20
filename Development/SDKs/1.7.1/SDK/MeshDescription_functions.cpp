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

void FElementID::AfterRead()
{
}

void FElementID::BeforeDelete()
{
}

void FPolygonGroupID::AfterRead()
{
	FElementID::AfterRead();

}

void FPolygonGroupID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FPolygonID::AfterRead()
{
	FElementID::AfterRead();

}

void FPolygonID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FVertexID::AfterRead()
{
	FElementID::AfterRead();

}

void FVertexID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FEdgeID::AfterRead()
{
	FElementID::AfterRead();

}

void FEdgeID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FVertexInstanceID::AfterRead()
{
	FElementID::AfterRead();

}

void FVertexInstanceID::BeforeDelete()
{
	FElementID::BeforeDelete();

}

void FMeshTriangle::AfterRead()
{
}

void FMeshTriangle::BeforeDelete()
{
}

void UMeshDescription::AfterRead()
{
	UObject::AfterRead();

}

void UMeshDescription::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

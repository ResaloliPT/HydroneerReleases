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

void FSHAHashData::AfterRead()
{
}

void FSHAHashData::BeforeDelete()
{
}

void FCustomFieldData::AfterRead()
{
}

void FCustomFieldData::BeforeDelete()
{
}

void FChunkPartData::AfterRead()
{
}

void FChunkPartData::BeforeDelete()
{
}

void FFileManifestData::AfterRead()
{
}

void FFileManifestData::BeforeDelete()
{
}

void FChunkInfoData::AfterRead()
{
}

void FChunkInfoData::BeforeDelete()
{
}

void UBuildPatchManifest::AfterRead()
{
	UObject::AfterRead();

}

void UBuildPatchManifest::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GeometryCache.GeometryCacheMeshData
	 * Size -> 0x00A8
	 */
	struct FGeometryCacheMeshData
	{
	public:
		unsigned char                                              UnknownData_FSMC[0xA8];                                  // 0x0000(0x00A8) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct GeometryCache.TrackRenderData
	 * Size -> 0x0070
	 */
	struct FTrackRenderData
	{
	public:
		unsigned char                                              UnknownData_M11W[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct GeometryCache.GeometryCacheVertexInfo
	 * Size -> 0x0008
	 */
	struct FGeometryCacheVertexInfo
	{
	public:
		unsigned char                                              UnknownData_Y1FO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
	 * Size -> 0x000C
	 */
	struct FGeometryCacheMeshBatchInfo
	{
	public:
		unsigned char                                              UnknownData_1PWD[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

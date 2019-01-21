/*
 * Copyright (c) Microsoft Corporation.  All Rights Reserved.
 *
 * PROPERTYKEYs used internally by the Photo Acquisition engine
 *
 */

#pragma once
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_RelativePathname, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 2); // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_FinalFilename, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 3);    // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_GroupTag, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 4);    // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_TransferResult, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 5);    // VT_SCODE
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_OriginalFilename, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 6);    // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_CameraSequenceNumber, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 7);    // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_IntermediateFile, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 8);    // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_SkipImport, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 9);    // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_PhotoAcquire_DuplicateDetectionID, 0x00f23377, 0x7ac6, 0x4b7a, 0x84, 0x43, 0x34, 0x5e, 0x73, 0x1f, 0xa5, 0x7a, 10);    // VT_I4

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


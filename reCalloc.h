#ifndef __RECALLOC_H__
#define __RECALLOC_H__
#include <stdio.h>

/// Resizes pointer and fills with zero
/// @param ptr: Pointer to resize
/// @param sizePtr: size of Pointer type
/// @param oldSize: Old length of ptr
/// @param newSize: New length of ptr
void reCalloc(void ** ptr, size_t sizePtr, size_t oldSize, size_t newSize);

#endif


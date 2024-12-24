#ifndef __HEAPALLOC_H__
#define __HEAPALLOC_H__
#include <stdio.h>

void * malloc(size_t size);
void * realloc(void * ptr, size_t newSize);
void * calloc(size_t bytes, size_t sizePtr);

#endif


#include "reCalloc.h"

void reCalloc(void ** ptr, size_t sizePtr, size_t oldSize, size_t newSize) {
    if (oldSize >= newSize) {
        return;
    }
    void * tmp = realloc(*ptr, sizePtr * newSize);
    errno = NOERRORSFOUND;
    if (tmp == NULL) {
        errno = ENOMEM;
        return;
    }
    *ptr = tmp;
    memset((char *)*ptr + oldSize * sizePtr, 0, (newSize - oldSize) * sizePtr);
    return;
}

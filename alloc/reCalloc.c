#include "reCalloc.h"

void reCalloc(void ** ptr, size_t sizePtr, size_t oldSize, size_t newSize) {
    if (oldSize >= newSize) {
        return;
    }
    void * tmp = realloc(*ptr, sizePtr * newSize);
    errno = NOERRORSFOUND;
    assert(tmp == NULL, ENOMEM,);
    *ptr = tmp;
    memset((char *)*ptr + oldSize * sizePtr, 0, (newSize - oldSize) * sizePtr);
    return;
}

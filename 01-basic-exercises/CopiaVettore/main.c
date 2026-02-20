#include "copy_vector.h"

int main(void) {

    uint32_t dst[3], src[3];
    size_t n = sizeof(dst) / sizeof(uint32_t);

    copy_vector(dst, src, n);

    return 0;
}

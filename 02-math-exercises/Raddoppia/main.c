#include "raddoppia.h"

int main(void) {

    uint32_t x[] = { 1,2,3 };
    size_t n = sizeof(x) / sizeof(x[0]);

    raddoppia(x, n);

    return 0;
}
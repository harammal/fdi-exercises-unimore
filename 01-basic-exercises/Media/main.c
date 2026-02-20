#include "stat.h"

int main(void) {
    unsigned int n = 3;
    double* x = malloc(n * sizeof(double));
    x[0] = 2; x[1] = 3; x[2] = 5;

    double m = media(x, n);

    free(x);

    return 0;
}
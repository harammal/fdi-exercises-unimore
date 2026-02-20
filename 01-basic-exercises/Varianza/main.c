#include"stat.h"

int main(void) {

    unsigned int n = 5;
    double* x = malloc(n * sizeof(double));

    x[0] = 4; x[1] = 5; x[2] = 6; x[3] = 7; x[4] = 8;

    double var = varianza(x, n);
    free(x);

    return 0;
}
#include "array.h"

int main(void) {

    size_t n = 3;
    double *arr1 = malloc(n * sizeof(double));
    arr1[0] = 1; arr1[1] = 2; arr1[2] = 3;

    double *arr2 = malloc(n * sizeof(double));
    arr2[0] = 2; arr2[1] = 4; arr2[2] = 0;

    double *somma = array_somma(arr1, arr2, n);
    free(arr1);
    free(arr2);
    free(somma);

    return 0;
}
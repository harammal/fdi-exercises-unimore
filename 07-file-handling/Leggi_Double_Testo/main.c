#include "lettura.h"

int main(void) {
    size_t size = 0;

    double* numeri = leggidouble("dati1.txt", &size);

    free(numeri);

    return 0;
}
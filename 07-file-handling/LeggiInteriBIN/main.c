#include "lettura.h"

int main(void) {
    size_t size1, size2, size3, size4;

    int* mem1 = leggiinteri("dati1.bin", &size1);
    int* mem2 = leggiinteri("dati2.bin", &size2);
    int* mem3 = leggiinteri("dati3.bin", &size3);
    int* mem4 = leggiinteri("dati4.bin", &size4);

    free(mem1);
    free(mem2);
    free(mem3);
    free(mem4);

    return 0;
}
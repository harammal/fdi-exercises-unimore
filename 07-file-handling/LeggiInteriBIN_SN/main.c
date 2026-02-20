#include "lettura.h"

int main(void) {
    size_t *size1;
    int *mem1 = leggiinteri2("dati1.bin", &size1);

    size_t* size2;
    int* mem2 = leggiinteri2("dati2.bin", &size2);

    size_t* size3;
    int* mem3 = leggiinteri2("dati3.bin", &size3);

    free(mem1);
    free(mem2);
    free(mem3);

    return 0;
}
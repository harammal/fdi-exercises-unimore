#include "demography.h"

int main(void) {
    //const char* filename = "cities01.bin";
    //const char* filename = "cities02.bin";
    const char* filename = "cities03.bin";
    uint32_t n = 0;

    struct city* cities = read_cities(filename, &n);
    if (cities == NULL) {
        printf("Errore nella lettura del file '%s'.\n", filename);
        return 1;
    }

    printf("Numero di città lette: %u\n", n);
    for (uint32_t i = 0; i < n; ++i) {
        printf("Città %u: %s, popolazione: %u\n", i + 1, cities[i].name, cities[i].population);
    }

    // Libera la memoria
    for (uint32_t i = 0; i < n; ++i) {
        free(cities[i].name);
    }
    free(cities);

    return 0;
}

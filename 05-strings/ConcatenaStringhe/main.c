#include "stringhe.h"

int main(void) {

    char* conc = concatena("Ciao mi chiamo ", "Luis");
    free(conc);

    return 0;
}
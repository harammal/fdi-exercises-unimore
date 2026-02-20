#include <stdlib.h>

extern char* converti(unsigned int n); // Va sempre dichiarata la funzione quando non c'è il file.h

int main(void) {

    char* conv = converti(4355);

    free(conv);

    return 0;
}
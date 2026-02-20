#include <stdio.h>
#include <stdbool.h>

extern bool leggi_carattere_da_file(const char* filename, char* c);

int main(void) {
    char* c = 'c';
    leggi_carattere_da_file("leggi_carattere.txt", &c);

    return 0;
}
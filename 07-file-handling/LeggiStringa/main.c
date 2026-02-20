#include <stdbool.h>
#include <stdio.h>

extern bool leggi_stringa_da_file(const char* filename, char* s, size_t max_size);

int main(void) {
    char s[4];

    bool b =  leggi_stringa_da_file("leggi_stringa.txt", &s, 4);

    return 0;
}
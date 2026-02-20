#include "encrypt.h"
#include <stdlib.h>

int main(void) {

    char s[] = "Ciao1";
    size_t n = 6;

    encrypt(s, n);

    for (size_t i = 0; i < n; ++i) {
        s[i] ^= 0xAA;

    }

    return 0;
}
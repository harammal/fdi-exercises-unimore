#include "razionali.h"

int main(void) {
    struct fraz a = { 1, 2 }, b = { 1, 2 }, ris = { 0,0 };

    fr_somma(&ris, &a, &b);

    return 0;
}
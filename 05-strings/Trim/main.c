#include "trim.h"
#include <stdlib.h>

int main(void) {

    char* sp = trim(" senza spazi ");

    free(sp);

    return 0;
}
#include "geometria.h"

int main(void) {

    struct punto p1 = { 1, 2 };
    struct punto p2 = { 2, 3 };
    struct punto p3 = { 3, 4 };

    int col = colineari(p1, p2, p3);

    return 0;
}
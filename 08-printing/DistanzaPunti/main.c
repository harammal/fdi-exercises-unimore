#include "geometria.h"

int main(void) {

    struct punto a = { 2, 3 }, b = { 3, 4 };

    double dist = distanza(&a, &b);

    return 0;
}
#include "retta.h"

int main(void) {

    double x1 = 5, y1 = 6, x2 = 3, y2 = 8;
    double m, q;

    bool retta = retta_per_due_punti(x1, y1, x2, y2, &m, &q);

    return 0;
}
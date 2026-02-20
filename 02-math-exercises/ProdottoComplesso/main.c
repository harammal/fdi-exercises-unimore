#include "complessi.h"

int main(void) {

    struct complesso comp1 = { 2, 3 }, comp2 = { 3, 4 };

    prodotto_complesso(&comp1, &comp2);

    return 0;
}
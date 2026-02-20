#include "matrix.h"

int main(void) {

    double data[] = {
        -2147483649.000, -2147483657.000, -2147483651.000,
        -2147483654.000, -2147483650.000, -2147483655.000,
        -2147483656.000, -2147483653.000, -2147483652.000
    };
    struct matrix m = { 3, 3, data };

    double somma = sum_max_col(&m);

    return 0;
}
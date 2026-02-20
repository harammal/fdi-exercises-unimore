#include "matrix.h"

int main(void) {
	double data[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8};
	size_t r = 3, c = 3;
	struct matrix m = { r, c, data };

	double somma = sum_max_row(&m);

	return 0;
}
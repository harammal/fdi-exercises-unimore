#include "matrix.h"

int main(void) {
	double data[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	size_t r = 3, c = 3;
	struct matrix m = { r, c, data };

	mat_swaprows(&m, 0, 1);

	return 0;
}
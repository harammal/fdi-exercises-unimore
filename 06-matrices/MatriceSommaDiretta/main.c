#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"
#include <stdio.h>

int main(void) {

	double dataa[] = { 1, 3, 2, 2, 3, 1 };
	double datab[] = { 1, 6, 0, 1 };
	struct matrix a = { 2, 3, dataa };
	struct matrix b = { 2, 2, datab };

	struct matrix* m = mat_sommadiretta(&a, &b);

	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			printf("%.f ", E(m, r, c));
		}
		printf("\n");
	}

	return 0;
}
#include "matrix.h"

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

void mat_swaprows(struct matrix* mat, size_t r1, size_t r2) {

	for (size_t i = 0; i < mat->cols; ++i) {
		double tmp = E(mat, r2, i);
		E(mat, r2, i) = E(mat, r1, i);
		E(mat, r1, i) = tmp;
	}

	for (size_t r = 0; r < mat->rows; ++r) {
		for (size_t c = 0; c < mat->cols; ++c) {
			printf("%.1f ", E(mat, r, c));
		}
		printf("\n");
	}

	return;
}
#include "matrix.h"
#define E(mat, r, c) (mat)->data[(r) * (mat)->cols + (c)]

void mat_swaprows(struct matrix* mat, size_t r1, size_t r2) {
	
	for (size_t c = 0; c < mat->cols; ++c) {
		double tmp = E(mat, r1, c);
		E(mat, r1, c) = E(mat, r2, c);
		E(mat, r2, c) = tmp;
	}
}
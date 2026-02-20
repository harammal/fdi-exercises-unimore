#include "matrix.h"

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

bool scalar_mult(struct matrix* dst, const struct matrix* src, double k, bool accumulate) {
	if (dst == NULL || src == NULL || dst->rows != src->rows || dst->cols != src->cols) {
		return false;
	}

	if (!accumulate) {
		for (size_t r = 0; r < src->rows; r++) {
			for (size_t c = 0; c < src->cols; c++) {
				E(dst, r, c) = E(src, r, c) * k;
			}
		}
		return true;
	}
	else {
		for (size_t r = 0; r < src->rows; r++) {
			for (size_t c = 0; c < src->cols; c++) {
				E(dst, r, c) = E(dst, r, c) + (E(src, r, c) * k);
			}
		}
		return true;
	}
}
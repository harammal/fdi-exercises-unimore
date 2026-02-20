#include "matrix.h"
#include <math.h>
#include <float.h>
#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

double sum_max_row(const struct matrix* mat) {
	if (mat == NULL) {
		return NAN;
	}

	double somma = 0;

	for (size_t r = 0; r < mat->rows; ++r) {
		double max = -DBL_MAX;

		for (size_t c = 0; c < mat->cols; ++c) {
			if (E(mat, r, c) > max) {
				max = E(mat, r, c);
			}
		}

		somma += max;
	}

	return somma;
}
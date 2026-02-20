#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"
#include <float.h>
#include <math.h>
#include <stdio.h>

double sum_max_col(const struct matrix* mat) {
	if (mat == NULL) {
		return NAN;
	}

	double somma = 0.0;

	for (size_t c = 0; c < mat->cols; c++) {
		double max = -DBL_MAX;

		for (size_t r = 0; r < mat->rows; r++) {
			if (E(mat, r, c) > max) {
				max = E(mat, r, c);
			}
		}
		printf("%f\n", max);
		somma += max;
	}

	return somma;
}
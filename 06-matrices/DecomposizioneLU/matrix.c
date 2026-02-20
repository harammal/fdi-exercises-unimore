#include "matrix.h"
#include <string.h>
#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

bool LUdecomposition(const struct matrix* mat, struct matrix* lower, struct matrix* upper) {
	if (mat == NULL || lower == NULL || upper == NULL) {
		return false;
	}
	if (mat->rows != mat->cols || lower->rows != lower->cols || upper->rows != upper->cols || 
		mat->rows != lower->rows || mat->cols != lower->cols || 
		lower->rows != upper->rows || lower->cols != upper->cols) {
		return false;
	}
	size_t n = mat->rows;

	for (size_t r = 0; r < mat->rows; ++r) {
		for (size_t c = 0; c < mat->cols; ++c) {
			if (r == c) {
				E(lower, r, c) = 1.0;
			}
			else {
				E(lower, r, c) = 0.0;
			}
			E(upper, r, c) = 0.0;
		}
	}

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = i; j < n; ++j) {
			double somma1 = 0.0;

			for (size_t t = 0; t < i; ++t) {
				somma1 += (E(lower, i, t) * E(upper, t, j));
			}
			E(upper, i, j) = E(mat, i, j) - somma1;
		}

		if (E(upper, i, i) == 0) {
			return false;
		}

		for (size_t j = i + 1; j < n; ++j) {
			double somma2 = 0.0;
			for (size_t t = 0; t < i; ++t) {
				somma2 += (E(lower, j, t) * E(upper, t, i));
			}

			E(lower, j, i) = (1 / E(upper, i, i)) * (E(mat, j, i) - somma2);
		}
	}

	return true;
}
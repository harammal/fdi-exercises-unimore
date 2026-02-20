#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"
#include <stdio.h>

struct matrix* mat_rowmul(const struct matrix* m1, const struct matrix* m2) {
	if (m1 == NULL || m2 == NULL || m2->rows != m1->rows || m2->cols != 1) {
		return NULL;
	}

	struct matrix* m3 = malloc(sizeof(struct matrix));
	m3->rows = m1->rows;
	m3->cols = m1->cols;
	m3->data = malloc(m3->rows * m3->cols * sizeof(double));

	for (size_t r = 0; r < m3->rows; ++r) {
		for (size_t c = 0; c < m3->cols; ++c) {
			E(m3, r, c) = E(m1, r, c) * E(m2, r, 0);
		}
	}

	return m3;
}
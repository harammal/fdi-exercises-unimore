#include "matrix.h"

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

struct matrix* mat_transpose(const struct matrix* mat) {
	if (mat == NULL) {
		return NULL;
	}

	struct matrix* m = malloc(sizeof(struct matrix));
	if (m == NULL) {
		return NULL;
	}

	m->rows = mat->cols;
	m->cols = mat->rows;
	m->data = malloc(m->rows * m->cols * sizeof(double));
	if (m->data == NULL) {
		return NULL;
	}

	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			E(m, r, c) = E(mat, c, r);
		}
	}

	return m;
}
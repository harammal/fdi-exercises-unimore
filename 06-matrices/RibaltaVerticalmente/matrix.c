#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"

struct matrix* matrix_flip_v(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix* v = malloc(sizeof(struct matrix));
	v->rows = m->rows;
	v->cols = m->cols;
	v->data = malloc(v->rows * v->cols * sizeof(double));

	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			E(v, r, c) = E(m, (m->rows - 1) - r, c);
		}
	}

	return v;
}
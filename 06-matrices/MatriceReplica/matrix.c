#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"

struct matrix* mat_replica(const struct matrix* a, int dir) {
	struct matrix* m = malloc(sizeof(struct matrix));
	if (m == NULL) {
		return NULL;
	}

	if (dir == 0) {
		m->rows = a->rows;
		m->cols = a->cols * 2;
	}
	else {
		m->rows = a->rows * 2;
		m->cols = a->cols;
	}

	m->data = malloc(m->rows * m->cols * sizeof(double));
	if (m->data == NULL) {
		return NULL;
	}

	for (size_t r = 0; r < a->rows; ++r) {
		for (size_t c = 0; c < a->cols; ++c) {
			E(m, r, c) = E(a, r, c);
		}
	}

	if (dir == 0) {
		for (size_t r = 0; r < m->rows; ++r) {
			for (size_t c = a->cols; c < m->cols; ++c) {
				E(m, r, c) = E(a, r, c - a->cols);
			}
		}
	}
	else {
		for (size_t r = a->rows; r < m->rows; ++r) {
			for (size_t c = 0; c < m->cols; ++c) {
				E(m, r, c) = E(a, r - a->rows, c);
			}
		}
	}
	
	return m;
}
#include "matrix.h"

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

struct matrix* matrix_quadruplica(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix* mq = malloc(sizeof(struct matrix));
	if (mq == NULL) {
		return NULL;
	}
	mq->rows = m->rows * 2;
	mq->cols = m->cols * 2;
	mq->data = malloc(mq->rows * mq->cols * sizeof(double));
	if (mq->data == NULL) {
		return NULL;
	}

	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			E(mq, r, c) = E(m, r, c);
			E(mq, r, c + m->cols) = E(m, r, c);
			E(mq, r + m->rows, c) = E(m, r, c);
			E(mq, r + m->rows, c + m->cols) = E(m, r, c);
		}
	}

	return mq;
}
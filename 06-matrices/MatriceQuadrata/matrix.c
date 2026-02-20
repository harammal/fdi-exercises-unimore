#include "matrix.h"
#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

struct matrix* mat_rendiquadrata(const struct matrix* a) {
	if (a == NULL) {
		return NULL;
	}

	struct matrix* mq = malloc(sizeof(struct matrix));

	mq->rows = a->rows;
	mq->cols = a->cols;

	while (mq->rows < mq->cols) {
		mq->rows++;
	}
	while (mq->cols < mq->rows) {
		mq->cols++;
	}
	mq->data = malloc(mq->rows * mq->cols * sizeof(double));

	for (size_t r = 0; r < mq->rows; ++r) {
		for (size_t c = 0; c < mq->cols; ++c) {
			if (r < a->rows && c < a->cols) {
				E(mq, r, c) = E(a, r, c);
			}
			else {
				E(mq, r, c) = 0;
			}
		}
	}

	return mq;
}
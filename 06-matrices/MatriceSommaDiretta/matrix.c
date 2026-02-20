#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"

struct matrix* mat_sommadiretta(const struct matrix* a, const struct matrix* b) {
	struct matrix* m = malloc(sizeof(struct matrix));
	if (m == NULL) {
		return NULL;
	}

	m->rows = a->rows + b->rows;
	m->cols = a->cols + b->cols;
	m->data = malloc(m->rows * m->cols * sizeof(double));

	if (m->data == NULL) {
		return NULL;
	}

	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			if (r < a->rows && c < a->cols) {
				E(m, r, c) = E(a, r, c);
			}
			else
				if (r < a->rows && c >= a->cols) {
					E(m, r, c) = 0;
				}
				else
					if (r >= a->rows && c < a->cols) {
						E(m, r, c) = 0;
					}
					else
						if (r >= a->rows && c >= a->cols) {
							E(m, r, c) = E(b, r - a->rows, c - a->cols);;
						}
		}
	}

	return m;
}
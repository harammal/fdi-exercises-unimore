#include "matrix.h"

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

struct matrix* scambia_diagonali(const struct matrix* m) {
	if (m == NULL || m->rows != m->cols) {
		return NULL;
	}
	
	struct matrix *sd = malloc(sizeof(struct matrix));
	if (sd == NULL) {
		return NULL;
	}
	sd->rows = m->rows;
	sd->cols = m->cols;
	sd->data = malloc(sd->rows * sd->cols * sizeof(double));
	if (sd->data == NULL) {
		return NULL;
	}

	for (size_t r = 0; r < sd->rows; ++r) {
		for (size_t c = 0; c < sd->cols; ++c) {
			E(sd, r, c) = E(m, r, c);
		}
	}

	for (size_t i = 0; i < sd->rows; ++i) {
		double tmp = E(sd, i, i);
		E(sd, i, i) = E(sd, i, sd->rows - 1 - i);
		E(sd, i, sd->rows - 1 - i) = tmp;
	}

	return sd;
}
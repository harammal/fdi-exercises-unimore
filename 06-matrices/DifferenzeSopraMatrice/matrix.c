#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"

struct matrix* mat_diffup(const struct matrix* m) {

	if (m == NULL)
	{
		return NULL;
	}

	struct matrix* md = malloc(sizeof(struct matrix));
	if (md == NULL) {
		return NULL;
	}
	md->rows = m->rows;
	md->cols = m->cols;
	md->data = malloc(md->rows * md->cols * sizeof(double));
	if (md->data == NULL){
		free(md);
		return NULL;
	}

	for (size_t c = 0; c < md->cols; c++) {
		E(md, 0, c) = E(m, 0, c);
	}

	for (size_t r = 1; r < md->rows; r++) {
		for (size_t c = 0; c < md->cols; c++) {
			E(md, r, c) = E(m, r, c) - E(m, r - 1, c);
		}
	}

	return md;
}
#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"
#include <stdio.h>

int main(void) {

	double data[] = { 9, 2, 3, 8, 5, 1, 2, 7, 4 };
	struct matrix m = { 3, 3, data};

	struct matrix *md = mat_diffup(&m);

	
	for (size_t r = 0; r < md->rows; r++) {
		for (size_t c = 0; c < md->cols; c++) {
			printf("%.1f ", E(md, r, c));
		}
		printf("\n");
	}

	free(md->data);
	free(md);

	return 0;
}
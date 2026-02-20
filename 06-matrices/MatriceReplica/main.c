#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"
#include <stdio.h>

int main(void) {

	double data[] = { 1, 2, 3, 4, 5, 6 };
	struct matrix a = {2, 3, data};

	struct matrix* m = mat_replica(&a, 1);

	for (size_t r = 0; r < a.rows; ++r) {
		for (size_t c = 0; c < a.cols; ++c) {
			printf("%.1f ", a.data[r * a.cols + c]);
		}
		printf("\n");
	}
	printf("\n");

	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			printf("%.1f ", E(m, r, c));
		}
		printf("\n");
	}

	return 0;
}
#include "matrix.h"
#include <stdio.h>

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

int main(void) {

	double data[] = { 1.0, 2.0, 0.0, 3.0, 5.0, 4.0 };
	struct matrix A = { 3, 2, &data };

	for (size_t r = 0; r < A.rows; ++r) {
		for (size_t c = 0; c < A.cols; ++c) {
			printf("%.1f ", A.data[r * A.cols + c]);
		}
		printf("\n");
	}

	struct matrix* t = mat_transpose(&A);
	printf("\n");

	for (size_t r = 0; r < t->rows; ++r) {
		for (size_t c = 0; c < t->cols; ++c) {
			printf("%.1f ", E(t, r, c));
		}
		printf("\n");
	}

	if (t != NULL) {
		free(t->data);
		free(t);
	}

	return 0;
}
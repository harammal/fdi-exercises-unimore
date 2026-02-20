#include "matrix.h"
#include <stdio.h>

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

int main(void) {
	double data[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	struct matrix A = { 2, 3, &data };

	for (size_t r = 0; r < A.rows; ++r) {
		for (size_t c = 0; c < A.cols; ++c) {
			printf("%f ", A.data[r * A.cols + c]);
		}
		printf("\n");
	}

	struct matrix* mq = matrix_quadruplica(&A);
	printf("\n");

	for (size_t r = 0; r < mq->rows; ++r) {
		for (size_t c = 0; c < mq->cols; ++c) {
			printf("%f ", E(mq, r, c));
		}
		printf("\n");
	}

	free(mq->data);
	free(mq);

	return 0;
}
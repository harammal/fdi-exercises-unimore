#include "matrix.h"
#include <stdio.h>

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

int main(void) {
	double data[] = { 1.0, 2.0, 3.0, 4.0 };
	struct matrix A = { 2, 2, &data };

	for (size_t r = 0; r < A.rows; ++r) {
		for (size_t c = 0; c < A.cols; ++c) {
			printf("%f ", A.data[r * A.cols + c]);
		}
		printf("\n");
	}

	struct matrix* sd = scambia_diagonali(&A);
	printf("\n");

	for (size_t r = 0; r < sd->rows; ++r) {
		for (size_t c = 0; c < sd->cols; ++c) {
			printf("%f ", E(sd, r, c));
		}
		printf("\n");
	}

	free(sd->data);
	free(sd);

	return 0;
}
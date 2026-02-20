#include "matrix.h"
#include <stdio.h>

int main(void) {
	double data[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	struct matrix A = { 3, 2, &data };

	for (size_t r = 0; r < A.rows; ++r) {
		for (size_t c = 0; c < A.cols; ++c) {
			printf("%.1f ", A.data[r * A.cols + c]);
		}
		printf("\n");
	}

	printf("\n");
	mat_swaprows(&A, 0, 2);

	return 0;
}
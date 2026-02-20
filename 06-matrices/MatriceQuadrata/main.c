#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"
#include <stdio.h>

int main(void) {
	double data[] = { 0, 1, 2, 3, 4, 5 };
	size_t r = 2, c = 3;
	struct matrix a = { r, c, data };

	struct matrix* mq = mat_rendiquadrata(&a);

	for (size_t r = 0; r < a.rows; ++r) {
		for (size_t c = 0; c < a.cols; ++c) {
			printf("%.1f ", a.data[r * a.cols + c]);
		}
		printf("\n");
	}
	printf("\n");

	for (size_t r = 0; r < mq->rows; ++r) {
		for (size_t c = 0; c < mq->cols; ++c) {
			printf("%.1f ", E(mq, r, c));
		}
		printf("\n");
	}

	return 0;
}
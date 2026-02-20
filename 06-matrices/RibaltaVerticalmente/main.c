#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"
#include <stdio.h>

int main(void) {
	double data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	struct matrix* a = malloc(sizeof(struct matrix));
	a->rows = 4;
	a->cols = 3;
	a->data = malloc(a->rows * a->cols * sizeof(double));

	size_t i = 0;
	for (size_t r = 0; r < a->rows; ++r) {
		for (size_t c = 0; c < a->cols; ++c) {
			E(a, r, c) = data[i++];
		}
	}

	for (size_t r = 0; r < a->rows; ++r) {
		for (size_t c = 0; c < a->cols; ++c) {
			printf("%.1f ", E(a, r, c));
		}
		printf("\n");
	}

	a = matrix_flip_v(a);
	printf("\n");

	for (size_t r = 0; r < a->rows; ++r) {
		for (size_t c = 0; c < a->cols; ++c) {
			printf("%.1f ", E(a, r, c));
		}
		printf("\n");
	}

	free(a->data);
	free(a);

	return 0;
}
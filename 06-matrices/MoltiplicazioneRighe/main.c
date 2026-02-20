#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]
#include "matrix.h"
#include <stdio.h>

int main(void) {

	double data1[] = { 1.0, 2.0, 3.0};
	struct matrix m1 = { 1, 3, data1 };
	double data2[] = { 4.0 };
	struct matrix m2 = { 1, 1, data2 };

	struct matrix* m3 = mat_rowmul(&m1, &m2);
	for (size_t r = 0; r < m3->rows; ++r) {
		for (size_t c = 0; c < m3->cols; ++c) {
			printf("%1.f ", E(m3, r, c));
		}
		printf("\n");
	}

	free(m3);

	return 0;
}
#include "matrix.h"
#include <stdio.h>
#define E(m, r, c) (m).data[(r) * (m).cols + (c)]

int main(void) {

	double data[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	struct matrix m = { 3, 3, data };

	for (size_t r = 0; r < m.rows; r++) {
		for (size_t c = 0; c < m.cols; c++) {
			printf("%1.f ", E(m, r, c));
		}
		printf("\n");
	}
	printf("\n");

	mat_swapcols(&m, 1, 2);

}
#include "matrix.h"
#include <stdio.h>
#define E(mat, r, c) (mat)->data[(r) * (mat)->cols + (c)]

extern void mat_swapcols(struct matrix* mat, size_t c1, size_t c2) {

	// SCAMBIO COLONNE

	for (size_t r = 0; r < mat->rows; r++) {
		double temp = E(mat, r, c1);
		E(mat, r, c1) = E(mat, r, c2);
		E(mat, r, c2) = temp;
	}

	for (size_t r = 0; r < mat->rows; r++) {
		for (size_t c = 0; c < mat->cols; c++) {
			printf("%1.f ", E(mat, r, c));
		}
		printf("\n");
	}

	// SCAMBIO RIGHE

	/*for (size_t c = 0; c < mat->cols; c++) {
		double temp = E(mat, c1, c);
		E(mat, c1, c) = E(mat, c2, c);
		E(mat, c2, c) = temp;
	}

	for (size_t r = 0; r < mat->rows; r++) {
		for (size_t c = 0; c < mat->cols; c++) {
			printf("%1.f ", E(mat, r, c));
		}
		printf("\n");
	}*/
}
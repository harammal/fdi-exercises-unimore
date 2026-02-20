#include "matrix.h"

extern double* diag(double* matr, size_t n) {
	if (n <= 0) {
		return NULL;
	}

	double* d = malloc(n * sizeof(double));
	if (d == NULL) {
		return NULL;
	}

	for (size_t i = 0; i < n; i++) {
		d[i] = matr[i * n + i];
	}

	return d;
}
#include "matrix.h"
#include <stdio.h>

int main(void) {

	double data[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	double* d = diag(data, 3);

	for (size_t i = 0; i < 3; i++) {
		printf("%1.f ", d[i]);
	}

	free(d);
}
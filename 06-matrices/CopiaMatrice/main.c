#include "matrix.h"

int main(void) {

	double data[] = { 1.0, 2.0, 0.0, 3.0 };
	struct matrix A = { 2, 2, &data };

	struct matrix* copy = mat_copy(&A);

	free(copy->data);
	free(copy);

	return 0;
}
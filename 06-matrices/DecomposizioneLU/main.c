#include "matrix.h"

int main(void) {
	double data1[] = { 4, 3, 6, 3 };
	size_t r = 2, c = 2;
	struct matrix m1 = { r, c, data1 };

	double data2[] = { 5, 2, 7, 9 };
	struct matrix m2 = { r, c, data2 };
	
	double data3[] = { 2, 4, 1, 5 };
	struct matrix m3 = { r, c, data3 };

	bool ris = LUdecomposition(&m1, &m2, &m3);

	return 0;
}
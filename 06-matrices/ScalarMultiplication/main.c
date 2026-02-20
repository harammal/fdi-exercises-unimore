#include "matrix.h"

int main(void) {

	double data1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	struct matrix dst = { 3, 3, data1 };

	double data2[] = { 9, 8, 7, 6, 5, 4, 3 ,2, 1 };
	struct matrix src = { 3, 3, data2 };

	bool sm = scalar_mult(&dst, &src, 2, false);

	return sm;
}
#include "massimi.h"
#include <limits.h>

int main(void) {
	int v1[5] = { 7, 1, 8, 2, 8 };
	int v2[5] = { 7, 1, 8, 2, 7 };
	int v3[7] = { -1, 27, 12, 27, 27, 13, -8 };
	int v4[3] = { INT_MIN, INT_MIN, INT_MIN };
	int v5[3] = { 10, INT_MIN, INT_MIN };

	size_t n = 5, max1, max2;

	bool twomax =  massimi(v1, n, &max1, &max2);

	return 0;
}
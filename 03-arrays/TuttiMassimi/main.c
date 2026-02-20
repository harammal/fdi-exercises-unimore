#include <stdlib.h>

extern size_t* massimi(const int* v, size_t n, size_t* nmax);

int main(void) {
	int v[] = { 2, 8, 1, 8 };
	size_t n = 4, nmax = 0;

	size_t* ind = massimi(v, n, &nmax);

	free(ind);

	return 0;
}
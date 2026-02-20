#include <stdlib.h>
#include <limits.h>

int TrovaMax(const int* v, size_t n) {
	int max = INT_MIN;

	for (size_t i = 0; i < n; ++i) {
		if (v[i] > max) {
			max = v[i];
		}
	}

	return max;
}

size_t* massimi(const int* v, size_t n, size_t* nmax) {
	if (v == NULL || nmax == NULL || n == 0){
		return NULL;
	}

	int max = TrovaMax(v, n);
	size_t* ind = malloc(n * sizeof(size_t));
	size_t cnt = 0;

	for (size_t i = 0; i < n; ++i) {
		if (v[i] == max) {
			ind[cnt] = i;
			cnt++;
		}
	}

	if (cnt < n) {
		ind = realloc(ind, cnt * sizeof(size_t));
	}

	*nmax = cnt;

	return ind;
}
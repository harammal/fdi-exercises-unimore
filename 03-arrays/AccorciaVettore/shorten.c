#include <stdlib.h>

size_t shorten(int* v, size_t n, int max) {
	if (v == NULL) {
		return 0;
	}

	size_t cnt = 0;
	for (size_t i = 0; i < n; ++i) {
		if (v[i] <= max) {
			v[cnt] = v[i];
			cnt++;
		}
	}

	return cnt;
}
#include <stdlib.h>

int* missing(const int* v, size_t n, int min, int max, size_t* size) {

	int* m = malloc(max * sizeof(int));
	if (m == NULL) {
		return NULL;
	}

	size_t j = 0;

	for (size_t i = 0; i < n; i++) {

		while (min < v[i]) {
			m[j] = min;
			j++;
			min++;
		}
		min++;
	}

	while (min <= max) {
		m[j] = min;
		j++;
		min++;
	}

	*size = j;
	if (*size == 0) {
		free(m);
		return NULL;
	}

	m = realloc(m, j * sizeof(int));

	return m;
}
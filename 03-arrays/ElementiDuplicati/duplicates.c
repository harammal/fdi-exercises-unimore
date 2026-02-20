#include "duplicates.h"

bool* duplicates(const int* v, size_t n) {
	if (v == NULL) {
		return NULL;
	}

	bool* dup = malloc(n * sizeof(bool));
	if (dup == NULL) {
		return NULL;
	}

	for (size_t i = 0; i < n; i++) {
		dup[i] = false;
	}

	for (size_t i = 0; i < n; i++) {
		for (size_t j = i + 1; j < n; j++) {
			if (v[i] == v[j]) {
				dup[i] = true;
				dup[j] = true;
			}
		}
	}

	return dup;
}

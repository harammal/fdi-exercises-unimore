#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <stdio.h>

bool massimi(const int* v, size_t n, size_t* max1, size_t* max2) {
	if (v == NULL || max1 == NULL || max2 == NULL || n < 2) {
		return false;
	}

	int copy_max1 = INT_MIN;
	size_t pos1 = 0;
	for (size_t i = 0; i < n; i++) {
		if (v[i] > copy_max1) {
			copy_max1 = v[i];
			pos1 = i;
		}
	}
	printf("max1: %zu\n", pos1);

	*max1 = pos1;

	int copy_max2 = INT_MIN;
	size_t pos2 = -1;
	bool trovato = false;

	for (size_t i = 0; i < n; i++) {
		if (v[i] == copy_max1 && i != pos1) {
			copy_max2 = v[i];
			pos2 = i;
			trovato = true;

			break;
		}
	}
	if (trovato) {
		printf("max2: %zu\n", pos2);

		*max2 = pos2;

		return true;
	}
	else {
		for (size_t i = 0; i < n; i++) {
			if ((v[i] > copy_max2 || pos2 == -1) && i != pos1) {
				copy_max2 = v[i];
				pos2 = i;
			}
		}
		printf("max2: %zu\n", pos2);

		*max2 = pos2;
	}

	return true;
}
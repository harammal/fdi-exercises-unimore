#include <stdlib.h>

unsigned int* esagonali(unsigned int max, size_t* n) {
	if (max == 0) {
		*n = 0;
		return NULL;
	}

	unsigned int* v = NULL;
	*n = 0;
	unsigned int i = 1, old = 1, num = 0;

	while (num <= max) {
		old = num;
		num = (3 * i) * (i - 1) + 1;

		if (num < old) {
			break;
		}

		if (num <= max) {
			v = realloc(v, (*n + 1) * sizeof(unsigned int));
			
			v[*n] = num;
			(*n)++;
		}
		i++;
	}

	return v;
}
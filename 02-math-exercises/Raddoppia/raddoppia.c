#include <stdint.h>
#include <stdlib.h>

void raddoppia(uint32_t *x, size_t n) {
	if (x == NULL || n == 0) {
		return;
	}

	for (size_t i = 0; i < n; ++i) {
		x[i] *= 2;
	}
}
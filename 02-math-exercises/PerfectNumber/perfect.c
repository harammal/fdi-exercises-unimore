#include <stdint.h>
#include <stdbool.h>

bool is_perfect(uint32_t n) {
	if (n <= 0) {
		return false;
	}

	uint32_t somma = 0;
	for (uint32_t i = 1; i < n; i++) {
		if (n % i == 0) {
			somma += i;
		}
	}

	if (somma == n) {
		return true;
	}
	else
		return false;
}
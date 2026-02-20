#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

bool IsPrime(uint32_t n) {
	if (n <= 1) {
		return false;
	}
	uint32_t limit = (uint32_t)sqrt((double)n);

	for (uint32_t i = 2; i <= limit; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool goldbach(uint32_t n, uint32_t* p1, uint32_t* p2) {
	if (n % 2 != 0 || n <= 2) {
		return false;
	}

	for (uint32_t i = 2; i <= n / 2; ++i) {
		if (IsPrime(i)) {
			uint32_t j = n - i;
			if (IsPrime(j)) {
				*p1 = i;
				*p2 = j;
				return true;
			}
		}

		return true;
	}
}
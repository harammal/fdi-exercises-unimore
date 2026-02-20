#include <stdlib.h>
#include <stdbool.h>

size_t find_first_partition(const int* seq, size_t n) {
	if (seq == NULL || n == 0) {
		return 0;
	}

	bool zero = false;
	for (size_t i = 0; i < n; i++) {
		if (seq[0] < seq[i+1]) {
			zero = true;
		}
		else {
			zero = false;
			break;
		}
	}

	if (zero) {
		return 0;
	}

	bool final = false;
	for (size_t i = 0; i < n; i++) {
		if (seq[i - 1] > seq[i+1]) {
			final = true;
		}
		else {
			final = false;
			break;
		}
	}

	if (final) {
		return n-1;
	}

	for (size_t i = 0; i < n; i++) {
		if (seq[i] > seq[0] && seq[i] < seq[n - 1]) {
			return i;
		}
	}

	return n;
}
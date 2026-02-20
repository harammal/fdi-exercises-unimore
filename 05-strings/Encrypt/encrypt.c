#include <stdlib.h>
#include <string.h>

void encrypt(char* s, size_t n) {
	if (s == NULL) {
		return;
	}

	for (size_t i = 0; i < n; ++i) {
		s[i] ^= 0xAA;
	}
}
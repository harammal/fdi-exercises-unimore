#include <stdlib.h>
#include <string.h>

size_t conta_spazi(const char* s) {
	size_t cont = 0, len = strlen(s);

	for (size_t i = 0; i < len; ++i) {
		if (s[i] == ' ') {
			cont++;
		}
	}

	return cont;
}
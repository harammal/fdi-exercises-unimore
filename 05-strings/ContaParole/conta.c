#include <stdlib.h>
#include <string.h>

size_t conta_parole(const char* s) {
	if (s == NULL || s[0]=='\0') {
		return 0;
	}
	size_t len = strlen(s), cont = 1;

	for (size_t i = 0; i < len; ++i) {
		if (s[i] == ' ') {
			cont++;
		}
	}
	return cont;
}
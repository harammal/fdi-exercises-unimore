#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>

bool leggi_stringa_da_file(const char* filename, char* s, size_t max_size) {
	if (filename == NULL || s == NULL || max_size == 0) {
		return false;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return false;
	}

	size_t i;
	for (i = 0; i < max_size - 1; ++i) {
		int c = fgetc(f);

		if (c == EOF) {
			break;
		}
		else
		{
			s[i] = c;
		}
	}

	s[i] = '\0';

	fclose(f);
	return true;
}
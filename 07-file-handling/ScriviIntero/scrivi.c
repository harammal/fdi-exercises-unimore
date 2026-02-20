#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>

bool scrivi_intero(const char* filename, int i) {
	if (filename == NULL) {
		return false;
	}

	FILE* f = fopen(filename, "w");
	if (f == NULL) {
		return false;
	}

	fprintf(f, "%d", i);

	fclose(f);

	return true;
}
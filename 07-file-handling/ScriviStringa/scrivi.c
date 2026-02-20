#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool scrivi_stringa_su_file(const char* filename, const char* str) {
	if (filename == NULL || str == NULL) {
		return false;
	}

	FILE* f = fopen(filename, "w");

	if (f == NULL) {
		return false;
	}

	fputs(str, f);

	fclose(f);

	return true;
}
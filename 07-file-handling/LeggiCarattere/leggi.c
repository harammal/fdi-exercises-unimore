#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool leggi_carattere_da_file(const char* filename, char* c) {
	if (filename == NULL || c == NULL) {
		return false;
	}

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return false;
	}

	int a = fgetc(f);
	if (a == EOF) {
		fclose(f);
		return false;
	}
	else {
		*c = a;
	}

	fclose(f);
	return true;
}
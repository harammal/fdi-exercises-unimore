#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

int* leggiinteri(const char* filename, size_t* size) {
	if (filename == NULL || size == NULL) {
		return NULL;
	}

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	int n;
	size_t letti = fread(&n, sizeof(int), 1, f);
	if (letti != 1) {
		if (feof(f)) {
			fclose(f);
			return NULL;
		}
		if (ferror(f)) {
			fclose(f);
			return NULL;
		}
	}

	if (n <= 0) {
		fclose(f);
		return NULL;
	}

	int* interi = malloc(sizeof(int) * n);
	if (interi == NULL) {
		fclose(f);
		return NULL;
	}

	letti = fread(interi, sizeof(int), n, f);
	if (letti != (size_t)n) {
		if (feof(f)) {
			fclose(f);
			return NULL;
		}
		if (ferror(f)) {
			fclose(f);
			return NULL;
		}
	}

	*size = (size_t)n;

	fclose(f);
	return interi;
}
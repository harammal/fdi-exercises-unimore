#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

int* leggiinteri2(const char* filename, size_t* size) {
	if (filename == NULL || size == NULL) {
		return NULL;
	}

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	fseek(f, 0, SEEK_END);
	long file_size = ftell(f);
	rewind(f);

	if (file_size <= 0 || file_size % sizeof(int) != 0) {
		fclose(f);
		return NULL;
	}
	size_t n = file_size / sizeof(int);


	int* interi = malloc(sizeof(int) * n);
	if (interi == NULL) {
		fclose(f);
		return NULL;
	}

	size_t letti = fread(interi, sizeof(int), n, f);
	if (letti != n) {
		if (feof(f)) {
			fclose(f);
			return NULL;
		}
		if (ferror(f)) {
			fclose(f);
			return NULL;
		}
	}

	*size = n;

	fclose(f);
	return interi;
}
#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"

double* leggidouble(const char* filename, size_t* size) {
	if (filename == NULL || size == NULL) {
		return NULL;
	}

	FILE *f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	double num;
	size_t cont = 0;

	while (fscanf(f, "%lf", &num) == 1) {
		cont++;
	}
	if (cont == 0) {
		fclose(f);
		return NULL;
	}
	rewind(f);

	double* numeri = malloc(cont * sizeof(double));
	if (numeri == NULL) {
		fclose(f);
		return NULL;
	}

	size_t i = 0;

	while (fscanf(f, "%lf", &num) == 1 && i < cont) {
		numeri[i++] = num;
	}
	if (i != cont) {
		free(numeri);
		fclose(f);
		return NULL;
	}

	*size = cont;
	fclose(f);

	return numeri;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int somma(const char* filename, int* s) {
	if (filename == NULL) {
		return -1;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return -1;
	}

	int num1, num2;
	int ret = fscanf(f, "%d %d", &num1, &num2);
	if (ret != 2) {
		fclose(f);
		return -1;
	}

	*s = num1 + num2;

	fclose(f);

	return 0;
}
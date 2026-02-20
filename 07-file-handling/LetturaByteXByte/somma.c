#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int somma_tutto(const char* filename) {
	if (filename == NULL) {
		return -1;
	}
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return -1;
	}

	uint16_t num;
	int somma = 0;

	while (1) {
		if (fread(&num, sizeof(uint16_t), 1, f) != 1) {
			break;
		}
		somma += (int)num;
	}

	fclose(f);

	return somma;
}
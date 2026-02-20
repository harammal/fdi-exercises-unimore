#define _CRT_SECURE_NO_WARNINGS
#include "scrittura.h"
#include <ctype.h>

bool scrivimaiuscolo(const char* filename) {
	if (filename == NULL)
	{
		return false;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	while (1) {
		int c = fgetc(f);
		if (c == EOF) {
			break;
		}

		if (islower(c) != 0) {
			c = toupper(c);
		}

		fputc(c, stdout);
	}

	fclose(f);
	return true;
}
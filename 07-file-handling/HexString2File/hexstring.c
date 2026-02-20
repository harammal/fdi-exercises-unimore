#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

bool hexstring2file(const char* hexstring, const char* filename) {
	if (hexstring == NULL || filename == NULL) {
		return false;
	}

	FILE* f = fopen(filename, "wb");
	if (f == NULL) {
		return false;
	}

	size_t len = strlen(hexstring);
	char s[3];
	s[2] = '\0';

	for (size_t i = 0; i < len; i += 2) {
		strncpy(s, hexstring + i, 2);

		char* endptr;
		unsigned char byte = (unsigned char) strtol(s, &endptr, 16);
		if (*endptr != 0) {
			fclose(f);
			return false;
		}

		fwrite(&byte, sizeof(unsigned char), 1, f);
	}

	fclose(f);
	return true;
}
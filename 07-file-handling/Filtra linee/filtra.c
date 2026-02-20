#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool filtra_linee(const char* inputfile, const char* outputfile, const char* required_string) {
	if (inputfile == NULL || outputfile == NULL || required_string == NULL) {
		return false;
	}

	FILE* fin = fopen(inputfile, "r");
	FILE* fout = fopen(outputfile, "w");
	if (fin == NULL || fout == NULL) {
		return false;
	}

	char *s = NULL;
	size_t len = 0;
	int c;

	while ((c = fgetc(fin)) != EOF) {
		s = realloc(s, len + 1);
		s[len] = c;
		len++;

		if (c == '\n') {
			s = realloc(s, len + 1);
			s[len] = '\0';

			if (strstr(s, required_string) != NULL) {
				fputs(s, fout);
			}

			free(s);
			s = NULL;
			len = 0;
		}
	}

	s = realloc(s, len + 1);
	s[len] = '\0';

	if (strstr(s, required_string) != NULL) {
		fputs(s, fout);
	}
	
	free(s);
	fclose(fin);
	fclose(fout);
	return true;
}
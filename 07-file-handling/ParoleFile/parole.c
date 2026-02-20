#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

char** extract_parole(const char* filename, size_t* n) {
	if (filename == NULL) {
		return NULL;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	(*n) = 0;
	size_t capacity = 10;
	char** words = malloc(capacity * sizeof(char *));

	while (1) {
		if (*n == capacity) {
			capacity *= 2;
			words = realloc(words, sizeof(char*) * capacity);
		}

		char *parola = malloc(256);

		for (size_t i = 0; i < 255; ++i) {
			int c = fgetc(f);

			if (c == ' ' && i == 0) {
				break;
			}
			else if (c != ' ') {
				parola[i] = c;
			}
			else if(c == ' ') {
				parola = realloc(parola, i + 1);
				parola[i] = '\0';

				words[*n] = parola;
				(*n)++;

				break;
			}
			if (c == EOF) {
				parola = realloc(parola, i + 1);
				parola[i] = '\0';

				words[*n] = parola;
				(*n)++;

				fclose(f);
				return words;
			}
		}
	}

	fclose(f);

	return words;
}
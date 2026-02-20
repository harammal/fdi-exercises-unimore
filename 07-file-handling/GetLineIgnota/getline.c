#include "getline.h"

size_t getline(char** lineptr, size_t* n, FILE* stream) {
	if (lineptr == NULL || n == NULL || stream == NULL) {
		return 0;
	}

	if (*lineptr == NULL || (*n) < 16) {
		(*n) = 16;
		*lineptr = malloc((*n) * sizeof(char));
	}

	size_t cnt = 0;
	int c;

	while (1) {
		c = fgetc(stream);

		if (c == EOF) {
			return 0;
		}

		if (cnt + 1 == (*n)) {
			(*n) *= 2;
			*lineptr = realloc(*lineptr, (*n) * sizeof(char));
		}

		(*lineptr)[cnt] = (char)c;
		cnt++;

		if (c == '\n') {
			break;
		}
	}
	
	if (cnt + 1 != (*n)) {
		(*n) = cnt;
		*lineptr = realloc(*lineptr, (*n) * sizeof(char) + 1);
	}

	(*lineptr)[cnt] = '\0';

	return cnt;
}
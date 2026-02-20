#include "demography.h"

char* read_string(FILE* f) {
	char* buffer = NULL;
	size_t size = 0;
	int c;

	while ((c = fgetc(f)) != EOF) {
		char ch = (char)c;
		// aggiungi 1 byte alla stringa
		buffer = realloc(buffer, size + 1);
		buffer[size++] = ch;

		if (ch == '\0') {
			break;
		}
	}

	// Se il file finisce prima di trovare '\0', è un errore
	if (c == EOF && (size == 0 || buffer[size - 1] != '\0')) {
		free(buffer);
		return NULL;
	}

	return buffer;
}

struct city* read_cities(const char* filename, uint32_t* n) {
	if (filename == NULL) {
		return NULL;
	}

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	uint32_t count;
	size_t letti = fread(&count, sizeof(uint32_t), 1, f);
	if (letti != 1) {
		fclose(f);
		return NULL;
	}
	*n = count;

	struct city* cities = malloc((*n) * sizeof(struct city));

	for (size_t i = 0; i < (*n); ++i) {
		struct city temp;

		temp.name = read_string(f);
		if (temp.name == NULL) {
			for (size_t j = 0; j < i; ++j) {
				free(cities[j].name);
			}
			free(cities);
			fclose(f);
			return NULL;
		}

		letti = fread(&temp.population, sizeof(uint32_t), 1, f);
		if (letti != 1) {
			for (size_t j = 0; j < i; ++j) {
				free(cities[j].name);
			}
			free(cities);
			fclose(f);
			return NULL;
		}

		cities[i] = temp;
	}

	fclose(f);

	return cities;
}

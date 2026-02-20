#define _CRT_SECURE_NO_WARNINGS
#include "persona.h"
#include <string.h>

struct persona* leggi_persone(const char* filename, size_t* size) {
	if (filename == NULL) {
		*size = 0;
		return NULL;
	}

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}

	int num_persone;
	int ret = fscanf(f, "%d", &num_persone);
	if (ret != 1 || num_persone <= 0) {
		*size = 0;
		fclose(f);
		return NULL;
	}

	struct persona* persone = malloc(num_persone * sizeof(struct persona));
	if (persone == NULL) {
		*size = 0;
		fclose(f);
		return NULL;
	}

	for (size_t i = 0; i < (size_t)num_persone; i++) {
		int anni;
		char nome[50];

		ret = fscanf(f, " %d , %[^\n]", &anni, nome);
		if (ret != 2) {
			free(persone);
			*size = 0;
			fclose(f);
			return NULL;
		}

		persone[i].anni = anni;
		strncpy(persone[i].nome, nome, sizeof(persone[i].nome) - 1);
		persone[i].nome[sizeof(persone[i].nome) - 1] = '\0';
	}

	*size = num_persone;
	fclose(f);

	return persone;
}
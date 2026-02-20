#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

char* sostituisci(const char* str, const char* vecchia, const char* nuova) {

	if (str == NULL || vecchia == NULL || nuova == NULL) {
		return NULL;
	}

	size_t len_str = strlen(str);
	if (len_str == 0) {
		char* sos = malloc(sizeof(char));
		sos = '\0';

		return sos;
	}
	size_t len_vecchia = strlen(vecchia);
	if (len_vecchia == 0) {
		char* sos = malloc(len_str + sizeof(char) + 1);
		strcpy(sos, str);

		return sos;
	}
	size_t len_nuova = strlen(nuova);

	size_t capacity = len_str * 2;
	char* sos = malloc(capacity * sizeof(char));
	size_t len_sos = 0;

	for (size_t i = 0; i < len_str; ++i) {
		char *start = strstr(str + i, vecchia);

		if (start != NULL) {
			size_t ind = start - str;

			if (capacity == len_sos) {
				capacity *= 2;
				sos = realloc(sos, capacity * sizeof(char));
			}

			memmove(sos + len_sos, str + i, ind);
			len_sos += ind;
			i = ind;
			i += (len_vecchia - 1);

			if (len_nuova > 0) {
				memmove(sos + len_sos, nuova, len_nuova);
				len_sos += len_nuova;
			}
		}
		else if(start == NULL){
			break;
		}
	}

	sos = realloc(sos, len_sos * sizeof(char) + 1);
	sos[len_sos] = '\0';

	return sos;
}
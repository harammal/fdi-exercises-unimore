//#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

char* concatena(const char* prima, const char* seconda) {
	size_t len1 = 0, len2 = 0;

	if (prima != NULL && prima[0] != '\0') {
		len1 = strlen(prima);
	}
	if (seconda != NULL && seconda[0] != '\0') {
		len2 = strlen(seconda);
	}

	char* conc = malloc((len1 + len2 + 1) * sizeof(char));
	if (conc == NULL) { // Controlla se malloc ha avuto successo
		return NULL;
	}

	if (len1 > 0) {
		strcpy(conc, prima);
	}
	else {
		conc[0] = '\0';
	}
	if (len2 > 0) {
		strcat(conc, seconda);
	}
	return conc;
}
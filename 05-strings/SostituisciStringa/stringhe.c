#include <stdlib.h>
#include <string.h>

char* sostituisci(const char* str, const char* vecchia, const char* nuova) {
	if (str == NULL || vecchia == NULL || nuova == NULL) {
		return NULL;
	}

	size_t lenstr = strlen(str);
	size_t lenvecchia = strlen(vecchia);

	if (lenstr == 0) {
		return "";
	}

	if (lenvecchia == 0) {
		return str;
	}
	
	char* cpy = malloc((lenstr + lenvecchia) * sizeof(char));
	if (cpy == NULL) {
		return NULL;
	}

	/* 1 */
	char* pos = strstr(str, vecchia);

	strncpy(cpy, str, pos);
	str += (int)pos + lenvecchia;
	strncat(cpy, str, lenstr - lenvecchia);

	while (strstr(cpy, vecchia) != NULL) {
		char* cpy2die = malloc((lenstr + lenvecchia) * sizeof(char));
		if (cpy2die == NULL) {
			return NULL;
		}

		char* pos = strstr(cpy, vecchia);

		str += (int)pos + lenvecchia;

		strncat(cpy, str, lenstr - lenvecchia);

		free(cpy2die);
		cpy2die = NULL;
	}

}
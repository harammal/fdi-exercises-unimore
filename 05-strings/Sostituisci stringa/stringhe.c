#include <string.h>
#include <stdlib.h>

char* sostituisci(const char* str, const char* vecchia, const char* nuova) {
	if (str == NULL || vecchia == NULL || nuova == NULL) {
		return NULL;
	}
    if (strlen(str) == 0) {
        char* empty = malloc(1);
        if (empty == NULL) {
            return NULL;
        }
        empty[0] = '\0';
        return empty;
    }
    if (strlen(vecchia) == 0) {
        char* copy = malloc(strlen(str) + 1);
        if (copy == NULL) {
            return NULL;
        }
        strcpy(copy, str);
        return copy;
    }

    size_t len_str = strlen(str);
    size_t len_vecchia = strlen(vecchia);
    size_t len_nuova = strlen(nuova);



	char *ind = strstr(str, vecchia);

}
#include "stristr.h"

char* stristr(const char* str, const char* substr) {
	if (str == NULL || substr == NULL) {
		return NULL;
	}

	size_t len_str = strlen(str);
	size_t len_sub = strlen(substr);

	if (len_sub == 0) {
		return (char *)str;
	}

	char* copy = malloc(len_str * sizeof(char) + 1);
	memcpy(copy, str, len_str * sizeof(char) + 1);
	char* subcopy = malloc(len_sub * sizeof(char) + 1);
	memcpy(subcopy, substr, len_sub * sizeof(char) + 1);

	size_t i = 0;
	while (i < len_str) {
		copy[i] = tolower(copy[i]);
		i++;
	}
	i = 0;
	while (i < len_sub) {
		subcopy[i] = tolower(subcopy[i]);
		i++;
	}

	char* occ = strstr(copy, subcopy);
	if (occ == NULL) {
		free(copy);
		free(subcopy);
		return NULL;
	}
	int ind = occ - copy;

	free(copy);
	free(subcopy);

	return (char *)str + ind;
}
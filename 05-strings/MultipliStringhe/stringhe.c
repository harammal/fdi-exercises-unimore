#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* rimuovimultipli(const char* str) {
	if (str == NULL) {
		return NULL;
	}
	
	size_t len = strlen(str);
	if (len == 0) {
		return "";
	}

	char* rim = malloc(len * sizeof(char) + 1);
	if (rim == NULL) {
		return NULL;
	}

	size_t i = 0, j = 0;
	while (len > 0) {
		if (str[i] != str[i + 1]) {
			rim[j] = str[i];
			j++;
		}
		len--;
		i++;
	}

	rim[j] = 0;
	rim = realloc(rim, j + 1);

	printf("%s", rim);

	return rim;
}
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* unici(const char* s) {
	if (s == NULL) {
		return NULL;
	}

	size_t len = strlen(s), cont = 0;
	if (len == 0) {
		char* u = malloc(1);
		if (u == NULL) {
			return NULL;
		}

		u[0] = '\0';

		return u;
	}

	char* u = malloc(len + 1);
	if (u == NULL) {
		return NULL;
	}

	for (size_t i = 0; i < len; i++) {
		if (strchr(u, s[i]) == NULL) {
			u[cont] = s[i];
			cont++;
		}
	}

	u = realloc(u, cont + 1);

	u[cont] = '\0';

	printf("%s, %zu", u, cont);

	return u;
}
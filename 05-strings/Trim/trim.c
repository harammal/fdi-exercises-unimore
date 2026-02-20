#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* trim(const char* s) {
	if (s == NULL) {
		return NULL;
	}

	while (isspace((unsigned char)*s)) {
		s++;
	}
	size_t len = strlen(s);

	if (len == 0) {
		char* empty = malloc(1 * sizeof(char));
		if (empty == NULL) {
			return NULL;
		}
		empty[0] = '\0';
		return empty;
	}

	while (isspace((unsigned char)s[len - 1])) {
		len--;
	}

	char* sp = malloc((len + 1) * sizeof(char));
	if (sp == NULL) {
		return NULL;
	}

	strncpy(sp, s, len);
	sp[len] = '\0';

	return sp;
}
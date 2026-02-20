#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void translate(char* str, const char* from, const char* to) {
	if (str == NULL || from == NULL || to == NULL) {
		return;
	}
	size_t len = strlen(from), len_str = strlen(str);
	if (len != strlen(to)) {
		return;
	}

	char* copy = malloc(len_str * sizeof(char) + 1);

	for (size_t i = 0; i < len_str; ++i) {
		bool found = false;

		for (size_t j = 0; j < len; ++j) {
			if (str[i] == from[j]) {
				copy[i] = to[j];

				found = true;
				break;
			}
		}

		if (!found) {
			copy[i] = str[i];
		}
	}

	copy[len_str] = '\0';
	memcpy(str, copy, len_str + 1);

	free(copy);

	return;
}
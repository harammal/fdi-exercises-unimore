#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* parola_piu_lunga(const char* sz) {
	size_t len = strlen(sz);

	if (len <= 0) {
		return NULL;
	}

	bool parola = false;
	int cnt = 0, max = 0, ind_max = 0, ind_curr;

	for (size_t i = 0; i < len; ++i) {
		if (sz[i] != ' ' && parola == false) {
			parola = true;
			ind_curr = i;
		}
		else if (sz[i] == ' ') {
			parola = false;
		}

		if (parola) {
			cnt++;
		}
		else if (!parola) {
			if (cnt > max) {
				max = cnt;
				ind_max = ind_curr;
			}
			cnt = 0;
		}
	}

	if (max == 0 && parola == false) {
		return NULL;
	}

	if (parola) {
		if (cnt > max) {
			max = cnt;
			ind_max = ind_curr;
		}
	}

	char* lunga = malloc(max * sizeof(char) + 1);
	strncpy(lunga, sz + ind_max, max * sizeof(char));
	lunga[max] = '\0';

	return lunga;
}
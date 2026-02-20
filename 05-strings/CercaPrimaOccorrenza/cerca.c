#include "cerca.h"
#include <string.h>

int cerca_primo(const char* s, char c) {
	int ind = -1;
	//int len = strlen(s);

	if (strchr(s, c) == NULL) {
		return -1;
	}

	ind = strchr(s, c) - s;

	/*for (int i = 0; i < len; ++i) {
		if (s[i] == c) {
			ind = i;
			return ind;
		}
	}*/

	return ind;
}
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}

	char *s = "Ciao, come stai bene!";

	size_t lens = strlen(s);

	char *sub = argv[1];
	size_t lensub = strlen(sub);
	int scrivi = 0;

	for (size_t i = 0; i < lens; i++) {
		for (size_t j = 0; j < lensub; j++) {
			if (s[i] == sub[j]) {
				scrivi = 0;
				break;
			}
			else {
				scrivi = 1;
			}
		}
		if (scrivi == 1) {
			putchar(s[i]);
		}
	}

	return 0;
}
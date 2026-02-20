#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}
	FILE* f = fopen(argv[1], "r");
	if (f == NULL) {
		return 1;
	}

	int c;
	while (1) {
		c = fgetc(f);

		if (c == EOF) {
			break;
		}

		if (isupper(c)) {
			c = tolower(c);
		}
		printf("%c", c);
	}

	return 0;
}
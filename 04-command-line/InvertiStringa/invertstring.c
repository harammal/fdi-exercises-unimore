#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}
	size_t len = strlen(argv[1]);

	char *string;
	string = malloc(len * sizeof(char));

	if (string == NULL) {
		return 1;
	}

	strcpy(string, argv[1]);

	size_t ind = len - 1;

	for (size_t i = 0; i < len; ++i) {
		printf("%c", string[ind]);
		ind--;
	}

	return 0;
}
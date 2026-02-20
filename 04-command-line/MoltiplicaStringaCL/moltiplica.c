#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	if (argc != 3) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[2], &endptr, 10);

	if (*endptr != 0 || n < 0 || strlen(argv[1]) == 0) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		printf("%s", argv[1]);
	}

	return 0;
}
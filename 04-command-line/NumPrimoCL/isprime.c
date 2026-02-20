#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[1], &endptr, 10);

	if (n < 0) {
		return 1;
	}

	if (*endptr != 0) {
		return 1;
	}

	if (n <= 1) {
		printf("false");
		return 0;
	}

	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			printf("false");
			return 0;
		}
	}

	printf("true");

	return 0;
}
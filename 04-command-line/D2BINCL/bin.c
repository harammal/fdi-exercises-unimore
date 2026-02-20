#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}
	
	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0 || n < 0) {
		return 1;
	}

	if (n == 0) {
		printf("0");
		return 0;
	}

	int bin[32], i = 0;

	while (n > 0) {
		bin[i] = n % 2;
		n /= 2;

		i++;
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%d", bin[j]);
	}

	return 0;
}
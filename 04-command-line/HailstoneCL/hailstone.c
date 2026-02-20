#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc <= 1) {
		return -1;
	}

	char *endptr;
	int n = strtol(argv[1], &endptr, 10);

	if (*endptr != 0) {
		return -1;
	}

	if (n <= 0) {
		return 0;
	}
	if (n == 1) {
		printf("1");
		return 1;
	}

	int cont = 1;

	while (n != 1) {
		printf("%d, ", n);

		if (n % 2 == 0) {
			n /= 2;

		}
		else {
			n = (3 * n) + 1;
		}

		cont++;
	}

	printf("1");

	return cont;
}
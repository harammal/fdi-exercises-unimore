#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0) {
		return 1;
	}

	if (n <= 0) {
		return 1;
	}

	for (int i = 2; i < n; i++) {
		bool pm = is_prime(i);

		if (pm) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}
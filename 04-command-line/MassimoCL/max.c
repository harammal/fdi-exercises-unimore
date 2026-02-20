#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc <= 1) {
		return 1;
	}

	char* endptr;
	int max = INT_MIN;

	for (int i = 1; i < argc; i++) {
		int n = strtol(argv[i], &endptr, 10);

		if (*endptr != 0) {
			return 1;
		}

		if (n >= max) {
			max = n;
		}
	}
	
	printf("%d", max);

	return 0;
}
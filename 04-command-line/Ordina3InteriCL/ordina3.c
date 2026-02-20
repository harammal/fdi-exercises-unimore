#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 4) {
		return 1;
	}

	char* endptr;
	int num[3];

	for (int i = 0; i < 3; i++) {
		num[i] = strtol(argv[i + 1], &endptr, 10);

		if (*endptr != 0) {
			return 1;
		}
	}

	int tmp;

	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2 - i; j++) {

			if (num[j] < num[j + 1]) {

				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	printf("%d %d %d\n", num[0], num[1], num[2]);

	return 0;
}
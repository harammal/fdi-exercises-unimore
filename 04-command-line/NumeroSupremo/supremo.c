#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc != 3) {
		return 1;
	}

	size_t len1 = strlen(argv[1]), len2 = strlen(argv[2]);
	if (len1 != len2) {
		return 1;
	}
	char* s1 = malloc(len1 + 1);
	char* s2 = malloc(len2 + 1);
	if (s1 == NULL || s2 == NULL) {
		return 1;
	}

	strcpy(s1, argv[1]);
	strcpy(s2, argv[2]);

	// Controllo numero supremo
	char* endptr;
	int num1 = 0, num2 = 0;

	num1 = strtol(s1, &endptr, 10);
	if (*endptr != 0) {
		return 1;
	}
	num2 = strtol(s2, &endptr, 10);
	if (num1 == 0 && num2 == 0) {
		printf("Numero non supremo\n");
		return 0;
	}
	else
		if (*endptr != 0 || num1 == 0 || num2 == 0) {
			return 1;
		}

	for (int i = 0; i < len1; i++) {
		num1 = strtol(s1, &endptr, 10);
		if (*endptr != 0) {
			return 1;
		}
		num2 = strtol(s2, &endptr, 10);
		if (*endptr != 0) {
			return 1;
		}

		if (num1 > num2) {
			s1++;
			s2++;
		}
		else {
			printf("Numero non supremo\n");
			return 0;
		}
	}

	printf("Numero supremo\n");

	return 0;
}
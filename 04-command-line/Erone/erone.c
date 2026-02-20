#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
	if (argc != 4) {
		return 1;
	}
	char* endptr;

	double a = strtod(argv[1], &endptr);
	if (*endptr != 0 || a <= 0) {
		return 1;
	}

	double b = strtod(argv[2], &endptr);
	if (*endptr != 0 || b <= 0) {
		return 1;
	}
	
	double c = strtod(argv[3], &endptr);
	if (*endptr != 0 || c <= 0) {
		return 1;
	}

	double Area = (sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c))) / 4;

	printf("%.6f", Area);

	return 0;
}
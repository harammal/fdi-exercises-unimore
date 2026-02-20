#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	if (argc != 4) {
		return 1;
	}

	char* endptr;
	double AB = strtod(argv[1], &endptr);
	if (*endptr != 0 || AB < 0) {
		return 1;
	}
	double Ab = strtod(argv[2], &endptr);
	if (*endptr != 0 || Ab < 0) {
		return 1;
	}
	double h = strtod(argv[3], &endptr);
	if (*endptr != 0 || h < 0) {
		return 1;
	}

	double V = (AB + Ab + sqrt(AB * Ab)) * (h / 3);

	printf("%.10f\n", V);

	return 0;
}
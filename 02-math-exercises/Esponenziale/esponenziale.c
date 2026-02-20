#include <stdbool.h>

double eleva(double base, unsigned int esp) {

	double ris = 1.0;

	for (unsigned int i = 0; i < esp; ++i) {
		ris *= base;
	}

	return ris;
}

double fattoriale(unsigned int n) {
	double ris = 1.0;

	for (unsigned i = 1; i <= n; ++i) {
		ris *= i;
	}

	return ris;
}

double esponenziale(double x) {

	double s = 0, olds = -1;
	unsigned int n = 0;

	while (s != olds) {
		olds = s;
		s += eleva(x, n) / fattoriale(n);

		++n;
	}

	return s;
}
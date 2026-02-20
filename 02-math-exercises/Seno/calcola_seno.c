#include <math.h>

double numeratore(unsigned int n) {
	double num = 1;

	for (unsigned int i = 0; i < n; ++i) {
		num *= (-1);
	}

	return num;
}

double denominatore(unsigned int n) {
	double num = 1;

	for (unsigned int i = 1; i <= 2*n + 1; ++i) {
		num *= i;
	}

	return num;
}

double prodotto(double x, unsigned int n) {
	double num = 1;

	for (unsigned int i = 0; i < 2*n + 1; ++i) {
		num *= x;
	}

	return num;
}

double calcola_seno(double x) {

	double s = 0, olds = -1;
	unsigned int n = 0;

	while (s != olds) {
		olds = s;

		s += (numeratore(n) / denominatore(n)) * prodotto(x, n);
		++n;
	}

	return s;
}
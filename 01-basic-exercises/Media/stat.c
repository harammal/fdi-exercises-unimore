#include "stat.h"

double media(double* x, unsigned int n) {

	if (n == 0 || x == NULL) {
		return 0;
	}

	double media = 0;
	for (unsigned int i = 0; i < n; ++i) {
		media += x[i];
	}

	return media/n;
}
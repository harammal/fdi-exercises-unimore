#include "stat.h"

double varianza(double* x, unsigned int n) {
	if (n < 2 || x == NULL) {
		return 0;
	}

	double valmedio = 0;
	for (unsigned int i = 0; i < n; ++i) {
		valmedio += x[i];
	}
	valmedio /= n;

	double sommatoria = 0;
	for (unsigned int i = 0; i < n; ++i) {
		sommatoria += (x[i] - valmedio) * (x[i] - valmedio);
	}

	return sommatoria / n;
}
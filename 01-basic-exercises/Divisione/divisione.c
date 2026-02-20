int divisione(double a, double b, double *q) {
	if (b != 0) {
		*q = a / b;
		return 1;
	}
	else
		return 0;
}
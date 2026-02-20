double discriminante(double a, double b, double c) {
	return (b * b) - 4 * a * c;
}

double radq(double a) {
	double t, x = a;

	if (x <= 0.)
		return 0.;
	do {
		t = x;
		x = 0.5 * (t + a / t);
	} while (x != t);

	return x;
}int soluzioni(double a, double b, double c, double* x1, double* x2) {	double delta = discriminante(a, b, c);	if (delta < 0) {		return 0;	}	else if (delta == 0) {		*x1 = -b / (2 * a);		*x2 = *x1;		return 1;	}	else {		double rad = radq(delta);		*x1 = (-b + rad) / (2 * a);		*x2 = (-b - rad) / (2 * a);		return 2;	}}
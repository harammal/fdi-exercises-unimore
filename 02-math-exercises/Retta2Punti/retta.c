#include <stdbool.h>

double coefficiente_angolare(double x1, double y1, double x2, double y2) {
	return (y2 - y1) / (x2 - x1);
}

double ordinata_origine(double x1, double y1, double x2, double y2) {
	return (x2 * y1 - x1 * y2) / (x2 - x1);
}

bool retta_per_due_punti(double x1, double y1, double x2, double y2, double* m, double* q) {
	if (x1 != x2) {
		*m = coefficiente_angolare(x1, y1, x2, y2);
		*q = ordinata_origine(x1, y1, x2, y2);

		return true;
	}
	else
		return false;
}
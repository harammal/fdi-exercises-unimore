#include <math.h>

double square_dist(double x1, double y1, double x2, double y2){

	double D = pow((x1 - x2), 2) + pow((y1 - y2), 2);

	return D;
}
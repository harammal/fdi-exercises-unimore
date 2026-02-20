#include "weight.h"

int main(void) {

	double iw1 = ideal_weight(175, 19, 'M', lorenz);
	double iw2 = ideal_weight(175, 19, 'M', berthean);
	double iw3 = ideal_weight(175, 19, 'M', keys);

	return iw3;
}
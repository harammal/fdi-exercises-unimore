#include "weight.h"
#include <math.h>

double ideal_weight(int h, int age, char sex, enum formula f) {
	if (h < 0 || age < 0 || (sex != 'F' && sex != 'M')) {
		return -1;
	}

	double ris;

	switch (f){
		case lorenz:
		{
			if (sex == 'M') {
				ris = (double)h - 100 - ((double)(h - 150) / 4);
			}
			else
				if (sex == 'F') {
					ris = (double)h - 100 - ((double)(h - 150) / 2);
				}
			return ris;
			break;
		}
		case berthean:
		{
			ris = 0.8 * ((double)h - 100) + ((double)age / 2);
			return ris;
			break;
		}
		case keys:
		{
			if (sex == 'M') {
				ris = pow((double)h / 100, 2) * 22.1;
			}
			else
				if (sex == 'F') {
					ris = pow((double)h / 100, 2) * 20.6;
				}
			return ris;
			break;
		}
		default:
		{
			return -1;
			break;
		}
	}
}
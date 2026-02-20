#include"complessi.h"
#include <stdlib.h>

void prodotto_complesso(struct complesso* comp1, const struct complesso* comp2) {
	if (comp1 == NULL || comp2 == NULL) {
		return;
	}
	comp1->re = (comp1->re * comp2->re) - (comp1->im * comp2->im);
	comp1->im = (comp1->re * comp2->im) + (comp1->im * comp2->re);
}
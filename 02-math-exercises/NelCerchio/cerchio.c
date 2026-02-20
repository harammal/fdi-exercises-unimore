#include "cerchio.h"
#include <stdlib.h>
#include <math.h>

bool nel_cerchio(const struct punto* p, const struct cerchio* c) {
	if (p == NULL || c == NULL) {
		return false;
	}

	if (sqrt(pow(c->x - p->x, 2) + pow(c->y - p->y, 2)) <= c->r) {
		return true;
	}
	else
		return false;
}
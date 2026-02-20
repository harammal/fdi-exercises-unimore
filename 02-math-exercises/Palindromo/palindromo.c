#include <stdbool.h>
#include <math.h>

bool palindromo(unsigned long long x) {

	unsigned long long inverso = 0, cifra = 0, copia = x;

	while (x > 0) {
		cifra = x % 10;

		inverso = (inverso * 10) + cifra;
		x /= 10;
	}

	if (inverso == copia) {
		return true;
	}
	else {
		return false;
	}
}
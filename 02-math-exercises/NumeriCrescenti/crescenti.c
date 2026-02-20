#include <stdbool.h>

extern bool crescente(unsigned int x) {

	int cifra, cifrapre;
	bool ris = false;

	if (x < 10)
		return true;
	else {
		while (x >= 10) {
			cifra = x % 10;
			cifrapre = (x / 10) % 10;

			if (cifrapre + 1 == cifra)
				ris = true;
			else
				return false;

			x /= 10;
		};
	}
	return ris;
}
#include "somma.h"

static int SommaFinoARec(int n, int s) { // static perché cosi' il codice compilato della funzione non sarà visibile all'esterno
	// Caso base
	if (n == 1) {
		return s + 1;
	}
	
	return SommaFinoARec(n - 1, s + n); // il compilatore trasforma le funzioni tail recursive in cicli
}

int SommaFinoA(int n) {
	// Caso particolare
	if (n <= 0) {
		return -1;
	}

	return SommaFinoARec(n, 0);
}
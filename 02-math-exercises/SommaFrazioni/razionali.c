#include "razionali.h"
#include <stdlib.h>

void fr_somma(struct fraz* ris, const struct fraz* a, const struct fraz* b) {
	if (ris == NULL || a == NULL || b == NULL) {
		return;
	}

	int num = (a->num * b->den) + (b->num * a->den);
	unsigned int den = a->den * b->den;

	unsigned int A = abs(num), B = den, MCD; // abs(num) --> Valore Assoluto (MCD deve esssere positivo)

	while (B != 0) { // Calcolo MCD (Algoritmo di Euclide)
		int resto = A % B;
		A = B;
		B = resto;
	}
	MCD = A;

	if (num % MCD == 0 && den % MCD == 0) {
		num /= MCD;
		den /= MCD;
	}

	ris->num = num;
	ris->den = den;
}
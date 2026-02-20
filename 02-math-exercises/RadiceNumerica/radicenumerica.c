#include <stdio.h>
#include <stdlib.h>

int sommacifre(int n) {
	int somma = 0;

	for (int i = 0; n > 0; ++i) {
		int cifra = n % 10;

		somma += cifra;

		n /= 10;
	}

	return somma;
}

int contacifre(int somma) {
	int cont = 0;

	for (int i = 0; somma > 0; ++i) {
		somma /= 10;

		cont++;
	}
	return cont;
}

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}
	
	char* endptr;
	int n = strtol(argv[1], &endptr, 10);

	if (n < 0) {
		return 1;
	}

	int somma = n, cifre;
	do{
		somma = sommacifre(somma);
		cifre = contacifre(somma);
	} while (cifre >= 2);

	printf("%d", somma);

	return 0;
}
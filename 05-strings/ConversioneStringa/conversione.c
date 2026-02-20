#include <stdlib.h>

char* converti(unsigned int n) {
	size_t elem = 0;
	unsigned int copn = n;
	while (copn > 0) {
		elem++;
		copn /= 10;
	}

	char* conv = malloc((elem + 1) * sizeof(char));
	if (conv == NULL) {
		return NULL; // Memoria non allocata
	}

	conv[elem] = '\0';

	for (size_t i = elem; i > 0; i--) {
		int cifra = n % 10;
		conv[i - 1] = cifra + '0'; // Converte la cifra in carattere ASCII

		n /= 10;
	}

	return conv;
}
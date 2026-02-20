#include <stdio.h>

void stampa(FILE* f, char c , unsigned char n) {
	for (int i = 0; i < n; i++) {
		fputc(c, f);
	}
}

void croceromana(FILE* f, unsigned char n) {
	if (n <= 0) {
		return;
	}

	// SOPRA
	for (int i = 0; i < n; i++) {
		stampa(f, ' ', n * 2);
		fputc('|', f);
		fputc('\n', f);
	}

	// CENTRO
	stampa(f, '-', n * 2);
	fputc('+', f);
	stampa(f, '-', n * 2);

	// SOTTO
	for (int i = 0; i < n * 2; i++) {
		fputc('\n', f);
		stampa(f, ' ', n * 2);
		fputc('|', f);
	}

	return;
}
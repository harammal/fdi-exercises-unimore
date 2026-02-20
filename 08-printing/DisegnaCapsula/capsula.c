#include <stdio.h>

void stampa(FILE* f, char c, unsigned char n) {
	for (int i = 0; i < n; i++) {
		putc(c, f);
	}
}

void capsula(FILE* f, unsigned char n) {

	// PRIMA RIGA
	stampa(f, ' ', n);
	stampa(f, '_', n);
	putc('\n', f);

	// SOPRA
	for (int i = 0; i < n; i++) {
		stampa(f, ' ', n - 1 - i);

		putc('/', f);

		stampa(f, ' ', n + 2 * i);

		fprintf(f, "\\\n");
	}

	// CENTRO
	for (int i = 0; i < n; i++) {
		putc('|', f);

		stampa(f, ' ', 3 * n - 2);

		fprintf(f, "|\n");
	}

	// SOTTO
	for (int i = n - 1; i > 0; i--) {
		stampa(f, ' ', n - 1 - i);

		putc('\\', f);

		stampa(f, ' ', n + 2 * i);

		fprintf(f, "/\n");
	}

	// ULTIMA RIGA
	stampa(f, ' ', n - 1);
	putc('\\', f);
	stampa(f, '_', n);

	fprintf(f, "/\n");

	return;
}
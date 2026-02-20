#include <stdio.h>
int main(void)
{
	while (1) {
		int c = fgetc(stdin); // Leggo un byte da stdin
		if (c == EOF) { // Controllo se la lettura ha funzionato
			fputs("-1\n", stdout); // Se no scrivo -1 su stdout
			break;
		}
		// Uso il carattere per scriverne il valore in base 10 su stdout
		if (c >= 100) {
			fputc('0' + c / 100, stdout);
		}
		if (c >= 10) {
			fputc('0' + c / 10 % 10, stdout);
		}
		fputc('0' + c % 10, stdout);
		// Dopo ogni numero, vado a capo
		fputc('\n', stdout);
	}
	return 0;
}
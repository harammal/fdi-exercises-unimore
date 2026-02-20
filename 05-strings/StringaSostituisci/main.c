#include <stdlib.h>

extern char* sostituisci(const char* str, const char* vecchia, const char* nuova);

int main(void) {

	const char str[] = "qui cambia la parola cambia";
	const char vecchia[] = "cambia";
	const char nuova[] = "sostituisci";

	char* sos = sostituisci(str, vecchia, nuova);

	return 0;
}
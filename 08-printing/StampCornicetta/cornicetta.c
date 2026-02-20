#include <stdio.h>
#include <string.h>

void stampa_cornicetta(const char* s) {
	size_t len = strlen(s);

	fputc('/', stdout);
	for (size_t i = 0; i < len + 2; ++i) {
		fputc('-', stdout);
	}

	fputs("\\\n| ", stdout);

	fputs(s, stdout);
	fputs(" |\n", stdout);

	fputc('\\', stdout);
	for (size_t i = 0; i < len + 2; ++i) {
		fputc('-', stdout);
	}

	fputs("/\n", stdout);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

extern char** extract_parole(const char* filename, size_t* n);

int main(void) {

	size_t n = 0;

	char **words = extract_parole("prova.txt", &n);

    if (words != NULL) {
        for (size_t i = 0; i < n; ++i) {
            printf("Parola %zu: %s\n", i + 1, words[i]);
            free(words[i]);
        }
        free(words);
    }
    else {
        printf("Errore nell'apertura del file.\n");
    }

	return 0;
}
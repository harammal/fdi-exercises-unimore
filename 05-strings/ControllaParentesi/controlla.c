#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool check_parenthesis(const char* s) {
	if (s == NULL) {
		return NULL;
	}

	size_t len = strlen(s);
    int count = 0;

	for (size_t i = 0; i < len; i++) {
        if (s[i] == '(') {
            count++;  // Aumenta il conteggio per ogni parentesi aperta
        }
        else if (s[i] == ')') {
            count--;  // Diminuisci il conteggio per ogni parentesi chiusa

            if (count < 0) {
                return false;  // Se count diventa negativo, c'è una parentesi chiusa senza corrispondente aperta
            }
        }
    }

    return count == 0;
}
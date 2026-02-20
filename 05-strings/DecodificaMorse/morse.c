#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* decodifica_morse(const char* codice) {
    if (codice == NULL) {
        return NULL;
    }

    char *alphabet[26] = { "._", "_...", "_._.", "_..", ".", ".._.", "__.", "....", "..", ".___",
                          "_._", "._..", "__", "_.", "___", ".__.", "__._", "._.", "...", "_",
                          ".._", "..._", ".__", "_.._", "_.__", "__.."
    };

    size_t len_cod = strlen(codice);

    char* dm = malloc((len_cod + 1) * sizeof(char));
    if (dm == NULL) {
        return NULL;
    }

    char morse[6] = "";
    size_t i = 0;

    while (*codice != '\0') {
        if (sscanf(codice, "%5[^ /]", morse) == 1) {

            for (size_t c = 0; c < 26; c++) {
                if (strcmp(morse, alphabet[c]) == 0) {
                    dm[i] = 'A' + (char)c;
                    i++;
                    break;
                }
            }
            codice += strlen(morse);
        }

        if (*codice == ' ') {
            codice++;
        }
        else
            if (*codice == '/') {
                dm[i] = ' ';
                i++;
                codice += 2;
            }
    }

    dm[i] = '\0';

    return dm;
}
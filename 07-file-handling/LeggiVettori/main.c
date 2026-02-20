#define _CRT_SECURE_NO_WARNINGS
#include "vettori.h"
#include <stdio.h>

int main(void) {
	FILE* f = fopen("vettori1.log", "r");
	size_t n;

	struct vettore* v = vettori_leggi(f, &n);

    for (size_t i = 0; i < n; i++) {
        printf("Vettore %zu (len: %zu): ", i + 1, v[i].len);

        for (size_t j = 0; j < v[i].len; j++) {
            printf("%d ", v[i].data[j]);
        }
        printf("\n");

        // Libera la memoria per ogni vettore
        free(v[i].data);
    }
	
	free(v);

	return 0;
}
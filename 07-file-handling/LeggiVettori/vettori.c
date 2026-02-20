#define _CRT_SECURE_NO_WARNINGS
#include "vettori.h"

struct vettore* vettori_leggi(FILE* f, size_t* n){

	size_t len;
	int num;
	struct vettore* v = NULL;
	*n = 0;

	while (fscanf(f, "%zu", &len) == 1) {
		(*n)++;

		v = realloc(v, (*n) * sizeof(struct vettore));
		if (v == NULL) {
            return NULL;
        }

		v[*n - 1].data = malloc(len * sizeof(int));

		if (v[*n - 1].data == NULL) {
			return NULL;
		}

		v[*n - 1].len = len;

		for (size_t i = 0; i < len; i++) {
			fscanf(f, "%d", &num);

			v[*n - 1].data[i] = num;
		}
	}

	return v;
}
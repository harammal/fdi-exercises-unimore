#include "transpose.h"
#include <string.h>
#include <stdio.h>

#define E(m, r, c) (m)->data[(r) * (m)->cols + (c)]

char* ct_encode(const char* message, const size_t* column_order, size_t n) {
	if (message == NULL || column_order == NULL || n == 0) {
		return NULL;
	}

	size_t len_mess = strlen(message);
	size_t num_colP = len_mess % (size_t)n; // num colonne nell'ultima riga non completa
	size_t num_righe = len_mess / (size_t)n; // num righe complete

	size_t rigaP = 0; // riga in più (parziale)
	if (num_colP != 0) {
		rigaP = 1;
	}

	struct matrix *m = malloc(sizeof(struct matrix));
	if (m == NULL) {
		return NULL;
	}
	m->rows = num_righe + rigaP;
	m->cols = n;
	m->data = malloc(m->rows * m->cols * sizeof(char));
	if (m->data == NULL) {
		free(m);
		return NULL;
	}

	size_t i = 0;
	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			if (i < len_mess)
			{
				E(m, r, c) = message[i];
				i++;
			}
			else {
				E(m, r, c) = '\0';
			}
		}
	}

	char* trasp_col = malloc((len_mess + 1) * sizeof(char));
	if (trasp_col == NULL) {
		free(m->data);
		free(m);
		return NULL;
	}

	i = 0;
	for (size_t c = 0; c < m->cols; c++) {
		size_t chiave = column_order[c];

		for (size_t r = 0; r < m->rows; r++) {

			if (E(m, r, chiave) != '\0') {
				trasp_col[i] = E(m, r, chiave);
				i++;
			}

		}
	}

	trasp_col[len_mess] = '\0';

	printf("%s", trasp_col);

	free(m->data);
	free(m);

	return trasp_col;
}
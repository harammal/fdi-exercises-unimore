#include "matrix.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

struct matrix* mat_fromstring(const char* s) {
	if (s == NULL) {
		return NULL;
	}
	size_t len = strlen(s);
	struct matrix* m = malloc(sizeof(struct matrix));
	m->rows = len;
	m->cols = len;
	m->data = malloc(len * len * sizeof(int));
	int r = 0, c = 0;



	/*
	char* endptr;
	while (1) {
		if (isdigit(s)) {
			E(m, r, c) = strtol(s, &endptr, 10);
		}
	}
	*/
}
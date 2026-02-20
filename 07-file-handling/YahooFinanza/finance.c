#define _CRT_SECURE_NO_WARNINGS
#include "finance.h"
#include <stdio.h>

struct value* read_historical_series(const char* filename, size_t* n) {
	if (filename == NULL) {
		return NULL;
	}

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	char buffer[256];
	if (fgets(buffer, sizeof(buffer), f) == NULL) {
		fclose(f);
		return NULL;
	}

	(*n) = 0;
	size_t capacity = 2;
	struct value* values = malloc(capacity * sizeof(struct value));

	while (fgets(buffer, sizeof(buffer), f) != NULL) {
		struct value temp;

		int ret = sscanf(buffer, "%10[^,],%lf,%lf,%lf,%lf,%lf,%lld",
			temp.Date, &temp.Open, &temp.High, &temp.Low,
			&temp.Close, &temp.AdjClose, &temp.Volume);

		if (ret == EOF) {
			break;
		}

		if (*n == capacity) {
			capacity *= 2;
			values = realloc(values, capacity * sizeof(struct value));
		}

		values[*n] = temp;
		(*n)++;
	}

	fclose(f);

	if (*n == 0) {
		free(values);
		return NULL;
	}
	else {
		values = realloc(values, *n * sizeof(struct value));
		return values;
	}
	return values;
}
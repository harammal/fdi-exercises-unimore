#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int* read_gruppi(const char* filename, size_t* ngruppi) {
	if (filename == NULL) {
		return NULL;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	*ngruppi = 0;
	int capacity_vect = 10, capacity_buff = 10;
	int* v = malloc(capacity_vect * sizeof(int));

	int somma = 0, c, i = 0, num;
	char* buffer = malloc(capacity_buff * sizeof(char) + 1);
	while (1) {
		c = fgetc(f);

		if (c != '\n' && c != EOF) {
			buffer[i++] = (char)c;

			if (i == capacity_buff) {
				capacity_buff *= 2;
				v = realloc(v, capacity_buff * sizeof(char) + 1);
			}
			continue;
		}
		else if (c == '\n' && i != 0) {
			buffer[i] = '\0';
			i = 0;

			char* endptr;
			num = strtol(buffer, &endptr, 10);
			if (*endptr != 0) {
				fclose(f);
				return NULL;
			}

			somma += num;

			continue;
		}
		else if ((c == '\n' || c == EOF) && i == 0 && somma != 0) {
			v[*ngruppi] = somma;
			(*ngruppi)++;

			if ((int)(*ngruppi) == capacity_vect) {
				capacity_vect *= 2;
				v = realloc(v, capacity_vect * sizeof(int));
			}
			somma = 0;

			if (c == EOF) {
				break;
			}
		}
	}

	free(buffer);
	v = realloc(v, (*ngruppi) * sizeof(int));

	fclose(f);

	return v;
}

int main(void) {

	size_t size = 0;

	int* v = read_gruppi("file3.txt", &size);

	free(v);

	return 0;
}
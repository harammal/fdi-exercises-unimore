#include <stdlib.h>
#include <stdio.h>

extern int* missing(const int* v, size_t n, int min, int max, size_t* size);

int main(void) {

	size_t size;
	int v[] = {2, 4, 5};

	int* m = missing(v, 3, 1, 10, &size);

	for (size_t i = 0; i < size; i++) {
		printf("%d ", m[i]);
	}

	free(m);

	return 0;
}
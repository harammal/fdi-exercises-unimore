#include <stdlib.h>
#include <stdio.h>

extern unsigned int* esagonali(unsigned int max, size_t* n);

int main(void) {

	unsigned int max = 4294967295;
	size_t n;

	unsigned int* v = esagonali(max, &n);

	for (int i = 0; i < n; i++) {
		printf("%u ", v[i]);
	}
	printf("\nmax: %u, n: %zu\n", max, n);

	free(v);

	return 0;
}
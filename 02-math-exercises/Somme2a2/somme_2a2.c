#include <stdint.h>
#include <stdlib.h>

uint32_t* somme_2a2(uint32_t* vett, size_t size) {

	if (vett == NULL || size < 2)
		return NULL;

	size_t newsize = size / 2;
	uint32_t* somme = malloc(newsize * sizeof(uint32_t));

	if (somme == NULL)
		return NULL;

	for (size_t i = 0; i < newsize; ++i) {
		somme[i] = vett[2 * i] + vett[2 * i + 1];
	}

	return somme;
}
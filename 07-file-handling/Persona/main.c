#include "persona.h"

int main(void) {

	size_t size;
	struct persona *p = leggi_persone("file1.txt", &size);

	free(p);

	return 0;
}
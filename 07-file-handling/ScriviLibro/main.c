#define _CRT_SECURE_NO_WARNINGS
#include "libri.h"

int main(void) {
	uint16_t anni_ristampe[] = {1999, 2002, 2005, 0 };
	struct libro b = {"Libro 1", anni_ristampe};

	FILE* f = fopen("libro.txt", "wb");
	if (f == NULL) {
		return false;
	}

	bool libro = libro_scrivi(&b, f);

	fclose(f);

	return 0;
}
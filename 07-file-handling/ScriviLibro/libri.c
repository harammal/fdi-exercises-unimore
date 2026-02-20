#include "libri.h"
#include <string.h>
#include <stdlib.h>

bool libro_scrivi(const struct libro* p, FILE* f) {
	// scrittura titolo
	size_t ret = fwrite(p->titolo, sizeof(char), strlen(p->titolo), f);
	if (ret != strlen(p->titolo)) {
		return false;
	}

	// scrittura zero
	char zero = 0;

	ret = fwrite(&zero, sizeof(char), 1, f);
	if (ret != 1) {
		return false;
	}

	// scrittura anni_ristampe (little endian)
	for (size_t i = 0; p->anni_ristampe[i] != 0; ++i) {
		uint16_t anno = p->anni_ristampe[i];

		uint8_t bytes[2];
		bytes[0] = (uint8_t)anno & 0xFF; // Byte meno significativo
		bytes[1] = (uint8_t)((anno >> 8) & 0xFF); // Byte più significativo

		ret = fwrite(bytes, sizeof(uint8_t), 2, f);
		if (ret != 2) {
			return false;
		}
	}

	// scrittura terminatore (little endian)
	uint8_t terminatore[2] = { 0x00, 0x00 };

	ret = fwrite(terminatore, sizeof(uint8_t), 2, f);
	if (ret != 2) {
		return false;
	}

	return true;
}
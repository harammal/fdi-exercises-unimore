#include "decode.h"

extern void decode(FILE* f) {
	if (f == NULL) {
		return;
	}

	int c = 0;

	while ((c = fgetc(f)) != EOF) {
		if (c >= '1' && c <= '9') {
			int p = 0;
			if ((p = fgetc(f)) != EOF) {

				for (int i = '0'; i < c; i++) {
					putchar(p);
			}
			}
		}
		else {
			putchar(c);
		}
	}
	return;
}
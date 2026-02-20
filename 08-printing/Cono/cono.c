#include <stdio.h>

void stampa_spazio(unsigned int volte) {
	for (unsigned int i = 0; i < volte; ++i) {
		fputc(' ', stdout);
	}
}

void stampa_cono(unsigned int h) {
	/*if (h <= 0) {
		return;
	}*/
	stampa_spazio(h + 1);
	fputs("_\n", stdout);

	unsigned j = 1, copy_h = h;
	for (unsigned int i = 0; i < h; ++i) {
		if (i == h - 1) {
			fputs("_/", stdout);
		}
		else {
			stampa_spazio(copy_h);
			fputc('/', stdout);
		}
		stampa_spazio(j);
		
		if (i == h-1) {
			fputs("\\_", stdout);
		}
		else {
			fputs("\\\n", stdout);
		}
		j += 2;
		copy_h--;
	}
}
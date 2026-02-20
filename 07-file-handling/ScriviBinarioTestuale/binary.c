#define _CRT_SECURE_NO_WARNINGS
#include"binary.h"

void stampa_binario(const char* filename_in, const char* filename_out) {
	if (filename_in == NULL || filename_out == NULL) {
		return;
	}

	FILE* fin = fopen(filename_in, "rb");
	if (fin == NULL) {
		return;
	}
	FILE* fout = fopen(filename_out, "w");
	if (fout == NULL) {
		fclose(fin);
		return;
	}

	unsigned char byte;
	int cnt = 0;
	while (1) {
		size_t ret = fread(&byte, sizeof(unsigned char), 1, fin);
		if (ret != 1) {
			break;
		}
		int bin[8];

		for (int i = 7; i >= 0; i--) {
			bin[i] = byte % 2;
			byte /= 2;
		}

		for (int i = 0; i < 8; i++) {
			if (bin[i]) {
				fputc('1', fout);
			}
			else if (!bin[i]) {
				fputc('0', fout);
			}
		}
		fputc(' ', fout);
		cnt++;

		if (cnt == 8) {
			cnt = 0;
			fputc('\n', fout);
		}
	}

	fclose(fin);
	fclose(fout);
}
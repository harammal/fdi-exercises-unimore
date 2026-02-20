#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern void capsula(FILE* f, unsigned char n);

int main(void) {
	FILE* f = fopen("disegno.txt", "w");

	capsula(f, 4);

	fclose(f);
}
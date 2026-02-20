#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern void croceromana(FILE* f, unsigned char n);

int main(void) {
	croceromana(stdout, 2);
		
	return 0;
}
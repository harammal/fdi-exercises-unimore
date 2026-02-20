#include "alterna.h"

int main(void) {
	char s1[] = "prova";
	char s2[] = "12345467";
	char *s3 = alterna(s2, s1);

	free(s3);
	return 0;
}
#include <stdlib.h>
#include <string.h>

extern char* rimuovimultipli(const char* str);

int main(void) {

	char* r = rimuovimultipli("doppppiia!");
	free(r);

	return 0;
}
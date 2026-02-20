#include <stdlib.h>
#include <string.h>

extern char* unici(const char* s);

int main(void) {

	char* u = unici("ciao casa");

	free(u);

	return 0;
}
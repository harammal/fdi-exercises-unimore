#include <stdlib.h>
#include <string.h>

extern char* trim(const char* s);

int main(void) {

	char *tr = trim(" ci ao ");

	free(tr);

	return;
}
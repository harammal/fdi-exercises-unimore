#include <stdlib.h>
#include <string.h>

void translate(char* str, const char* from, const char* to);

int main(void) {

	char* str = malloc(4 * sizeof(char) + 1);
	str[0] = 'c', str[1] = 'i', str[2] = 'a', str[3] = 'o';

	translate(str, "abdc", "wxzy");

	return 0;
}
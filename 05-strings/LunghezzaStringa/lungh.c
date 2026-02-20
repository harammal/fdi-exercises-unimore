#include <stdlib.h>
#include <string.h>

size_t lungh(const char* str) {
	if (str == NULL)
		return 0;

	return strlen(str);
}
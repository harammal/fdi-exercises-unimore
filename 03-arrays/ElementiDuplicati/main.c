#include "duplicates.h"
#include <stdio.h>

int main() {

	int v1[] = { 1, 2, 1, 4 };

	bool *dup = duplicates(v1, 4);

	for (size_t i = 0; i < 4; i++) {
		printf("%d ", dup[i]);
	}

	return 0;
}
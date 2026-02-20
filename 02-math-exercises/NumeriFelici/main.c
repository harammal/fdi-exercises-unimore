#include "felici.h"
#include <stdio.h>

int main(void) {

	unsigned int num = 0;

	if (felice(num) == 1)
		printf("%u e' felice \n", num);

	else
		if (felice(num) == 0)
			printf("%u e' infelice \n", num);

	return 0;
}
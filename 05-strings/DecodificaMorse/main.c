#include "morse.h"
#include <stdio.h>

int main(void) {

	char* dm = decodifica_morse("_._. .. ._ ___ / __ ._ __ __ ._");

	printf("%s", dm);

	return 0;
}
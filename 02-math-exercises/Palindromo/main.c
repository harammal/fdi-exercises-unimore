#include <stdbool.h>
#include <stdio.h>

extern bool palindromo(unsigned long long x);

int main(void) {

	bool b = palindromo(557);
	
	if (b) {
		printf("Palindromo\n");
	}
	else {
		printf("NON Palindromo\n");
	}

	return 0;
}
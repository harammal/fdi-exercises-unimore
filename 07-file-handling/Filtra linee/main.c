#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

extern bool filtra_linee(const char* inputfile, const char* outputfile, const char* required_string);

int main(void) {

	bool b = filtra_linee("input1.txt", "output1.txt", "esempio");

	return 0;
}
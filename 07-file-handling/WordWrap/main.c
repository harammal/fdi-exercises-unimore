#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

extern bool file_wordwrap(const char* input_filename, const char* output_filename);

int main(void) {

	bool ris = file_wordwrap("input1.txt", "output1.txt");

	return 0;
}
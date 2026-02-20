#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int strcmp_natural(const char* a, const char* b) {
	size_t lena = strlen(a), lenb = strlen(b);
	int numa, numb;

	for (size_t i = 0; i < ((lena < lenb) ? lena : lenb); i++) {
		if (isdigit(a[i]) != 0 && isdigit(b[i]) != 0) {
			sscanf(a + i, "%d", &numa);
			sscanf(b + i, "%d", &numb);

			if (numa == numb) {
				int cifre = log10((double)numa) + 1;
				i += (size_t)cifre;

				continue;
			}
			else if (numa < numb) // a viene prima
			{
				return -1;
			}
			else if (numa > numb) // a va dopo
			{
				return 1;
			}
		}


		if (a[i] == b[i]) {
			continue;
		}
		else if (a[i] < b[i]) // a viene prima
		{
			return -1;
		}
		else if (a[i] > b[i]) // a va dopo
		{
			return 1;
		}
	}

	if (lena < lenb) {
		return -1;
	}
	else if (lena > lenb) {
		return 1;
	}
	else
		return 0;
}
#include <stdlib.h>
#include <stdio.h>

void plotter(const char* p) {
	if (p == NULL) {
		return;
	}

	int i = 0;
	while (p[i] != 0) {
		if (p[i] < 0) {
			int val = abs((int)p[i]);
			for (int j = 0; j < val; ++j) {
				printf("%c", p[i + 1]);
			}
			i += 2;
		}
		else if (p[i] > 0) {
			printf("%c", p[i]);
			i++;
		}
	}
}
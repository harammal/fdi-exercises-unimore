#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv) {
	if (argc == 1) {
		fputc('\n', stdout);
		return 0;
	}

	size_t i = 1;
	while (argv[i]) {
		size_t len = strlen(argv[i]);
		int cnt = 0;

		for (size_t j = 0; j < len; ++j) {
			if (argv[i][j] == ' ') {
				continue;
			}
			if (j == len - 1) {
				fputc(toupper(argv[i][j]), stdout);
				cnt++;
			}
			else {
				fputc(argv[i][j], stdout);
				cnt++;
			}
		}

		i++;

		if (!argv[i]) {
			fputc('\n', stdout);
		}
		else if (argv[i] && cnt > 0) {
			fputc(' ', stdout);
		}
	}

	return 0;
}
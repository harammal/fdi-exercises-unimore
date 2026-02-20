#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool file_wordwrap(const char* input_filename, const char* output_filename) {
	if (input_filename == NULL || output_filename == NULL) {
		return false;
	}

	FILE* fin = fopen(input_filename, "r");
	if (fin == NULL) {
		return false;
	}
	FILE* fout = fopen(output_filename, "w");
	if (fout == NULL) {
		return false;
	}

	int c;
	size_t len = 0, cnt = 0;
	size_t capacity = 128;
	char* parola = malloc(capacity * sizeof(char));
	
	bool in_parola = false;

	while (1) {

		while (1) {
			c = fgetc(fin);

			if (c == EOF && in_parola) {
				parola[len] = '\0';
				break;
			}
			else if (c == EOF && !in_parola) {
				break;
			}

			if (isspace(c)) {
				in_parola = false;
				parola[len] = '\0';
				break;
			}
			else {
				in_parola = true;

				if (len == capacity) {
					capacity *= 2;
					parola = realloc(parola, capacity * sizeof(char));
				}

				parola[len++] = c;

				if (len == 39) {
					in_parola = false;
					parola[len] = '\0';
					break;
				}

			}
		}

		if (c == EOF && cnt == 0) {
			fclose(fin);
			fclose(fout);
			free(parola);

			return false;
		}

		if (c == EOF && !in_parola) {
			break;
		}

		if (len == 0 && isspace(c)) {
			continue;
		}

		if (len + cnt < 39) {
			if (cnt != 0) {
				fputc(' ', fout);
				cnt++;
			}
			fputs(parola, fout);

			cnt += len;
			len = 0;

			in_parola = false;
		}
		else {
			fputc('\n', fout);
			cnt = 0;

			fputs(parola, fout);

			cnt += len;
			len = 0;

			in_parola = false;
		}
	}

	fclose(fin);
	fclose(fout);
	free(parola);

	return true;
}
#include "alterna.h"
#include <stdio.h>

char* alterna(const char* s1, const char* s2) {
	if (s1 == NULL || s2 == NULL || s1[0] == 0 || s2[0] == 0) {
		return NULL;
	}

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t len3 = len1 + len2;

	char* s3 = malloc(len3 * sizeof(char) + 1);
	if (s3 == NULL) {
		return NULL;
	}

	size_t i = 0, j = 0;
	while(i < len3) {
		if (len1 == 0) {
			s3[j] = s2[i];

			j++;
			i++;
			len2--;
		}
		else
			if (len2 == 0) {
				s3[j] = s1[i];

				j++;
				i++;
				len1--;
			}
			else {
				s3[j] = s1[i];
				j++;

				if ((i + j + 1) != len3) {
					s3[j] = s2[i];
					j++;
				}

				i++;
				len1--;
				len2--;
			}
	}

	s3[len3] = 0;

	printf("%s", s3);

	return s3;
}
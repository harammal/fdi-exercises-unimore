#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* trim(const char* s) {
	if (s == NULL) {
		return NULL;
	}

	size_t len = strlen(s);
	if (len == 0) {
		return "";
	}

	size_t prima = 0;

	while((s[prima] == ' ')) {
		prima++;
	}
	if (prima == len) {
		return "";
	}

	size_t dopo = len - 1;

	while (s[dopo] == ' ') {
		dopo--;
	}

	size_t len_t = dopo - prima + 1;
	char* t = malloc(len_t + 1);
	if (t == NULL) {
		return NULL;
	}

	strncpy(t, s + prima, len_t);
	t[len_t] = 0;

	printf("%s", t);

	return t;
}
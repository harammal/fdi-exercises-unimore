#define _CRT_SECURE_NO_WARNINGS

#include "decode.h"

int main(void) {

	FILE* f = fopen("file1.txt", "r");

	decode(f);
}
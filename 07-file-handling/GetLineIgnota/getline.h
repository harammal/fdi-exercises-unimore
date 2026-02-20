#ifndef GETLINE_H
#define GETLINE_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

extern size_t getline(char** lineptr, size_t* n, FILE* stream);

#endif // !GETLINE_H
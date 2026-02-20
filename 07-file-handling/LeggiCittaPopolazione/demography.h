#ifndef DEMOGRAPHY_H
#define DEMOGRAPHY_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

struct city {
    char* name; // max length = 255
    uint32_t population;
};

extern struct city* read_cities(const char* filename, uint32_t* n);

#endif // !DEMOGRAPHY_H
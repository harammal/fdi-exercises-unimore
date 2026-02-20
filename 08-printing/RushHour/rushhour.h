#if !defined RUSHHOUR_H
#define RUSHHOUR_H

#include <stdlib.h>
#include <stdio.h>

enum direction { DIR_H, DIR_V };

struct vehicle {
    int r, c;
    char name;
    enum direction dir;
    int size;
};

extern void print_board(const struct vehicle* v, size_t n);

#endif /* RUSHHOUR_H */
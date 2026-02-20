#ifndef MATRIX_H
#define MATRIX_H

#define E(m, r, c) (m)->data[(r) * (m)->cols + c]
#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix* mat_fromstring(const char* s);

#endif // !MATRIX_H

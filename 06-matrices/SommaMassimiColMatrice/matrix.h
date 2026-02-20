#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern double sum_max_col(const struct matrix* mat);

#endif /* MATRIX_H */
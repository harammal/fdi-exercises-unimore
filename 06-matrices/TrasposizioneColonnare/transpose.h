#if !defined TRANSPOSE_H
#define TRANSPOSE_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    char* data;
};

extern char* ct_encode(const char* message, const size_t* column_order, size_t n);

#endif /* TRANSPOSE_H */
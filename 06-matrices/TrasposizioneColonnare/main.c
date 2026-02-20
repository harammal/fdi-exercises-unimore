#include "transpose.h"

int main() {

	char message[] = "PIANTAREILCAMPODIETROLACOLLINA";
	size_t column_order[] = { 6, 1, 4, 5, 3, 2, 0 };
	size_t n = 7;

	char *ct =  ct_encode(message, column_order, n);

	return 0;
}
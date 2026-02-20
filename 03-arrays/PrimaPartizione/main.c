#include "partition.h"

int main(void) {
	int seq1[] = { 5, 1, 4, 3, 6, 8, 10, 7, 9 }; // 4
	int seq2[] = { 11, 1, 4, 3, 6, 8, 10, 7, 9 };// 9
	int seq3[] = { 1, 2, 4, 3, 6, 8, 10, 7, 9 };// 0
	int seq4[] = { -9, -7, -10, -8, -9, -6, 4, 3, 6, 8, 10, 7, 9 };// 5
	size_t n = 13;

	return (int)find_first_partition(seq4, n);
}
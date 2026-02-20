#include "rushhour.h"

int main(void) {

	struct vehicle v[5] = {
	{ 0, 2, 'O', DIR_V, 3 },
	{ 0, 4, 'A', DIR_H, 2 },
	{ 2, 0, 'X', DIR_H, 2 },
	{ 3, 0, 'P', DIR_H, 3 },
	{ 3, 5, 'Q', DIR_V, 3 },
	};

	print_board(v, 5);
}
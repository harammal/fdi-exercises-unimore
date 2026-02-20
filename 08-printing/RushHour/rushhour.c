#include "rushhour.h"

void print_board(const struct vehicle* v, size_t n) {
	char board[6][6];

	// INIZIALIZZAZIONE
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			board[i][j] = '.';
		}
	}

	// RIEMPIMENTO PLANCIA
	for (size_t i = 0; i < n; i++) {
		if (v[i].dir == DIR_H) {
			for (int j = 0; j < v[i].size; j++) {
				board[v[i].r][v[i].c + j] = v[i].name;
			}
		}
		else
		{
			for (int j = 0; j < v[i].size; j++) {
				board[v[i].r + j][v[i].c] = v[i].name;
			}
		}
	}

	// PRIMA RIGA
	printf("  012345 \n");
	// PRIMA CORNICE
	printf(" +------+\n");

	for (int i = 0; i < 6; i++) {
		printf("%d|", i);
		for (int j = 0; j < 6; j++) {
			printf("%c", board[i][j]);
		}
		printf("|\n");
	}

	printf(" +------+\n");
}
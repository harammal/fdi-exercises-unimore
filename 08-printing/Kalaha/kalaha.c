#include "kalaha.h"

void stampa_tavola(const struct tavola* t) {

	printf("+--+--+--+--+--+--+--+--+\n");

	printf("|  |%2d|%2d|%2d|%2d|%2d|%2d|  |\n", t->buca[11], t->buca[10], t->buca[9], t->buca[8], t->buca[7], t->buca[6]);

	printf("|%2d|--+--+--+--+--+--+%2d|\n", t->kalaha[1], t->kalaha[0]);

	printf("|  |%2d|%2d|%2d|%2d|%2d|%2d|  |\n", t->buca[0], t->buca[1], t->buca[2], t->buca[3], t->buca[4], t->buca[5]);

	printf("+--+--+--+--+--+--+--+--+\n");

	printf("Turno del giocatore %d", t->giocatore);
}
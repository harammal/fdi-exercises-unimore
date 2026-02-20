#if !defined KALAHA_H
#define KALAHA_H

#include <stdlib.h>
#include <stdio.h>

struct tavola {
    int buca[12];
    int kalaha[2];
    int giocatore;
};

extern void stampa_tavola(const struct tavola* t);

#endif /* KALAHA_H */
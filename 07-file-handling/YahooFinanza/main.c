#define _CRT_SECURE_NO_WARNINGS
#include "finance.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    size_t n = 0;
    struct value* data = read_historical_series("BTC-EUR.csv", &n);

    printf("Dati letti (%zu righe):\n", n);
    for (size_t i = 0; i < n; i++) {
        printf("Data: %s, Open: %.6f, High: %.6f, Low: %.6f, Close: %.6f, AdjClose: %.6f, Volume: %lld\n",
            data[i].Date, data[i].Open, data[i].High, data[i].Low,
            data[i].Close, data[i].AdjClose, data[i].Volume);
    }

    free(data);

    return 0;
}
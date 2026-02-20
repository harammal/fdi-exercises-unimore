#include <stdbool.h>

extern bool scrivi_intero(const char* filename, int i);

int main(void) {
    
    bool b =  scrivi_intero("scrivi_intero.txt", 15);

    return 0;
}
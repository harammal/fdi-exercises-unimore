#include <stdio.h>
#include <stdbool.h>

extern bool scrivi_carattere_su_file(const char* filename, char c);

int main(void) {
    const char* filename = "scrivi";
    char c = 'c';

    scrivi_carattere_su_file(filename, c);

    return 0;
}
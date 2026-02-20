#include <stdio.h>
#include <stdbool.h>

extern bool scrivi_stringa_su_file(const char* filename, const char* str);

int main(void) {
    
    scrivi_stringa_su_file("scrivi_stringa", "Ciao");

    return 0;
}
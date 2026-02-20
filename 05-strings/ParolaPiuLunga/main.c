#include <stdlib.h>

extern char* parola_piu_lunga(const char* sz);

int main(void) {

	char* lunga = parola_piu_lunga("    "); // NULL
	lunga = parola_piu_lunga("Ciaoooooo mi chiamoooooooooo Luis"); // 15
	lunga = parola_piu_lunga("c"); // 1
	lunga = parola_piu_lunga("   c    ccc"); // 3
	lunga = parola_piu_lunga("       ccc"); // 3
	lunga = parola_piu_lunga("cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"); // 221

	return 0;
}
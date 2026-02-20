extern int somma(const char* filename, int* s);

int main(void) {
	int s = 0;
	int test = somma("numeri.txt", &s);

	return s;
}
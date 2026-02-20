extern int strcmp_natural(const char* a, const char* b);

int main(void) {

	int cmp1 = strcmp_natural("Allegia 6R Clasteron", "Allegia 50B Clasteron");	 // --> -1
	int cmp2 = strcmp_natural("a33b5", "a21b53");    // --> +1
	int cmp3 = strcmp_natural("a21b5", "a21b53");    // --> -1
	int cmp4 = strcmp_natural("a21b105", "a21b53");  // --> +1
	int cmp5 = strcmp_natural("a21b105", "a21b105"); // -->  0
	int cmp6 = strcmp_natural("a21b105", "a21b10");  // --> +1
	int cmp7 = strcmp_natural("a21b105", "a21b105x");// --> -1

	return 0;
}